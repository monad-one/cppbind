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

import examples.misc.size_buffer as pybind_size_buffer_pygen
from buffer import *
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class SizeUsage(metaclass=OriginalMethodsMetaclass):
    """
    comments

    Documentation generated from: `cxx/misc/size_buffer.hpp#L23
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/size_buffer.hpp#L23>`_
    """
    
    @classmethod
    @bind
    def multiply_by(cls, size: SizeF, n: int) -> SizeF:
        """
        comments

        Documentation generated from: `cxx/misc/size_buffer.hpp#L33
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/size_buffer.hpp#L33>`_
        """
        pass

    @classmethod
    @bind
    def double_size_f(cls, resolution: SizeF = None) -> SizeF:
        """
        comments

        Documentation generated from: `cxx/misc/size_buffer.hpp#L46
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/size_buffer.hpp#L46>`_
        """
        pass


class BufferUsage(metaclass=OriginalMethodsMetaclass):
    """
    comments

    Documentation generated from: `cxx/misc/size_buffer.hpp#L66
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/size_buffer.hpp#L66>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/misc/size_buffer.hpp#L73
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/size_buffer.hpp#L73>`_
        """
        pass
    
    @bind
    def usage1(self, b: Buffer) -> str:
        """
        Documentation generated from: `cxx/misc/size_buffer.hpp#L81
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/size_buffer.hpp#L81>`_
        """
        pass

    @bind
    def usage2(self) -> Buffer:
        """
        Documentation generated from: `cxx/misc/size_buffer.hpp#L91
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/misc/size_buffer.hpp#L91>`_
        """
        pass
