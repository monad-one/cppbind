"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 07/28/2021-18:55.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.containers.map as pybind_map_pygen
from examples_lib.bind_utils import *
from examples_lib.metaclass import *


class MapItem(metaclass=OriginalMethodsMetaclass):
    """
    comments

    Documentation generated from: `cxx/containers/map.hpp#L17
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L17>`_
    """
    
    @bind
    def __init__(self, _value: int):
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L32
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L32>`_
        """
        pass
    
    @property
    @bind
    def value(self) -> int:
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L24
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L24>`_
        """
        pass

    @value.setter
    @bind
    def value(self, value: int):
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L24
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L24>`_
        """
        pass


class MapExamples(metaclass=OriginalMethodsMetaclass):
    """
    comments

    Documentation generated from: `cxx/containers/map.hpp#L43
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L43>`_
    """
    
    @bind
    def __init__(self):
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L51
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L51>`_
        """
        pass
    
    @bind
    def add_string_pair(self, info: tuple) -> None:
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L60
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L60>`_
        """
        pass

    @bind
    def add_int_map(self, info: dict) -> None:
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L71
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L71>`_
        """
        pass

    @bind
    def add_string_map(self, info: dict) -> None:
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L82
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L82>`_
        """
        pass

    @bind
    def get_string_map(self) -> dict:
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L94
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L94>`_
        """
        pass

    @bind
    def get_int_map(self) -> dict:
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L105
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L105>`_
        """
        pass

    @bind
    def add_mixed_map(self, info: dict) -> None:
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L116
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L116>`_
        """
        pass

    @bind
    def get_mixed_map(self) -> dict:
        """
        comments

        Documentation generated from: `cxx/containers/map.hpp#L127
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/map.hpp#L127>`_
        """
        pass