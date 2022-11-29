"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 10/12/2022-10:05.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.templates.elements as pybind_elements_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *


class ElementsInt(metaclass=CppBindMetaclass):
    
    @property
    @bind
    def holder(self) -> List[int]:
        
        pass
    
    @classmethod
    @bind
    def create(cls, ts1: int, ts2: int) -> ElementsInt:
        
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass


class ElementsString(metaclass=CppBindMetaclass):
    
    @property
    @bind
    def holder(self) -> List[str]:
        
        pass
    
    @classmethod
    @bind
    def create(cls, ts1: str, ts2: str, ts3: str) -> ElementsString:
        
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass


class ElementsEmpty(metaclass=CppBindMetaclass):
    
    @property
    @bind
    def holder(self) -> List[float]:
        
        pass
    
    @classmethod
    @bind
    def create(cls) -> ElementsEmpty:
        
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass