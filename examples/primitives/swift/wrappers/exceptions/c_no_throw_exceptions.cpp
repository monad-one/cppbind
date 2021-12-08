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
#include "swift/wrappers/exceptions/c_no_throw_exceptions.h"
#include "cxx/exceptions/exceptions.hpp"

using namespace iegen::exceptions;

void release_NoThrowExc(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::exceptions::NoThrowExc*>(cself.ptr);
    }
}

CObject create_NoThrowExc(bool do_throw, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::exceptions::NoThrowExc(do_throw);
        return {strdup("iegen::exceptions::NoThrowExc"), this_object};
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

void _func_NoThrowExc_noop(ErrorObj* _Nonnull err){
    try {
        iegen::exceptions::NoThrowExc::noop();
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

char* _Nonnull _prop_get_NoThrowExc_prop(CObject cself){
    auto ctocxxcself = static_cast<iegen::exceptions::NoThrowExc*>(cself.ptr);
    const auto& result = ctocxxcself->prop();
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}

void _prop_set_NoThrowExc_prop(CObject cself, char* _Nonnull s){
    
    auto ctocxxcself = static_cast<iegen::exceptions::NoThrowExc*>(cself.ptr);
    auto ctocxxs = std::string(s);
    free(s);
    ctocxxcself->setProp(ctocxxs);
}
