/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/26/2022-08:15.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/operators/c_counter.h"
#include "cxx/operators/counter.hpp"

using namespace iegen::example;

void release_Counter(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Counter*>(cself.ptr);
    }
}

CObject create_Counter(int count, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::Counter(count);
        return {strdup("iegen::example::Counter"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

int _prop_get_Counter_count(CObject cself){
    iegen::example::Counter* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Counter") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Counter*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    const auto& result = ctocxxcself->count();
    
    return result;
}

CObject _func_Counter__add_(CObject cself, CObject counter, ErrorObj* _Nonnull err){
    
    iegen::example::Counter* ctocxxcounter_ptr = nullptr;
    if (counter.ptr) {
        if (strcmp(counter.type, "iegen::example::Counter") == 0)
            ctocxxcounter_ptr = static_cast<iegen::example::Counter*>(counter.ptr);
        else {
            std::cerr << "Unexpected object type: " << counter.type << std::endl;
            exit(1);
        }
    }
    auto& ctocxxcounter = *ctocxxcounter_ptr;
  
    
    iegen::example::Counter* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Counter") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Counter*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->operator+(ctocxxcounter);
        
        char* type_result = strdup("iegen::example::Counter");
        auto value_ptr_result = const_cast<iegen::example::Counter*>( new iegen::example::Counter(result) );
        CObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

bool _func_Counter__gt_(CObject cself, CObject counter, ErrorObj* _Nonnull err){
    
    iegen::example::Counter* ctocxxcounter_ptr = nullptr;
    if (counter.ptr) {
        if (strcmp(counter.type, "iegen::example::Counter") == 0)
            ctocxxcounter_ptr = static_cast<iegen::example::Counter*>(counter.ptr);
        else {
            std::cerr << "Unexpected object type: " << counter.type << std::endl;
            exit(1);
        }
    }
    auto& ctocxxcounter = *ctocxxcounter_ptr;
  
    
    iegen::example::Counter* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Counter") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Counter*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->operator>(ctocxxcounter);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    bool result{};
    return result;
}

CObject _func_Counter__iadd_(CObject cself, CObject counter, ErrorObj* _Nonnull err){
    
    iegen::example::Counter* ctocxxcounter_ptr = nullptr;
    if (counter.ptr) {
        if (strcmp(counter.type, "iegen::example::Counter") == 0)
            ctocxxcounter_ptr = static_cast<iegen::example::Counter*>(counter.ptr);
        else {
            std::cerr << "Unexpected object type: " << counter.type << std::endl;
            exit(1);
        }
    }
    auto& ctocxxcounter = *ctocxxcounter_ptr;
  
    
    iegen::example::Counter* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Counter") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Counter*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->operator+=(ctocxxcounter);
        
        char* type_result = strdup("iegen::example::Counter");
        auto value_ptr_result = const_cast<iegen::example::Counter*>( &result );
        CObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}
