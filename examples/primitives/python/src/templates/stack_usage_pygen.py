from __future__ import annotations
from typing import *
import examples.templates.stack_usage as pybind_stack_usage_pygen
from bind_utils import *
from metaclass import *
from templates.stack_pygen import *
from simple.project_pygen import *


class StackUsage(metaclass=OriginalMethodsMetaclass):
    """"""
    
    @bind
    def __init__(self):
        pass
    
    @bind
    def first_item_of_specialized_stack(self, p: StackProject) -> Project:
        """"""
        pass

    @bind
    def first_item_of_template_stack(self, arg0: StackProject) -> Project:
        """"""
        pass
