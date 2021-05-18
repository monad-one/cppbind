from __future__ import annotations
from typing import *
import examples.getters.one_type_template_getter as pybind_one_type_template_getter_pygen
from bind_utils import *
from metaclass import *


class SimpleItem(metaclass=OriginalMethodsMetaclass):
    """"""
    
    @property
    @bind
    def value(self) -> int:
        """"""
        pass

    @value.setter
    @bind
    def value(self, value: int):
        """"""
        pass


class OneTypeTemplateGetter(metaclass=OriginalMethodsMetaclass):
    """
    An example class containing template getters that depend on the same type.
    """
    
    @bind
    def __init__(self):
        pass
    
    @property
    @bind
    def simple_item(self) -> SimpleItem:
        """
        Template getter example with return type from one template argument.
        As we don´t specify a name here then type name(SimpleItem) will be used with appropriate naming convention.
        E.g. for python will be simple_item.
        """
        pass

    @property
    @bind
    def simple_item_with_type(self) -> SimpleItem:
        """
        Template getter example with return type from one template argument.
        Giving a name here is important as we have another template getter that can have the same type.
        If we won´t specify the name here then both will have the same name retrieved from type name
        thus this one will override the previous one or the code won´t compile.
        """
        pass
