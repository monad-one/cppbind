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

import examples.inheritance.bicycle as pybind_bicycle_pygen
import examples_lib.inheritance.vehicle_pygen as vehicle
from examples_lib.bind_utils import *
from examples_lib.metaclass import *


class Bicycle(vehicle.Vehicle, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/bicycle.hpp#L14
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/bicycle.hpp#L14>`_
    """
    
    @bind
    def __init__(self, number_of_seats: int):
        """
        Documentation generated from: `cxx/inheritance/bicycle.hpp#L20
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/bicycle.hpp#L20>`_
        """
        pass
