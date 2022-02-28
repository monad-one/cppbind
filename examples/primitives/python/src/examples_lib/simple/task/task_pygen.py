"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 02/11/2022-07:24.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.simple.task.task as pybind_task_pygen
from examples_lib.iegen.bind_utils_pygen import *
from examples_lib.iegen.metaclass_pygen import *


class PyTask(metaclass=OriginalMethodsMetaclass):
    """
    Class holding task information.
    Documentation generated from: `cxx/simple/task.hpp#L19
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L19>`_
    """
    
    @bind
    def __init__(self, title: str):
        """
        Task Constructor.
        Documentation generated from: `cxx/simple/task.hpp#L28
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L28>`_
        """
        pass
    
    @property
    @bind
    def title(self) -> str:
        """
        Get objects title.
        Documentation generated from: `cxx/simple/task.hpp#L37
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L37>`_
        """
        pass
    
    @bind
    def set_title(self, title: str) -> None:
        """
        Get objects title.
        Documentation generated from: `cxx/simple/task.hpp#L48
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L48>`_
        """
        pass

    @bind
    def equals(self, t: PyTask) -> bool:
        """
        Documentation generated from: `cxx/simple/task.hpp#L57
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L57>`_
        """
        pass
