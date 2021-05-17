from __future__ import annotations
from typing import *
import examples.inheritance.rectangle as pybind_rectangle_pygen
from bind_utils import *
from metaclass import *
from inheritance.parallelogram_pygen import *


class Rectangle(Parallelogram, metaclass=OriginalMethodsMetaclass):
    """"""
    
    @bind
    def __init__(self, length: float, width: float):
        pass
    
    @property
    @bind
    def area(self) -> float:
        """"""
        pass

    @property
    @bind
    def length(self) -> float:
        """"""
        pass

    @property
    @bind
    def width(self) -> float:
        """"""
        pass
    
    @bind
    def perimeter(self) -> float:
        """"""
        pass