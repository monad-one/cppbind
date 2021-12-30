"""
Main module which parses command line arguments and runs iegen.
"""

import argparse
import json
import os
import sys

import iegen
from iegen import default_config, logging, LOG_LEVELS
from iegen.builder.ir_builder import CXXIEGIRBuilder
from iegen.builder.ir_post_processor import IRPostProcessor
from iegen.builder.out_builder import Builder
from iegen.common.error import Error, IEGError
from iegen.common.yaml_process import to_value
from iegen.context_manager.ctx_desc import ContextDescriptor
from iegen.context_manager.ctx_mgr import ContextManager
from iegen.ir.ast import RootNode
from iegen.ir.exec_rules import RunRule
from iegen.parser.filter import CXXIegFilter
from iegen.parser.ieg_parser import CXXParser
from iegen.utils import (
    clear_iegen_generated_files,
    get_host_platform,
    get_var_real_type,
    load_rule_module,
    copy_yaml_config_template,
    absolute_path_from_glob
)


class WrapperGenerator:
    """
    Class for generating wrappers for target language from source files.
    """

    def __init__(self):
        pass

    @staticmethod
    def run(plat_lang_options, ctx_desc, cmd_line_args):
        """Run iegen for every platform + language combination"""

        logging.info(
            f"Start running wrapper generator for "
            f"{', '.join(list(map(lambda x: x[0] + '.' + x[1], plat_lang_options)))} options.")
        for plat, lang in plat_lang_options:
            WrapperGenerator.run_for(plat, lang, ctx_desc, cmd_line_args)

    @staticmethod
    def run_for(platform, language, ctx_desc, var_values):
        """Run iegen for current target language + platform"""

        logging.info(f"Start running wrapper generator for "
                     f"{language} language for {platform} platform.")

        ir = RootNode()
        ctx_mgr = ContextManager(ctx_desc, platform, language)
        ir_builder = CXXIEGIRBuilder(ir, ctx_mgr)

        # Currently `start_root` method is used to evaluate root context and parser method needs root context
        # that's why we call `start_root` here. Maybe later we'll move it into parser logic.
        root_ctx = ir_builder.start_root(var_values)

        if not root_ctx:
            Error.critical(f"""Could not find any config file with path - {default_config.application.context_def_glob}.
                           Run `iegen init` command under project's root directory to create an initial config file.""")

        logging.debug("Start parsing and building IR.")

        exclude_files = absolute_path_from_glob(root_ctx['src_exclude_glob']) if root_ctx['src_exclude_glob'] else None
        cxx_ieg_filter = CXXIegFilter(exclude_files=exclude_files, ir=ir)
        parser = CXXParser(filter_=cxx_ieg_filter)
        parser.parse(ir_builder, **root_ctx)

        # `end_root` is called here to keep symmetry with the `start_root` call
        ir_builder.end_root()
        ir_builder.ir._set_built_flag()

        if Error.has_error():
            Error.critical('Cannot continue: iegen error has occurred')

        ir_post_processor = IRPostProcessor()
        ir = ir_post_processor.process_ir(ir_builder.ir)
        logging.debug("IR is ready.")

        run_rule = RunRule(ir, ctx_desc, platform, language)
        # load rule modules
        logging.debug("Loading ruler scripts.")
        lang_rule = load_rule_module(language,
                                     default_config.application.rule,
                                     default_config.default_config_dirs)
        logging.debug("Creating builders and running rules on IR.")
        builder = Builder()
        run_rule.run(lang_rule, builder)
        # now we can dump builders into file
        logging.debug("Dumping builders to files.")

        if Error.has_error():
            raise Error.critical('Cannot continue: iegen error has occurred')

        builder.dump_outputs()


def run(args, ctx_desc):
    """Process language + platform command line arguments and run the main function"""
    plat_lang_options = []
    for option in args.plat_lang_options:
        if '.' in option:
            plat, lang = option.split('.')
        else:
            plat, lang = get_host_platform(), option
        plat_lang_options.append((plat, lang))

    try:
        WrapperGenerator.run(set(plat_lang_options), ctx_desc, args)
    except IEGError:
        sys.exit(1)


def clean(args):
    """Cleans the files in directory generated by iegen"""
    if not os.path.isdir(args.dir):
        raise ValueError(f'{args.dir} is not a valid directory.')
    clear_iegen_generated_files(args.dir)


def init(args):
    """Creates an initial iegen config file which contains default values."""
    copy_yaml_config_template()


def run_package():
    """
    Command line arguments parser
    """

    # register parent parser
    parent_parser = argparse.ArgumentParser(add_help=False)
    parent_parser.add_argument('--log-level', choices=LOG_LEVELS, type=str, help='Log level', required=False)
    parent_parser.add_argument('--error-limit',
                               type=int,
                               help='Error limit',
                               default=int(default_config.application.error_limit),
                               required=False)

    parser = argparse.ArgumentParser(description="Runs iegen for given languages.")
    sub_parser = parser.add_subparsers(required=True)

    # register clean sub parser
    clean_parser = sub_parser.add_parser('clean', help='Clean all iegen generated files from directory.',
                                         parents=[parent_parser])
    clean_parser.add_argument('dir', help='Directory from where all iegen generated files will be deleted.',)
    clean_parser.set_defaults(func=clean)

    # register init sub parser
    init_parser = sub_parser.add_parser('init', help='Creates an initial config file in current directory.',
                                        parents=[parent_parser])
    init_parser.set_defaults(func=init)

    # register run sub parser
    run_parser = sub_parser.add_parser('run', help='Run iegen to generate code for given languages.',
                                       parents=[parent_parser])

    current_sub_parser_args = parent_parser.parse_known_args()[1]
    if current_sub_parser_args and current_sub_parser_args[0] == 'run':
        ctx_desc = ContextDescriptor(getattr(default_config.application, 'context_def_glob', None))
        all_languages = ctx_desc.get_deduced_languages()

        plat_lang_choices = all_languages + [plat + '.' + lang for plat in default_config.platforms
                                             for lang in all_languages]
        run_parser.add_argument('plat_lang_options',
                                type=str,
                                nargs='+',
                                choices=plat_lang_choices,
                                help='list of languages for which wrapper will be generated.')

        # add arguments for setting context variables from command line
        for name, prop in ctx_desc.get_var_def().items():
            if 'cmd_line' in prop.get('allowed_on'):
                var_type = get_var_real_type(prop.get('type'))
                var_desc = to_value(prop.get('description'))

                plat_lang_options = [f"--{plat}.{lang}.{name}" for plat in default_config.platforms
                                     for lang in all_languages]
                plat_options = [f"--{plat}.{name}" for plat in default_config.platforms]
                lang_options = [f"--{lang}.{name}" for lang in all_languages]

                for option in plat_lang_options + plat_options + lang_options + [f"--{name}"]:
                    # suppress option help if it is not pure one (has plat/lang specifications)
                    var_help = var_desc if option == f"--{name}" else argparse.SUPPRESS

                    if var_type is list:
                        run_parser.add_argument(option, help=var_help, nargs='+')
                    elif var_type is dict:
                        run_parser.add_argument(option, help=var_help, type=json.loads)
                    elif var_type is bool:
                        run_parser.add_argument(option, help=var_help, action='store_true')
                    else:
                        run_parser.add_argument(option, help=var_help, type=var_type)

        run_parser.set_defaults(func=lambda arg: run(arg, ctx_desc))

    # print help if nothing is passed
    args = parser.parse_args(args=None if current_sub_parser_args else ['--help'])

    iegen.init_logger(args.log_level)

    Error.set_error_limit(args.error_limit)

    args.func(args)


if __name__ == "__main__":
    run_package()
