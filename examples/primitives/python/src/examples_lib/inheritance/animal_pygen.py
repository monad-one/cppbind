"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 11/02/2021-12:14.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.inheritance.animal as pybind_animal_pygen
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class Animal(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/animal.hpp#L26
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L26>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L32
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L32>`_
        """
        pass
    
    @bind
    def type_name(self) -> str:
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L39
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L39>`_
        """
        pass


class TerrestrialAnimal(Animal, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/animal.hpp#L49
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L49>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L55
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L55>`_
        """
        pass
    
    @bind
    def type_name(self) -> str:
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L62
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L62>`_
        """
        pass


class AquaticAnimal(Animal, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/animal.hpp#L72
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L72>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L78
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L78>`_
        """
        pass
    
    @bind
    def type_name(self) -> str:
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L85
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L85>`_
        """
        pass


class Frog(TerrestrialAnimal, AquaticAnimal, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/animal.hpp#L95
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L95>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L101
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L101>`_
        """
        pass
    
    @bind
    def type_name(self) -> str:
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L108
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L108>`_
        """
        pass


class AnimalUsage(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/animal.hpp#L118
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L118>`_
    """
    
    @classmethod
    @bind
    def get_animal_type_name(cls, animal: Animal) -> str:
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L125
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L125>`_
        """
        pass

    @classmethod
    @bind
    def get_aquatic_animal_type_name(cls, animal: AquaticAnimal) -> str:
        """
        Documentation generated from: `cxx/inheritance/animal.hpp#L134
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/animal.hpp#L134>`_
        """
        pass
