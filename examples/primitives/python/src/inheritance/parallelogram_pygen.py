from __future__ import annotations
from typing import *
import examples.inheritance.parallelogram as pybind_parallelogram_pygen
from bind_utils import *
from metaclass import *
from abc import abstractmethod


class Parallelogram(metaclass=OriginalMethodsMetaclass):
    """"""
    @abstractmethod
    def __init__(self, *args, **kwargs):
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