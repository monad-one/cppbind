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

import examples.inheritance.rhombus as pybind_rhombus_pygen
from bind_utils import *
from metaclass import *
from inheritance.parallelogram_pygen import *


class Rhombus(Parallelogram, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/rhombus.hpp#L17
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/rhombus.hpp#L17>`_
    """
    
    @bind
    def __init__(self, diagonal1: float, diagonal2: float):
        """
        Documentation generated from: `cxx/inheritance/rhombus.hpp#L23
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/rhombus.hpp#L23>`_
        """
        pass
