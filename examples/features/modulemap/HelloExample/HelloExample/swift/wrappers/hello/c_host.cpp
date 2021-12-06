/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/05/2021-09:44.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/hello/c_host.h"
#include "cxx/host.hpp"
#include "cxx/user.hpp"


void release_Host(CObject cself) {
    delete static_cast<Host*>(cself.ptr);
}

CObject create_Host(){
    auto this_object = new Host();
    return {strdup("Host"), this_object};
}

char* _Nonnull _func_Host_hello(CObject cself, CObject user, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_user = *static_cast<UserInfo*>(user.ptr);
  
    
    auto c_to_cxx_cself = static_cast<Host*>(cself.ptr);
    try {
        const auto& result = c_to_cxx_cself->hello(c_to_cxx_user);
        auto cxx_to_c_result = strdup(result.data());
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result = nullptr;
    return result;
}

char* _Nonnull _func_Host_welcome(CObject cself, CObject user, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_user = *static_cast<UserInfo*>(user.ptr);
  
    
    auto c_to_cxx_cself = static_cast<Host*>(cself.ptr);
    try {
        const auto& result = c_to_cxx_cself->welcome(c_to_cxx_user);
        auto cxx_to_c_result = strdup(result.data());
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result = nullptr;
    return result;
}