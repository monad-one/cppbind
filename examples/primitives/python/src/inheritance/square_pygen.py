"""
This file was generated by iegen on 05/17/2021-17:49.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.inheritance.square as pybind_square_pygen
from bind_utils import *
from metaclass import *
from inheritance.rhombus_pygen import *
from inheritance.rectangle_pygen import *


class Square(Rhombus, Rectangle, metaclass=OriginalMethodsMetaclass):
    """"""
    
    @bind
    def __init__(self, side: float):
        pass
    
    @property
    @bind
    def area(self) -> float:
        """"""
        pass
    
    @bind
    def perimeter(self) -> float:
        """"""
        pass
