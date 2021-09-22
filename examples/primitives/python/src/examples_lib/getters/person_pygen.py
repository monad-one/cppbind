"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 08/30/2021-10:41.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.getters.person as pybind_person_pygen
from examples_lib.bind_utils import *
from examples_lib.metaclass import *


class Person(metaclass=OriginalMethodsMetaclass):
    """
    This class contains a private string field and getter/setter methods for it.
    Documentation generated from: `cxx/getters/person.hpp#L19
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/person.hpp#L19>`_
    """
    
    @bind
    def __init__(self, name: str, email: str, age: int):
        """
        Documentation generated from: `cxx/getters/person.hpp#L25
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/person.hpp#L25>`_
        """
        pass
    
    @property
    @bind
    def full_name(self) -> str:
        """
        Documentation generated from: `cxx/getters/person.hpp#L41
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/person.hpp#L41>`_
        """
        pass

    @full_name.setter
    @bind
    def full_name(self, value: str):
        """
        Documentation generated from: `cxx/getters/person.hpp#L41
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/person.hpp#L41>`_
        """
        pass

    @property
    @bind
    def email(self) -> str:
        """
        Documentation generated from: `cxx/getters/person.hpp#L50
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/person.hpp#L50>`_
        """
        pass


    @property
    @bind
    def age(self) -> int:
        """
        Documentation generated from: `cxx/getters/person.hpp#L57
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/person.hpp#L57>`_
        """
        pass

    @age.setter
    @bind
    def age(self, value: int):
        """
        Documentation generated from: `cxx/getters/person.hpp#L57
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/person.hpp#L57>`_
        """
        pass
