"""
This file was generated by iegen on 06/07/2021-18:33.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.inheritance.bicycle as pybind_bicycle_pygen
from bind_utils import *
from metaclass import *
from inheritance.vehicle_pygen import *


class Bicycle(Vehicle, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/bicycle.hpp#L16 <https://github.com/PicsArt/iegen/tree/master/examples/primitivescxx/inheritance/bicycle.hpp#L16>`_
    """
    
    @bind
    def __init__(self, number_of_seats: int):
        """
        Documentation generated from: `cxx/inheritance/bicycle.hpp#L22 <https://github.com/PicsArt/iegen/tree/master/examples/primitivescxx/inheritance/bicycle.hpp#L22>`_
        """
        pass
