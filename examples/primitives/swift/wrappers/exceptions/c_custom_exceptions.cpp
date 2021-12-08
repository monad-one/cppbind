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
#include "swift/wrappers/exceptions/c_custom_exceptions.h"
#include "cxx/exceptions/exceptions.hpp"

using namespace iegen::example;

void release_SimpleBaseException(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::SimpleBaseException*>(cself.ptr);
    }
}

CObject create_SimpleBaseException(int err_num, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::SimpleBaseException(err_num);
        return {strdup("iegen::example::SimpleBaseException"), this_object};
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

int _func_SimpleBaseException_errNum(CObject cself, ErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::SimpleBaseException*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->errNum();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result{};
    return result;
}
void release_SimpleChildException(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::SimpleBaseException*>(cself.ptr);
    }
}

CObject create_SimpleChildException(int err_num, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::SimpleChildException(err_num);
        return {strdup("iegen::example::SimpleChildException"), static_cast<iegen::example::SimpleBaseException*>(this_object)};
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

int _func_SimpleChildException_errNum(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto ctocxxcself = dynamic_cast<iegen::example::SimpleChildException*>(static_cast<iegen::example::SimpleBaseException*>(cself.ptr));
    try {
        const auto& result = ctocxxcself->errNum();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result{};
    return result;
}