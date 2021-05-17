from __future__ import annotations
from typing import *
import examples.templates.template_methods as pybind_template_methods_pygen
from bind_utils import *
from metaclass import *
from simple import *


class TemplateMethods(metaclass=OriginalMethodsMetaclass):
    """"""
    
    @bind
    def __init__(self):
        pass
    
    @bind
    def max(self, arg0: int, arg1: int) -> int:
        """"""
        pass

    @bind
    def max(self, arg0: str, arg1: str) -> str:
        """"""
        pass

    @bind
    def make_pair(self, arg0: Project, arg1: Project) -> tuple:
        """"""
        pass

    @bind
    def make_pair(self, arg0: Root, arg1: Project) -> tuple:
        """"""
        pass