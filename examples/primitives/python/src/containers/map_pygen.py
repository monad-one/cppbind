"""
This file was generated by iegen on 05/17/2021-17:49.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.containers.map as pybind_map_pygen
from bind_utils import *
from metaclass import *


class MapItem(metaclass=OriginalMethodsMetaclass):
    """
    comments
    """
    
    @bind
    def __init__(self, _value: int):
        pass
    
    @property
    @bind
    def value(self) -> int:
        """
        comments
        """
        pass

    @value.setter
    @bind
    def value(self, value: int):
        """
        comments
        """
        pass


class MapExamples(metaclass=OriginalMethodsMetaclass):
    """
    comments
    """
    
    @bind
    def __init__(self):
        pass
    
    @bind
    def add_string_pair(self, info: tuple) -> None:
        """
        comments
        """
        pass

    @bind
    def add_int_map(self, info: dict) -> None:
        """
        comments
        """
        pass

    @bind
    def add_string_map(self, info: dict) -> None:
        """
        comments
        """
        pass

    @bind
    def get_string_map(self) -> dict:
        """
        comments
        """
        pass

    @bind
    def get_int_map(self) -> dict:
        """
        comments
        """
        pass

    @bind
    def add_mixed_map(self, info: dict) -> None:
        """
        comments
        """
        pass

    @bind
    def get_mixed_map(self) -> dict:
        """
        comments
        """
        pass
