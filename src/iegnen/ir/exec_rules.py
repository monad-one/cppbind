"""
"""
import types
import clang.cindex as cli
from iegnen import logging as logging


class Context(object):

    def __init__(self, runner, node, lang, lang_config):
        assert node.clang_cursor, "cursor is not provided"
        self.runner = runner
        self.node = node
        self.lang = lang
        self.config = types.SimpleNamespace(**lang_config)

    @property
    def kind_name(self):
        return self.node.kind_name

    @property
    def args(self):

        _args = []

        def get_default(param_var):
            # todo implementation is odd for now
            assert param_var.kind == cli.CursorKind.PARM_DECL
            val = None
            for def_curs in param_var.walk_preorder():
                if def_curs.kind in [
                    cli.CursorKind.INTEGER_LITERAL,
                    cli.CursorKind.FLOATING_LITERAL,
                    cli.CursorKind.IMAGINARY_LITERAL,
                    cli.CursorKind.STRING_LITERAL,
                    cli.CursorKind.CHARACTER_LITERAL,
                    cli.CursorKind.CXX_NULL_PTR_LITERAL_EXPR,
                    cli.CursorKind.GNU_NULL_EXPR,
                    cli.CursorKind.NULL_STMT,
                ]:
                    if def_curs.kind == cli.CursorKind.GNU_NULL_EXPR:
                        val = 'NULL'
                    else:
                        val = next(def_curs.get_tokens(), None)
                        if val:
                            val = val.spelling
            return val

        for arg_c in self.node.clang_cursor.get_arguments():
            arg_params = dict(name=arg_c.spelling,  type=arg_c.type, cursor=arg_c)

            def_val = get_default(arg_c)
            if def_val:
                arg_params['default'] = def_val
            _args.append(arg_params)

        return _args

    @property
    def result_type(self):

        if self.node.clang_cursor.kind not in [cli.CursorKind.CXX_METHOD, cli.CursorKind.FUNCTION_DECL]:
            raise AttributeError(f"{self.__class__.__name__}.returns is invalid.")
        return self.node.clang_cursor.result_type

    @property
    def base_types(self):

        if self.node.clang_cursor.kind not in [cli.CursorKind.STRUCT_DECL, cli.CursorKind.CLASS_DECL]:
            raise AttributeError(f"{self.__class__.__name__}.base_type is invalid.")

        return [
            base_specifier.type
            for base_specifier in self.base_types_specifier_cursor
        ]

    @property
    def base_types_specifier_cursor(self):

        if self.node.clang_cursor.kind not in [cli.CursorKind.STRUCT_DECL, cli.CursorKind.CLASS_DECL]:
            raise AttributeError(f"{self.__class__.__name__}.base_type is invalid.")

        return [base_specifier
                for base_specifier in self.node.clang_cursor.get_children()
                if base_specifier.kind == cli.CursorKind.CXX_BASE_SPECIFIER
                ]

    @property
    def cursor(self):
        return self.node.clang_cursor

    @property
    def enum_values(self):

        if self.node.clang_cursor.kind not in [cli.CursorKind.ENUM_DECL]:
            raise AttributeError(f"{self.__class__.__name__}.enum_values is invalid.")

        _vals = []

        for enum_value_c in self.node.clang_cursor.walk_preorder():
            if enum_value_c.kind != cli.CursorKind.ENUM_CONSTANT_DECL:
                continue
            type_name = enum_value_c.kind.name.lower().replace("_decl", "")
            enum_val_params = dict(name=enum_value_c.spelling, type=type_name,
                                   value=enum_value_c.enum_value)

            _vals.append(enum_val_params)
        return _vals

    @property
    def parent_context(self):
        return self.runner.get_context(self.lang, self.node.parent.type_name)

    def find_by_type(self, search_type):
        return self.runner.get_context(self.lang, search_type)

    def __getattr__(self, name):
        val = self.node.args.get(name, None)
        if val is None:
            raise AttributeError(f"{self.__class__.__name__}.{name} is invalid.\
API has no '{name}' attribute for {self.node.displayname}.")
        val = val.get(self.lang, None)
        if val is None:
            raise AttributeError(f"{self.__class__.__name__}.{name} is invalid. API has no '{name}'\
                                    attribute for language {self.lang}.")
        return val


class RunRule(object):

    def __init__(self, ir):
        self.ir = ir
        # calling order should be such as that parent node processes first
        self.api_call_order = [
            {'class', 'enum'},
            {'constructor'},
            {'method'},
            {}
        ]

    def run(self, rules, builders, langs_config):  # noqa: C901

        # running order is defined by type of node
        # at first we run nodes for namespace/class/enums and then for methods

        # walk is traversing in dept first order
        self.all_contexts = dict()
        # executes once for a type
        processed = dict()
        for calling_api in self.api_call_order:
            logging.debug(f"Calling APIs: {calling_api}")

            def _run_recursive(node):
                stack_added = False
                if node.api and (not calling_api or node.api in calling_api) and node not in processed:
                    ancesstor = node.ancestor_with_api
                    if ancesstor in processed:
                        # for already called api resume builders scope stack
                        logging.debug(f"Restoring stack for {ancesstor.displayname}.")
                        self.restore_stacks(builders, processed[ancesstor])
                        logging.debug(
                            f"Restored stack {self.__str_stacks(processed[ancesstor])}."
                        )
                    # allocate scope
                    stack_added = True
                    for b in builders.values():
                        b.add_scope_stack()

                    # call api
                    self.call_api(rules, node.api, node, builders, langs_config)
                    logging.debug(f"Capturing stack for {node.displayname}.")
                    processed[node] = self.capture_stacks(builders)
                    logging.debug(f"Captured stack {self.__str_stacks(processed[node])}.")

                if node.children:
                    logging.debug(f"Processing children for {node.displayname}.")
                    for child in node.children:
                        _run_recursive(child)
                    logging.debug(f"End processing children for {node.displayname}.")

                if stack_added:
                    for b in builders.values():
                        b.pop_scope_stack()

            # create common scope for entire ir
            # we have to add this scope to be able to allow write into single file from multiple roots
            # since we do not have gen api for file
            # we register file and add one scope
            for b in builders.values():
                b.add_scope_stack()

            for root in self.ir.roots:
                _run_recursive(root)

            for b in builders.values():
                b.pop_scope_stack()

    def capture_stacks(self, builders):
        return {lang: builder.capture_stacks() for lang, builder in builders.items()}

    def restore_stacks(self, builders, capture_data):
        for lang, builder in builders.items():
            builder.restore_stacks(capture_data[lang])

    def call_api(self, rules, api, node, builders, langs_config):
        att_name = "gen_" + api
        for lang, builder in builders.items():
            logging.debug(f"Call API: {api} on {node.displayname} for {lang}")
            func = getattr(rules[lang], att_name)
            func(self.access_context(lang, node, langs_config[lang]), builder)

    def access_context(self, lang, node, lang_config):
        if node is None:
            return None
        cntx = self.all_contexts.setdefault(lang,
                                            {}).setdefault(node.type_name,
                                                           Context(self, node, lang, lang_config))
        return cntx

    def get_context(self, lang, type_name):
        cntx = self.all_contexts.get(lang, {}).get(type_name, None)
        return cntx

    def __str_stacks(self, capture_data):
        # first lang stack data
        stack_data = next(iter(capture_data.values()))
        return f"{[s.keys() for fs in stack_data.values() for s in fs]}"
