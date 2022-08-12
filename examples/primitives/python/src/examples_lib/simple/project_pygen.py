"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 08/11/2022-07:34.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.simple.project as pybind_project_pygen
import examples_lib.simple.task.task_pygen as task_task_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *


class Project(metaclass=CppBindMetaclass):
    """
    Class holding project information.
    """
    
    @bind
    def __init__(self, title: str):
        """
        Project constructor.
        """
        pass
    
    @property
    @bind
    def title(self) -> str:
        """
        Get project´s title.
        """
        pass
    
    @bind
    def add_task(self, task: task_task_pygen.PyTask) -> None:
        """
        Add a task to project.
        """
        pass

    @bind
    def tasks(self) -> List[task_task_pygen.PyTask]:
        """
        Get project´s tasks.
        """
        pass

    @bind
    def __eq__(self, p: Project) -> bool:
        
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass
