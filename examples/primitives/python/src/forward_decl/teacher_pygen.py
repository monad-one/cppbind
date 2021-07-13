"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 07/13/2021-10:57.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.forward_decl.teacher as pybind_teacher_pygen
from bind_utils import *
from metaclass import *
import forward_decl.student_pygen as student


class Teacher(metaclass=OriginalMethodsMetaclass):
    """
    comments

    Documentation generated from: `cxx/forward_decl/teacher.hpp#L26
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/teacher.hpp#L26>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/forward_decl/teacher.hpp#L32
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/teacher.hpp#L32>`_
        """
        pass
    
    @bind
    def add_student(self, s: Student) -> None:
        """
        Documentation generated from: `cxx/forward_decl/teacher.hpp#L39
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/teacher.hpp#L39>`_
        """
        pass

    @bind
    def students(self) -> list:
        """
        Documentation generated from: `cxx/forward_decl/teacher.hpp#L48
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/teacher.hpp#L48>`_
        """
        pass
