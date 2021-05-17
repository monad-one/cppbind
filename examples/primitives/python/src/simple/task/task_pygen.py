from __future__ import annotations
from typing import *
import examples.simple.task.task as pybind_task_pygen
from bind_utils import *
from metaclass import *


class PyTask(metaclass=OriginalMethodsMetaclass):
    """
    Class holding task information."""
    
    @bind
    def __init__(self, title: str):
        pass
    
    @property
    @bind
    def title(self) -> str:
        """
        Get objects title."""
        pass