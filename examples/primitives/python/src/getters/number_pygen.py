"""
This file was generated by iegen on 06/07/2021-17:54.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.getters.number as pybind_number_pygen
from bind_utils import *
from metaclass import *


class Numberint(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `examples/primitives/cxx/getters/number.hpp#L22 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/number.hpp#L22>`_
    """
    
    @bind
    def __init__(self, n: int):
        """
        Documentation generated from: `examples/primitives/cxx/getters/number.hpp#L29 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/number.hpp#L29>`_
        """
        pass
    
    @property
    @bind
    def num(self) -> int:
        """
        Documentation generated from: `examples/primitives/cxx/getters/number.hpp#L35 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/number.hpp#L35>`_
        """
        pass

    @num.setter
    @bind
    def num(self, value: int):
        """
        Documentation generated from: `examples/primitives/cxx/getters/number.hpp#L35 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/number.hpp#L35>`_
        """
        pass


class Numberfloat(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `examples/primitives/cxx/getters/number.hpp#L22 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/number.hpp#L22>`_
    """
    
    @bind
    def __init__(self, n: float):
        """
        Documentation generated from: `examples/primitives/cxx/getters/number.hpp#L29 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/number.hpp#L29>`_
        """
        pass
    
    @property
    @bind
    def num(self) -> float:
        """
        Documentation generated from: `examples/primitives/cxx/getters/number.hpp#L35 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/number.hpp#L35>`_
        """
        pass

    @num.setter
    @bind
    def num(self, value: float):
        """
        Documentation generated from: `examples/primitives/cxx/getters/number.hpp#L35 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/number.hpp#L35>`_
        """
        pass
