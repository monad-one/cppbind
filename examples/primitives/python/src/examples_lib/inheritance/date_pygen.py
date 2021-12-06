"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 12/06/2021-18:17.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.inheritance.date as pybind_date_pygen
import examples_lib.inheritance.base_pygen as base
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class Date(base.Base, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/date.hpp#L20
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/date.hpp#L20>`_
    """
    
    @bind
    def __init__(self, d: int, m: int, y: int):
        """
        Documentation generated from: `cxx/inheritance/date.hpp#L27
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/date.hpp#L27>`_
        """
        pass
    
    @property
    @bind
    def date(self) -> str:
        """
        Documentation generated from: `cxx/inheritance/date.hpp#L51
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/date.hpp#L51>`_
        """
        pass
    
    @bind
    def value(self) -> str:
        """
        Documentation generated from: `cxx/inheritance/date.hpp#L42
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/date.hpp#L42>`_
        """
        pass
