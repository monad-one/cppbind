from __future__ import annotations
from typing import *
import examples.overloads.utils as pybind_utils_pygen
from bind_utils import *
from metaclass import *


class Utils(metaclass=OriginalMethodsMetaclass):
    """
    An example for with overloaded methods."""
    
    @bind
    def __init__(self):
        pass
    
    @classmethod
    @bind
    def sum(cls, first: int, second: int) -> int:
        """
        Sum two ints."""
        pass

    @classmethod
    @bind
    def sum(cls, first: float, second: float) -> float:
        """
        Sum two floats."""
        pass

    @bind
    def concatenate(self, first: str, second: str) -> str:
        """
        Concatenate with two strings."""
        pass

    @bind
    def concatenate(self, first: str, second: str, third: str) -> str:
        """
        Concatenate with three strings."""
        pass
