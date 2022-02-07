/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/07/2022-16:23.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/inheritance/c_animal.h"
#include "cxx/inheritance/animal.hpp"

using namespace iegen::example;

void release_AnimalImpl(IEGenCObject cself, bool owner){
    static_assert(std::has_virtual_destructor<iegen::example::Animal>::value, "iegen::example::Animal type must have virtual destructor");
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Animal*>(cself.ptr);
    }
}

IEGenCObject create_Animal(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::Animal();
        return {strdup("iegen::example::Animal"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_Animal_typeName(IEGenCObject cself, IEGenCObject* _Nonnull err){
    iegen::example::Animal* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Animal") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Animal*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::LittleFrog") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::LittleFrog*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Frog") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Frog*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::AquaticAnimal") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::AquaticAnimal*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::TerrestrialAnimal") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::TerrestrialAnimal*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}
void release_TerrestrialAnimalImpl(IEGenCObject cself, bool owner){
    static_assert(std::has_virtual_destructor<iegen::example::TerrestrialAnimal>::value, "iegen::example::TerrestrialAnimal type must have virtual destructor");
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::TerrestrialAnimal*>(cself.ptr);
    }
}

IEGenCObject create_TerrestrialAnimal(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::TerrestrialAnimal();
        return {strdup("iegen::example::TerrestrialAnimal"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_TerrestrialAnimal_typeName(IEGenCObject cself, IEGenCObject* _Nonnull err){
    iegen::example::TerrestrialAnimal* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::TerrestrialAnimal") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::TerrestrialAnimal*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::LittleFrog") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::LittleFrog*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Frog") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Frog*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}
void release_AquaticAnimal(IEGenCObject cself, bool owner) {
    static_assert(std::has_virtual_destructor<iegen::example::AquaticAnimal>::value, "iegen::example::AquaticAnimal type must have virtual destructor");
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::AquaticAnimal*>(cself.ptr);
    }
}

IEGenCObject create_AquaticAnimal(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::AquaticAnimal();
        return {strdup("iegen::example::AquaticAnimal"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_AquaticAnimal_typeName(IEGenCObject cself, IEGenCObject* _Nonnull err){
    iegen::example::AquaticAnimal* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::AquaticAnimal") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::AquaticAnimal*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::LittleFrog") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::LittleFrog*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Frog") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Frog*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

IEGenCObject create_Frog(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::Frog();
        return {strdup("iegen::example::Frog"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_Frog_typeName(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::Frog*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

IEGenCObject create_LittleFrog(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::LittleFrog();
        return {strdup("iegen::example::LittleFrog"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}
void release_AnimalUsage(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::AnimalUsage*>(cself.ptr);
    }
}

IEGenCObject create_AnimalUsage(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::AnimalUsage();
        return {strdup("iegen::example::AnimalUsage"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_AnimalUsage_1(IEGenCObject little_frog, IEGenCObject* _Nonnull err){
    
    auto& ctocxxlittle_frog = *static_cast<iegen::example::LittleFrog*>(little_frog.ptr);
    try {
        auto this_object = new iegen::example::AnimalUsage(ctocxxlittle_frog);
        return {strdup("iegen::example::AnimalUsage"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_AnimalUsage_getAnimalTypeName(IEGenCObject animal, IEGenCObject* _Nonnull err){
    iegen::example::Animal* ctocxxanimal_ptr = nullptr;
    if (animal.ptr) {
        if (strcmp(animal.type, "iegen::example::Animal") == 0)
            ctocxxanimal_ptr = static_cast<iegen::example::Animal*>(animal.ptr);
        else if (strcmp(animal.type, "iegen::example::LittleFrog") == 0)
            ctocxxanimal_ptr = static_cast<iegen::example::LittleFrog*>(animal.ptr);
        else if (strcmp(animal.type, "iegen::example::Frog") == 0)
            ctocxxanimal_ptr = static_cast<iegen::example::Frog*>(animal.ptr);
        else if (strcmp(animal.type, "iegen::example::AquaticAnimal") == 0)
            ctocxxanimal_ptr = static_cast<iegen::example::AquaticAnimal*>(animal.ptr);
        else if (strcmp(animal.type, "iegen::example::TerrestrialAnimal") == 0)
            ctocxxanimal_ptr = static_cast<iegen::example::TerrestrialAnimal*>(animal.ptr);
        else {
            std::cerr << "Unexpected object type: " << animal.type << std::endl;
            exit(1);
        }
    }
    auto& ctocxxanimal = *ctocxxanimal_ptr;
  
    try {
        const auto& result = iegen::example::AnimalUsage::getAnimalTypeName(ctocxxanimal);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _func_AnimalUsage_getAquaticAnimalTypeName(IEGenCObject animal, IEGenCObject* _Nonnull err){
    iegen::example::AquaticAnimal* ctocxxanimal_ptr = nullptr;
    if (animal.ptr) {
        if (strcmp(animal.type, "iegen::example::AquaticAnimal") == 0)
            ctocxxanimal_ptr = static_cast<iegen::example::AquaticAnimal*>(animal.ptr);
        else if (strcmp(animal.type, "iegen::example::LittleFrog") == 0)
            ctocxxanimal_ptr = static_cast<iegen::example::LittleFrog*>(animal.ptr);
        else if (strcmp(animal.type, "iegen::example::Frog") == 0)
            ctocxxanimal_ptr = static_cast<iegen::example::Frog*>(animal.ptr);
        else {
            std::cerr << "Unexpected object type: " << animal.type << std::endl;
            exit(1);
        }
    }
    auto& ctocxxanimal = *ctocxxanimal_ptr;
  
    try {
        const auto& result = iegen::example::AnimalUsage::getAquaticAnimalTypeName(ctocxxanimal);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

IEGenCObject _func_AnimalUsage_getAnimal(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::AnimalUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getAnimal();
        
        char* type_result = nullptr;
        const char * name_result = typeid(result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::Animal");
        }
        auto value_ptr_result = const_cast<iegen::example::Animal*>(&result);
        IEGenCObject cxxtocresult = {type_result, dynamic_cast<void*>(value_ptr_result)};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject _func_AnimalUsage_getAquaticAnimal(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::AnimalUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getAquaticAnimal();
        
        char* type_result = nullptr;
        const char * name_result = typeid(result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::AquaticAnimal");
        }
        auto value_ptr_result = const_cast<iegen::example::AquaticAnimal*>(&result);
        IEGenCObject cxxtocresult = {type_result, dynamic_cast<void*>(value_ptr_result)};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject _func_AnimalUsage_getFrog(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::AnimalUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getFrog();
        
        char* type_result = strdup("iegen::example::Frog");
        auto value_ptr_result = const_cast<iegen::example::Frog*>(&result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject _func_AnimalUsage_getLittleFrog(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::AnimalUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getLittleFrog();
        
        char* type_result = strdup("iegen::example::Frog");
        auto value_ptr_result = const_cast<iegen::example::Frog*>(&result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}
