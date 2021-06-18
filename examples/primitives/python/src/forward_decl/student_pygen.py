"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 06/17/2021-10:23.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.forward_decl.student as pybind_student_pygen
from bind_utils import *
from metaclass import *


class Student(metaclass=OriginalMethodsMetaclass):
    """
    comments

    Documentation generated from: `cxx/forward_decl/student.hpp#L26
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L26>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L32
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L32>`_
        """
        pass
    
    @bind
    def add_teacher(self, t: Teacher) -> None:
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L40
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L40>`_
        """
        pass

    @bind
    def teachers(self) -> list:
        """
        Documentation generated from: `cxx/forward_decl/student.hpp#L49
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/student.hpp#L49>`_
        """
        pass
