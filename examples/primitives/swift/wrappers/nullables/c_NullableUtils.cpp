/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/02/2022-10:55.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/nullables/c_NullableUtils.h"
#include "cxx/nullables/nullable_utils.hpp"

using namespace iegen::example::nullable;

void release_NumInt(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(cself.ptr);
    }
}

CObject create_NumInt(int val_, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::nullable::NumberInt(val_);
        return {strdup("iegen::example::nullable::NumberInt"), new std::shared_ptr<iegen::example::nullable::NumberInt>(this_object)};
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
int _prop_get_NumInt_value(CObject cself){
    std::shared_ptr<iegen::example::nullable::NumberInt> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(cself.ptr);
    const auto& result = ctocxxcself->value;
    
    return result;
}
void release_NumDouble(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::nullable::NumberDouble*>(cself.ptr);
    }
}

CObject create_NumDouble(double val_, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::nullable::NumberDouble(val_);
        return {strdup("iegen::example::nullable::NumberDouble"), this_object};
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
double _prop_get_NumDouble_value(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::nullable::NumberDouble*>(cself.ptr);
    const auto& result = ctocxxcself->value;
    
    return result;
}
void release_NullableUtils(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    }
}

CObject create_NullableUtils(CObject num, ErrorObj* _Nonnull err){
    
    auto ctocxxnum = static_cast<iegen::example::nullable::NumberDouble*>(num.ptr);
    try {
        auto this_object = new iegen::example::nullable::Utils(ctocxxnum);
        return {strdup("iegen::example::nullable::Utils"), new std::shared_ptr<iegen::example::nullable::Utils>(this_object)};
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

CObject _func_NullableUtils_max(CObject first, CObject second, ErrorObj* _Nonnull err){
    
    auto ctocxxfirst = static_cast<iegen::example::nullable::NumberDouble*>(first.ptr);
  
    
    auto ctocxxsecond = static_cast<iegen::example::nullable::NumberDouble*>(second.ptr);
  
    try {
        const auto& result = iegen::example::nullable::Utils::max(ctocxxfirst, ctocxxsecond);
        
        char* type_result = strdup("iegen::example::nullable::NumberDouble");
        auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
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

CObject _func_NullableUtils_max_1(CObject first, CObject second, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::nullable::NumberInt> ctocxxfirst = nullptr;
    if (first.ptr) {
        ctocxxfirst = *static_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(first.ptr);
    }
  
    
    std::shared_ptr<iegen::example::nullable::NumberInt> ctocxxsecond = nullptr;
    if (second.ptr) {
        ctocxxsecond = *static_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(second.ptr);
    }
  
    try {
        const auto& result = iegen::example::nullable::Utils::max(ctocxxfirst, ctocxxsecond);
        
        char* type_result = strdup("iegen::example::nullable::NumberInt");
        void* cxxtocresult_ptr = nullptr;
        if (result) {
            cxxtocresult_ptr = new std::shared_ptr<iegen::example::nullable::NumberInt>(result);
        } else {
            type_result = strdup("iegen::example::nullable::NumberInt");
        }
        CObject cxxtocresult = {type_result, cxxtocresult_ptr};
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

void _func_NullableUtils_checkNonnullArg(CObject number, ErrorObj* _Nonnull err){
    
    auto ctocxxnumber = static_cast<iegen::example::nullable::NumberDouble*>(number.ptr);
  
    try {
        iegen::example::nullable::Utils::checkNonnullArg(ctocxxnumber);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CObject _func_NullableUtils_checkNonnullReturn(ErrorObj* _Nonnull err){
    try {
        const auto& result = iegen::example::nullable::Utils::checkNonnullReturn();
        
        char* type_result = strdup("iegen::example::nullable::NumberDouble");
        auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
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

CObject _prop_get_NullableUtils_nullable(CObject cself){
    std::shared_ptr<iegen::example::nullable::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    const auto& result = ctocxxcself->nullable();
    
    char* type_result = strdup("iegen::example::nullable::NumberDouble");
    auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
    CObject cxxtocresult = {type_result, value_ptr_result};
    return cxxtocresult;
}

void _prop_set_NullableUtils_nullable(CObject cself, CObject num){
    
    std::shared_ptr<iegen::example::nullable::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    
    auto ctocxxnum = static_cast<iegen::example::nullable::NumberDouble*>(num.ptr);
    ctocxxcself->setNullable(ctocxxnum);
}


CObject _prop_get_NullableUtils_nonNull(CObject cself){
    std::shared_ptr<iegen::example::nullable::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    const auto& result = ctocxxcself->nonNull();
    
    char* type_result = strdup("iegen::example::nullable::NumberDouble");
    auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
    CObject cxxtocresult = {type_result, value_ptr_result};
    return cxxtocresult;
}

void _prop_set_NullableUtils_nonNull(CObject cself, CObject num){
    
    std::shared_ptr<iegen::example::nullable::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    
    auto ctocxxnum = static_cast<iegen::example::nullable::NumberDouble*>(num.ptr);
    ctocxxcself->setNonNull(ctocxxnum);
}

CObject _prop_get_NullableUtils_numDouble(CObject cself){
    std::shared_ptr<iegen::example::nullable::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    const auto& result = ctocxxcself->numDouble;
    
    char* type_result = strdup("iegen::example::nullable::NumberDouble");
    auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
    CObject cxxtocresult = {type_result, value_ptr_result};
    return cxxtocresult;
}
void _prop_set_NullableUtils_numDouble(CObject cself, CObject numDouble){
    
    std::shared_ptr<iegen::example::nullable::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    
    auto ctocxxnumDouble = static_cast<iegen::example::nullable::NumberDouble*>(numDouble.ptr);
    ctocxxcself->numDouble = ctocxxnumDouble;
}

CObject _prop_get_NullableUtils_numInt(CObject cself){
    std::shared_ptr<iegen::example::nullable::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    const auto& result = ctocxxcself->numInt;
    
    char* type_result = strdup("iegen::example::nullable::NumberInt");
    void* cxxtocresult_ptr;
    cxxtocresult_ptr = new std::shared_ptr<iegen::example::nullable::NumberInt>(result);
    CObject cxxtocresult = {type_result, cxxtocresult_ptr};
    return cxxtocresult;
}
void _prop_set_NullableUtils_numInt(CObject cself, CObject numInt){
    
    std::shared_ptr<iegen::example::nullable::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself.ptr);
    
    std::shared_ptr<iegen::example::nullable::NumberInt> ctocxxnumInt;
    ctocxxnumInt = *static_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(numInt.ptr);
    ctocxxcself->numInt = ctocxxnumInt;
}

