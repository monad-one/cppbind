"""
This file was generated by iegen on 06/09/2021-11:41.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.inheritance.bicycle as pybind_bicycle_pygen
from bind_utils import *
from metaclass import *
from inheritance.vehicle_pygen import *


class Bicycle(Vehicle, metaclass=OriginalMethodsMetaclass):
    """"""
    
    @bind
    def __init__(self, number_of_seats: int):
        pass
