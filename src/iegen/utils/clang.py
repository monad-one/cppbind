"""
Helper functions working with clang
"""
import re

import clang.cindex as cli
from itertools import chain


def get_pointee_type(clang_type):
    return clang_type.get_pointee() if clang_type.get_pointee().spelling else clang_type


def get_canonical_type(clang_type):
    return clang_type.get_canonical() if clang_type.get_canonical().spelling else clang_type


def is_template(clang_type):
    return clang_type.get_num_template_arguments() != -1


def template_argument_types(clang_type):
    return [clang_type.get_template_argument_type(num)
            for num in range(clang_type.get_num_template_arguments())]


def template_type_name(clang_type):
    name = get_unqualified_type_name(clang_type)
    end_indx = name.find('<')
    if end_indx != -1:
        return name[:end_indx].strip()
    return name


def is_rval_referance(cursor):
    return cursor.kind == cli.TypeKind.LVALUEREFERENCE


def _get_unqualified_type_name(type_name):
    """
    TODO: python API is missing
    """
    qualifiers = ["const ", "volatile "]
    for qual in qualifiers:
        if type_name.startswith(qual):
            return _get_unqualified_type_name(type_name[len(qual):])
    return type_name


def get_unqualified_type_name(clang_type):
    return _get_unqualified_type_name(clang_type.spelling)


def get_semantic_ancestors(cursor):
    ancestors = []
    _cursor = cursor.semantic_parent

    while(_cursor):
        ancestors.append(_cursor)
        _cursor = _cursor.semantic_parent

    return ancestors[::-1]


def get_full_name(cursor):
    ancestors = get_semantic_ancestors(cursor)
    ancestors = ancestors[1::] + [cursor]
    return '::'.join([c.spelling for c in ancestors])


def get_full_displayname(cursor):
    ancestors = get_semantic_ancestors(cursor)
    ancestors = ancestors[1::]

    full_display_name = '::'.join([c.displayname for c in ancestors])
    if cursor.kind == cli.CursorKind.CLASS_TEMPLATE:
        return f'{full_display_name}::{cursor.spelling}'
    else:
        return f'{full_display_name}::{cursor.displayname}'


def is_final_cursor(cursor):
    if cursor.kind == cli.CursorKind.CXX_METHOD:
        if not cursor.is_virtual_method():
            return True
        return cli.CursorKind.CXX_FINAL_ATTR in chain(
            (c.kind for c in cursor.get_children()),
            (c.kind for c in cursor.semantic_parent.get_children())
        )
    else:
        return cli.CursorKind.CXX_FINAL_ATTR in (c.kind for c in cursor.get_children())


def get_base_cursor(cursor):
    """
    Returns the base class cursor for the given cursor.
    If there are multiple branches(inheritance) then the left(first) base is taken.
    Args:
        cursor (clang.cindex.Cursor):
    Returns:
        clang.cindex.Cursor: The base class cursor.
    """
    bases = [base_specifier for base_specifier in cursor.get_children() if
             base_specifier.kind == cli.CursorKind.CXX_BASE_SPECIFIER]
    if bases:
        return get_base_cursor(bases[0].get_definition())
    else:
        return cursor


def extract_pure_comment(raw_comment, end_index=None):
    """
    Returns pure comment(without API part).
    Args:
        raw_comment(str): Doxygen comment.
        end_index(int): Index to where to consider, if not specified then will consider the whole string.
    Returns:
        str: Characters removed type_name.
    """
    end_index = end_index or len(raw_comment) - 1
    return [comment_line.lstrip('/* ') for comment_line in raw_comment[:end_index].splitlines()[:-1]]


def replace_template_choice(type_name, template_choice):
    """
    Return type name with replaced template arguments e.g. for a::Foo<T,V> will return a::Foo<Project,int>.
    Args:
        type_name(str): Type name. e.g. a::Foo<T,V>
        template_choice (dict): Containing template current value, e.g. {"T": "a::Project", "V": "int"}
    Returns:
        str: Replaced type_name.
    """
    replaced = type_name
    if template_choice:
        if replaced in template_choice:
            return template_choice[replaced]
        for typename, value in template_choice.items():
            replaced = re.sub(rf'([,<\s]?)\s*{typename}([\s,>&*]\s*)', rf'\g<1>{value}\g<2>', replaced)
    return replaced


def is_declaration(cursor):
    """
    Checks if the cursor is forward declaration or not.
    Args:
        cursor(Cursor): Clang Cursor.
    Returns:
        bool: True if the cursor is forward declaration and False otherwise.
    """
    # todo check also function
    return cursor.kind in [cli.CursorKind.CLASS_DECL, cli.CursorKind.ENUM_DECL, cli.CursorKind.STRUCT_DECL,
                           cli.CursorKind.CLASS_TEMPLATE] and not cursor.is_definition()


def is_unexposed(clang_type):
    """
    Recursively checks if the type has an unexposed template argument.
    E.g. std::vector<std::shred_ptr<T>> is unexposed.
    Args:
        clang_type(Type): Clang Type.
    Returns:
        bool: True if the has an unexposed template argument and False otherwise.
    """
    clang_type = get_canonical_type(clang_type)
    if clang_type.kind == cli.TypeKind.UNEXPOSED:
        return True
    elif is_template(clang_type):
        for arg_type in template_argument_types(clang_type):
            _is_unexposed = is_unexposed(arg_type)
            if _is_unexposed:
                return _is_unexposed
    return False