"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 07/13/2021-07:17.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.simple.task.task as pybind_task_pygen
from bind_utils import *
from metaclass import *


class PyTask(metaclass=OriginalMethodsMetaclass):
    """
    Class holding task information.
    Documentation generated from: `cxx/simple/task.hpp#L23
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L23>`_
    """
    
    @bind
    def __init__(self, title: str):
        """
        Task Constructor.
        Documentation generated from: `cxx/simple/task.hpp#L31
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L31>`_
        """
        pass
    
    @property
    @bind
    def title(self) -> str:
        """
        Get objects title.
        Documentation generated from: `cxx/simple/task.hpp#L40
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/task.hpp#L40>`_
        """
        pass
