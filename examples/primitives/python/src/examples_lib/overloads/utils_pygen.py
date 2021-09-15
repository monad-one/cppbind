"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 08/30/2021-10:41.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.overloads.utils as pybind_utils_pygen
from examples_lib.bind_utils import *
from examples_lib.metaclass import *


class Utils(metaclass=OriginalMethodsMetaclass):
    """
    An example with overloaded methods.
    Documentation generated from: `cxx/overloads/utils.hpp#L15
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/overloads/utils.hpp#L15>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/overloads/utils.hpp#L20
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/overloads/utils.hpp#L20>`_
        """
        pass
    
    @classmethod
    @bind
    def sum(cls, first: int, second: int) -> int:
        """
        Sum two ints.
        Documentation generated from: `cxx/overloads/utils.hpp#L28
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/overloads/utils.hpp#L28>`_
        """
        pass

    @classmethod
    @bind
    def sum(cls, first: float, second: float) -> float:
        """
        Sum two floats.
        Documentation generated from: `cxx/overloads/utils.hpp#L38
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/overloads/utils.hpp#L38>`_
        """
        pass

    @bind
    def concatenate(self, first: str, second: str) -> str:
        """
        Concatenate with two strings.
        Documentation generated from: `cxx/overloads/utils.hpp#L48
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/overloads/utils.hpp#L48>`_
        """
        pass

    @bind
    def concatenate(self, first: str, second: str, third: str) -> str:
        """
        Concatenate with three strings.
        Documentation generated from: `cxx/overloads/utils.hpp#L58
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/overloads/utils.hpp#L58>`_
        """
        pass
