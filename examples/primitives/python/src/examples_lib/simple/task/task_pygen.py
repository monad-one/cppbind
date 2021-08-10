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

import examples.simple.task.task as pybind_task_pygen
from examples_lib.bind_utils import *
from examples_lib.metaclass import *


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
        Documentation generated from: `cxx/simple/task.hpp#L27
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L27>`_
        """
        pass
    
    @property
    @bind
    def title(self) -> str:
        """
        Get objects title.
        Documentation generated from: `cxx/simple/task.hpp#L36
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L36>`_
        """
        pass