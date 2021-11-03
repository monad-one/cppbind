"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 10/26/2021-15:58.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.misc.yaml_example as pybind_yaml_example_pygen
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class WithExternalAPIComments(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/misc/yaml_example.hpp#L8
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L8>`_
    """
    
    @bind
    def __init__(self, s: str):
        """
        Documentation generated from: `cxx/misc/yaml_example.hpp#L11
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L11>`_
        """
        pass
    
    @property
    @bind
    def str(self) -> str:
        """
        Documentation generated from: `cxx/misc/yaml_example.hpp#L17
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L17>`_
        """
        pass

    @str.setter
    @bind
    def str(self, value: str):
        """
        Documentation generated from: `cxx/misc/yaml_example.hpp#L17
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L17>`_
        """
        pass
    
    @classmethod
    @bind
    def ret_int(cls, n: int) -> int:
        """
        Documentation generated from: `cxx/misc/yaml_example.hpp#L13
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L13>`_
        """
        pass

    @classmethod
    @bind
    def max(cls, arg0: int, arg1: int) -> int:
        """
        Documentation generated from: `cxx/misc/yaml_example.hpp#L25
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L25>`_
        """
        pass

    @classmethod
    @bind
    def max(cls, arg0: str, arg1: str) -> str:
        """
        Documentation generated from: `cxx/misc/yaml_example.hpp#L25
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L25>`_
        """
        pass


class AdderInt(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/misc/yaml_example.hpp#L34
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L34>`_
    """
    
    @classmethod
    @bind
    def add(cls, a: int, b: int) -> int:
        """
        Documentation generated from: `cxx/misc/yaml_example.hpp#L37
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L37>`_
        """
        pass


class AdderFloat(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/misc/yaml_example.hpp#L34
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L34>`_
    """
    
    @classmethod
    @bind
    def add(cls, a: float, b: float) -> float:
        """
        Documentation generated from: `cxx/misc/yaml_example.hpp#L37
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L37>`_
        """
        pass


class color(metaclass=EnumMetaclass):
    """
    Documentation generated from: `cxx/misc/yaml_example.hpp#L42
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/yaml_example.hpp#L42>`_
    """
    RED = pybind_yaml_example_pygen.color.RED
    GREEN = pybind_yaml_example_pygen.color.GREEN
    BLUE = pybind_yaml_example_pygen.color.BLUE

    def __int__(self):
        return self.value
