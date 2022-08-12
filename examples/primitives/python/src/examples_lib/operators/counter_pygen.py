"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 08/11/2022-07:34.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.operators.counter as pybind_counter_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *


class Counter(metaclass=CppBindMetaclass):
    """
    An example for with overloaded methods.
    """
    
    @bind
    def __init__(self, count: int):
        """
        Counter constructor.
        """
        pass
    
    @property
    @bind
    def count(self) -> int:
        """
        Getter for count.
        """
        pass
    
    @bind
    def __add__(self, counter: Counter) -> Counter:
        """
        Plus operator
        """
        pass

    @bind
    def __gt__(self, counter: Counter) -> bool:
        
        pass

    @bind
    def __iadd__(self, counter: Counter) -> Counter:
        
        pass

    @bind
    def __eq__(self, counter: Counter) -> bool:
        """
        Equality operator
        """
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass


class PositiveCounter(metaclass=CppBindMetaclass):
    """
    A class example to the case when non-operator method is mapped to == operator
    """
    
    @bind
    def __init__(self, count: int):
        
        pass

    @bind
    def __init__(self, counts: List[int]):
        
        pass
    
    @bind
    def __eq__(self, other: PositiveCounter) -> bool:
        
        pass

    @bind
    def __getitem__(self, i: int) -> int:
        
        pass

    @bind
    def __setitem__(self, i: int, value: int):
        
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass
