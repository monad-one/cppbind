"""
Helper codes for kotlin conversion
"""
from . import *


def make_comment(pure_comment):
    return make_doxygen_comment(pure_comment)

def make_enum_case_comment(pure_comment):
    return make_comment(pure_comment)


def arg_str(type_name, name, default=None, **kwargs):
    arg_str = name + ': ' + type_name
    if default:
        val = default
        if val in ['nullptr', 'NULL']:
            arg_str += '? = null'
        else:
            arg_str += " = " + val
    return arg_str


def get_jni_func_name(package_name, class_name, template_suffix, method_name, args_type_name=None):
    def fix_name(name):
        for s, r in [('_', '_1'), ('.', '_'), (';', '_2'), ('[', '_3')]:
            name = name.replace(s, r)
        return name

    args_type_signature = dict(
        jboolean='Z',
        jbyte='B',
        jchar='C',
        jshort='S',
        jint='I',
        jlong='J',
        jfloat='F',
        jdouble='D',
        jobject='Ljava_lang_Object_2',
        jstring='Ljava_lang_String_2',
    )
    package_name = fix_name(package_name)
    class_name = fix_name(class_name)
    method_name = fix_name(method_name)
    if template_suffix:
        class_name += fix_name(template_suffix)
    if args_type_name is None or any([a not in args_type_signature for a in args_type_name]):
        return f'Java_{package_name}_{class_name}_{method_name}'
    else:
        return f'Java_{package_name}_{class_name}_{method_name}__\
{"".join([args_type_signature[arg] for arg in args_type_name])}'
