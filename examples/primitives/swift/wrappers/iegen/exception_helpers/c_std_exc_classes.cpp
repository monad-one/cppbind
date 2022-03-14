/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/10/2022-13:33.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/iegen/exception_helpers/c_std_exc_classes.h"
#include <stdexcept>
#include <new>
#include <typeinfo>

#include "cxx/exceptions/exceptions.hpp"

using namespace std;

void release_Std_StdException(IEGenCObject cself, bool owner) {
    static_assert(std::has_virtual_destructor<std::exception>::value, "std::exception type must have virtual destructor");
    free(cself.type);
    if (owner) {
        delete static_cast<std::exception*>(cself.ptr);
    }
}

const char * _Nonnull _func_Std_StdException_what(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::exception* ctocxxcself = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "std::exception") == 0)
            ctocxxcself = static_cast<std::exception*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::FileError") == 0)
            ctocxxcself = static_cast<iegen::example::FileError*>(cself.ptr);
        else if (strcmp(cself.type, "std::domain_error") == 0)
            ctocxxcself = static_cast<std::domain_error*>(cself.ptr);
        else if (strcmp(cself.type, "std::invalid_argument") == 0)
            ctocxxcself = static_cast<std::invalid_argument*>(cself.ptr);
        else if (strcmp(cself.type, "std::length_error") == 0)
            ctocxxcself = static_cast<std::length_error*>(cself.ptr);
        else if (strcmp(cself.type, "std::out_of_range") == 0)
            ctocxxcself = static_cast<std::out_of_range*>(cself.ptr);
        else if (strcmp(cself.type, "std::overflow_error") == 0)
            ctocxxcself = static_cast<std::overflow_error*>(cself.ptr);
        else if (strcmp(cself.type, "std::range_error") == 0)
            ctocxxcself = static_cast<std::range_error*>(cself.ptr);
        else if (strcmp(cself.type, "std::underflow_error") == 0)
            ctocxxcself = static_cast<std::underflow_error*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::SystemError") == 0)
            ctocxxcself = static_cast<iegen::example::SystemError*>(cself.ptr);
        else if (strcmp(cself.type, "std::bad_alloc") == 0)
            ctocxxcself = static_cast<std::bad_alloc*>(cself.ptr);
        else if (strcmp(cself.type, "std::bad_cast") == 0)
            ctocxxcself = static_cast<std::bad_cast*>(cself.ptr);
        else if (strcmp(cself.type, "std::bad_typeid") == 0)
            ctocxxcself = static_cast<std::bad_typeid*>(cself.ptr);
        else if (strcmp(cself.type, "std::logic_error") == 0)
            ctocxxcself = static_cast<std::logic_error*>(cself.ptr);
        else if (strcmp(cself.type, "std::runtime_error") == 0)
            ctocxxcself = static_cast<std::runtime_error*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    try {
        const auto& result = ctocxxcself->what();
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    const char * result {};
    return result;
}

