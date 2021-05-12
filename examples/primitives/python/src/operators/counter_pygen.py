from __future__ import annotations
from typing import *
import examples.operators.counter as pybind_counter_pygen
from bind_utils import *
from metaclass import *


class Counter(metaclass=OriginalMethodsMetaclass):
    """
    An example for with overloaded methods.
    """
    @bind
    def __init__(self, count: int):
        pass


    @property
    @bind
    def count(self) -> int:
        """
        Getter for count."""
        pass



    @bind
    def __add__(self, counter: Counter) -> Counter:
        """
        Plus operator"""
        pass
    @bind
    def compare_to(self, counter: Counter) -> int:
        """
        Comparison operator for kotlin"""
        pass
    @bind
    def __gt__(self, counter: Counter) -> bool:
        """
        """
        pass
    @bind
    def __iadd__(self, counter: Counter) -> Counter:
        """
        """
        pass
