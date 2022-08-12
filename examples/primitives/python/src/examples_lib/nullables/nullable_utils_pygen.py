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

import examples.nullables.nullable_utils as pybind_nullable_utils_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *


class NumberInt(metaclass=CppBindMetaclass):
    
    @bind
    def __init__(self, val_: int):
        
        pass
    
    @property
    @bind
    def value(self) -> int:
        
        pass


    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass


class NumberDouble(metaclass=CppBindMetaclass):
    
    @bind
    def __init__(self, val_: float):
        
        pass
    
    @property
    @bind
    def value(self) -> float:
        
        pass


    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass


class Utils(metaclass=CppBindMetaclass):
    """
    An example with nullable arguments.
    """
    
    @bind
    def __init__(self, num: Optional[NumberDouble]):
        
        pass
    
    @property
    @bind
    def nullable(self) -> Optional[NumberDouble]:
        
        pass

    @nullable.setter
    @bind
    def nullable(self, value: Optional[NumberDouble]):
        
        pass

    @property
    @bind
    def non_null(self) -> NumberDouble:
        
        pass

    @non_null.setter
    @bind
    def non_null(self, value: NumberDouble):
        
        pass

    @property
    @bind
    def num_double(self) -> Optional[NumberDouble]:
        
        pass

    @num_double.setter
    @bind
    def num_double(self, value: Optional[NumberDouble]):
        
        pass

    @property
    @bind
    def num_int(self) -> NumberInt:
        
        pass

    @num_int.setter
    @bind
    def num_int(self, value: NumberInt):
        
        pass
    
    @classmethod
    @bind
    def max(cls, first: Optional[NumberDouble], second: NumberDouble) -> Optional[NumberDouble]:
        
        pass

    @classmethod
    @bind
    def max(cls, first: Optional[NumberInt], second: Optional[NumberInt]) -> Optional[NumberInt]:
        
        pass

    @classmethod
    @bind
    def check_nonnull_arg(cls, number: NumberDouble) -> None:
        
        pass

    @classmethod
    @bind
    def check_nonnull_return(cls) -> NumberDouble:
        
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass


@bind
def reverse_string(s: Optional[str]) -> Optional[str]:
    
    pass
