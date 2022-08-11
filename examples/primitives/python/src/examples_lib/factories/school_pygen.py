"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 07/24/2022-14:05.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.factories.school as pybind_school_pygen
import examples_lib.forward_decl.teacher_pygen as forward_decl_teacher_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *


class School(metaclass=CppBindMetaclass):
    """
    Documentation generated from: `cxx/factories/school.h#L17
    <https://github.com/PicsArt/cppbind/tree/master/examples/primitives/cxx/factories/school.h#L17>`_
    """
    
    @bind
    def __init__(self, teachers: List[forward_decl_teacher_pygen.Teacher]):
        """
        Documentation generated from: `cxx/factories/school.h#L25
        <https://github.com/PicsArt/cppbind/tree/master/examples/primitives/cxx/factories/school.h#L25>`_
        """
        pass

    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/factories/school.h#L32
        <https://github.com/PicsArt/cppbind/tree/master/examples/primitives/cxx/factories/school.h#L32>`_
        """
        pass
    
    @property
    @bind
    def teachers(self) -> List[forward_decl_teacher_pygen.Teacher]:
        """
        Documentation generated from: `cxx/factories/school.h#L48
        <https://github.com/PicsArt/cppbind/tree/master/examples/primitives/cxx/factories/school.h#L48>`_
        """
        pass
    
    @bind
    def add_teacher(self, teacher: forward_decl_teacher_pygen.Teacher) -> None:
        """
        Documentation generated from: `cxx/factories/school.h#L40
        <https://github.com/PicsArt/cppbind/tree/master/examples/primitives/cxx/factories/school.h#L40>`_
        """
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass