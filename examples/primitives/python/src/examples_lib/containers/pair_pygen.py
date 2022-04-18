"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 04/18/2022-05:35.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.containers.pair as pybind_pair_pygen
import examples_lib.containers.map_pygen as map_pygen
from examples_lib.iegen.bind_utils_pygen import *
from examples_lib.iegen.metaclass_pygen import *


class PairExamples(metaclass=IEGenMetaclass):
    """
    comments

    Documentation generated from: `cxx/containers/pair.hpp#L20
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L20>`_
    """
    
    @bind
    def __init__(self):
        """
        comments

        Documentation generated from: `cxx/containers/pair.hpp#L29
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L29>`_
        """
        pass
    
    @property
    @bind
    def complex_pair_obj(self) -> Tuple[map_pygen.MapItem, List[map_pygen.MapItem]]:
        """
        Documentation generated from: `cxx/containers/pair.hpp#L107
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L107>`_
        """
        pass

    @complex_pair_obj.setter
    @bind
    def complex_pair_obj(self, value: Tuple[map_pygen.MapItem, List[map_pygen.MapItem]]):
        """
        Documentation generated from: `cxx/containers/pair.hpp#L107
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L107>`_
        """
        pass
    
    @bind
    def sum_int_pairs(self, p1: Tuple[int, int], p2: Tuple[int, int]) -> Tuple[int, int]:
        """
        comments

        Documentation generated from: `cxx/containers/pair.hpp#L38
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L38>`_
        """
        pass

    @bind
    def set_nested_pair(self, p: Tuple[Tuple[str, str], Tuple[str, str]]) -> None:
        """
        comments

        Documentation generated from: `cxx/containers/pair.hpp#L49
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L49>`_
        """
        pass

    @bind
    def get_nested_pair(self) -> Tuple[Tuple[str, str], Tuple[str, str]]:
        """
        comments

        Documentation generated from: `cxx/containers/pair.hpp#L60
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L60>`_
        """
        pass

    @bind
    def get_string_pair(self) -> Tuple[str, str]:
        """
        comments

        Documentation generated from: `cxx/containers/pair.hpp#L71
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L71>`_
        """
        pass

    @bind
    def set_nested_vector_of_pairs(self, v: List[List[Tuple[int, str]]]) -> None:
        """
        Documentation generated from: `cxx/containers/pair.hpp#L80
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L80>`_
        """
        pass

    @bind
    def get_nested_vector_of_pairs(self) -> List[List[Tuple[int, str]]]:
        """
        Documentation generated from: `cxx/containers/pair.hpp#L89
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/containers/pair.hpp#L89>`_
        """
        pass
