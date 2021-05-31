import types
import pytest
import hashlib
import os
import yaml
from collections import OrderedDict

from iegen.parser.ieg_parser import CXXParser
from iegen.parser.ieg_api_parser import APIParser
from iegen.builder.ir_builder import CXXPrintProcsessor
from iegen.common.yaml_process import YamlKeyDuplicationError

def test_parser(parser_config):
    parsser = CXXParser(parser_config=parser_config)
    print(parser_config)
    processor = CXXPrintProcsessor()
    for c in parsser.parss_x():
        processor(c)

def test_parser_processor(parser_config):
    parsser = CXXParser(parser_config=parser_config)
    # print(parser_config)
    processor = CXXPrintProcsessor()
    parsser.parse(processor)


def test_parser_processor_cr_counter(parser_config):
    parsser = CXXParser(parser_config=parser_config)
    # print(parser_config)
    count = 0
    max_dept = 0
    dept = 0

    count_processor = types.SimpleNamespace()

    def incr_dept(cursor):
        nonlocal max_dept
        nonlocal dept
        nonlocal count
        count += 1
        dept += 1
        max_dept = max(dept, max_dept)

    def decr_dept(cursor):
        nonlocal dept
        dept -= 1

    count_processor.start_cursor = incr_dept
    count_processor.end_cursor = decr_dept
    parsser.parse(count_processor)

    assert count == 20, "number of cursors has bean changed"
    assert max_dept == 6, "max depth has bean changed"


@pytest.mark.parametrize(
    "attributes, api_start_kw, test_data, res_md5",
    [
        (
            'attributes',
            'api_start_kw',
            """
            /**
            * comments
            *
            * __API__
            * gen: class
            * kotlin.file: utils
            * kotlin.module: pi.xxx
            * swift.prefix: PI
            */
            """,
            "99843fbfc41cfdc7cc598dd819bec8e6"
        ),
        (
            'attributes',
            'api_start_kw',
            """
            /**
            * commants
            *
            * __API__
            * gen: class
            * shared_ref: False
            */
            """,
            "9874a230226c0e7c4f16a56ced234a75"
        )
    ],
    indirect=['attributes', 'api_start_kw']
)
def test_API_parser(attributes, api_start_kw, test_data, res_md5):

    parsser = APIParser(attributes=attributes, api_start_kw=api_start_kw)
    api, args, _ = parsser.parse_comments(
        test_data
    )
    str_res = f"api={api}, args={args}"
    print(str_res)
    assert hashlib.md5(str_res.encode()).hexdigest() == res_md5,\
        "API parser result has bean changed."


@pytest.mark.parametrize(
    "attributes, api_start_kw, test_data",
    [
        (
            'attributes',
            'api_start_kw',
            """
            /**
            * comments
            *
            * __API__
            * kotlin.file: utils
            dd
            * kotlin.module: pi.xxx
            * swift_prefix: PI
            */
            """,
        ),
        (
            'attributes',
            'api_start_kw',
            """
            /**
            * commants
            *
            * __API__
            * gen: class
            * shared_ref
            */
            """,
        )
    ],
    indirect=['attributes', 'api_start_kw']
)
def test_API_parser_negative(attributes, api_start_kw, test_data):

    parsser = APIParser(attributes=attributes, api_start_kw=api_start_kw)
    try:
        api, args = parsser.parse_comments(
            test_data
        )
    except Exception:
        pass
    else:
        assert False, "should get error"

def test_external_API_parser_negative(parser_config):
    test_script_dir = os.path.dirname(os.path.realpath(__file__))
    api_rules_dir = os.path.join(test_script_dir, 'api_rules_dir', 'negative')
    for dir in os.listdir(api_rules_dir):
        parser_config.api_type_attributes_glob = os.path.join(api_rules_dir, dir, '*.yaml')
        try:
            APIParser.build_api_type_attributes(parser_config)
        except (YamlKeyDuplicationError, yaml.YAMLError):
            pass
        except Exception as e:
            assert False, f"unexpected exception: {e}"
        else:
            assert False, "should get error"


def test_external_API_parser_positive(parser_config):
    test_script_dir = os.path.dirname(os.path.realpath(__file__))
    api_rules_dir = os.path.join(test_script_dir, 'api_rules_dir', 'positive')

    results = {
        'with_many_files': '61e1677833d942e27eae06854b3652e7',
        'with_nested_cfg': 'cb6548fb573f46ddead383ade7a712a1',
        'with_mixed_cfg': '61e1677833d942e27eae06854b3652e7',
        'with_simple_cfg': 'e7cee96cb9c30a9a13621db5324122b6'
    }

    for dir, res_md5 in results.items():
        parser_config.api_type_attributes_glob = os.path.join(api_rules_dir, dir, '*.yaml')
        try:
            res = APIParser.build_api_type_attributes(parser_config)

            ordered_res = OrderedDict()
            for key in sorted(res.keys()):
                ordered_res[key] = res[key].attr

            assert hashlib.md5(str(ordered_res).encode()).hexdigest() == res_md5, \
                "External API parser results has bean changed."
        except Exception:
            assert False, "should not get error"
