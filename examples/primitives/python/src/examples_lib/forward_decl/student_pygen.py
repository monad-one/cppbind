"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 04/12/2022-12:19.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.forward_decl.student as pybind_student_pygen
import examples_lib.forward_decl.teacher_pygen as teacher_pygen
from examples_lib.iegen.bind_utils_pygen import *
from examples_lib.iegen.metaclass_pygen import *


class Student(metaclass=IEGenMetaclass):
    """
    Documentation generated from: `cxx/forward_decl/student.hpp#L19
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L19>`_
    """
    
    @bind
    def __init__(self, st_name: str):
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L26
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L26>`_
        """
        pass

    @bind
    def __init__(self, teachers: List[teacher_pygen.Teacher]):
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L33
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L33>`_
        """
        pass
    
    @property
    @bind
    def name(self) -> str:
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L59
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L59>`_
        """
        pass

    @name.setter
    @bind
    def name(self, value: str):
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L59
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L59>`_
        """
        pass
    
    @bind
    def add_teacher(self, t: teacher_pygen.Teacher) -> None:
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L41
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L41>`_
        """
        pass

    @bind
    def teachers(self) -> List[teacher_pygen.Teacher]:
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L51
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L51>`_
        """
        pass
