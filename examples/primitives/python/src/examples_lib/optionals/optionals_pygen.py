"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 12/07/2021-12:30.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.optionals.optionals as pybind_optionals_pygen
import examples_lib.enums.color_pygen as color
import examples_lib.getters.person_pygen as person
import examples_lib.simple.project_pygen as project
import examples_lib.simple.task.task_pygen as task
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class Optionals(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/optionals/optionals.hpp#L23
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L23>`_
    """
    
    @bind
    def __init__(self):
        """
        constructor
        Documentation generated from: `cxx/optionals/optionals.hpp#L33
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L33>`_
        """
        pass
    
    @bind
    def optional_ptr_with_nullptr_default(self, task: Optional[task.PyTask] = None) -> Optional[task.PyTask]:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L42
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L42>`_
        """
        pass

    @bind
    def optional_ptr_with_null_default(self, task: Optional[task.PyTask] = None) -> Optional[task.PyTask]:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L52
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L52>`_
        """
        pass

    @bind
    def optional_f_d_ptr_with_nullptr_default(self, project: Optional[project.Project] = None) -> Optional[project.Project]:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L62
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L62>`_
        """
        pass

    @bind
    def optional_shared_ptr_with_nullptr_default(self, person: Optional[Person] = None) -> Optional[Person]:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L72
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L72>`_
        """
        pass

    @bind
    def optional_int_with_default(self, value: int = 5) -> int:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L80
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L80>`_
        """
        pass

    @bind
    def optional_long_with_default(self, value: int = 7) -> int:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L89
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L89>`_
        """
        pass

    @bind
    def optional_double_with_default(self, value: float = 9.0) -> float:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L98
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L98>`_
        """
        pass

    @bind
    def optional_float_with_default(self, value: float = 11.0) -> float:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L107
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L107>`_
        """
        pass

    @bind
    def optional_bool_with_default(self, value: bool = True) -> bool:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L117
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L117>`_
        """
        pass

    @bind
    def optional_string_with_default(self, optional_str: str = "abc") -> str:
        """
        @param[in] optional_str string with default value
        Documentation generated from: `cxx/optionals/optionals.hpp#L128
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L128>`_
        """
        pass

    @bind
    def optional_string_view_with_default(self, optional_str: str = "abc") -> str:
        """
        @param[in] optional_str string with default value
        Documentation generated from: `cxx/optionals/optionals.hpp#L138
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L138>`_
        """
        pass

    @bind
    def optional_char_with_default(self, symbol: str = ',') -> str:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L150
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L150>`_
        """
        pass

    @bind
    def optional_char_pointer_with_default(self, optional_str: str = "def") -> str:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L159
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L159>`_
        """
        pass

    @bind
    def optional_enum_with_default(self, c: color.Color = color.Color.Red) -> color.Color:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L168
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L168>`_
        """
        pass

    @bind
    def optional_enum_with_default_and_field_prefix(self, c: color.ColorShade = color.ColorShade.ShadeLight) -> color.ColorShade:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L177
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L177>`_
        """
        pass

    @bind
    def optional_enum_with_internal_default(self, c: color.ColorShade) -> color.ColorShade:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L186
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L186>`_
        """
        pass

    @bind
    def optional_ref_with_default_complex_value(self, task: task.PyTask = None) -> task.PyTask:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L194
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L194>`_
        """
        pass

    @bind
    def optional_by_val_with_default_complex_value(self, task: task.PyTask = None) -> task.PyTask:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L203
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L203>`_
        """
        pass
