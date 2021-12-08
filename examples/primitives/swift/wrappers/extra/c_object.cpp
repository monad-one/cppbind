/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/08/2021-11:54.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/extra/c_object.h"
#include "cxx/extra/object.hpp"

using namespace iegen;

void release_Object(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::Object>*>(cself.ptr);
    }
}

char* _Nonnull _func_Object_toString(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::Object>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->toString();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}

char* _Nonnull _func_Object_className(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::Object>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->className();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}

bool _func_Object_equals(CObject cself, CObject other, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::Object> ctocxxother;
    ctocxxother = *static_cast<std::shared_ptr<iegen::Object>*>(other.ptr);
  
    
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::Object>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->equals(ctocxxother);
        
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

unsigned long _func_Object_hash(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::Object>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->hash();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    unsigned long result{};
    return result;
}

char* _Nonnull _func_Object_debugInfo(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::Object>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->debugInfo();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}

unsigned long _func_Object_bytesCount(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::Object>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->bytesCount();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    unsigned long result{};
    return result;
}