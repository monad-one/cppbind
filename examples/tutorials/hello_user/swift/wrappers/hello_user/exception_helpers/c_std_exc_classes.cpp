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
#include "swift/wrappers/hello_user/exception_helpers/c_std_exc_classes.h"
#include <stdexcept>
#include <new>
#include <typeinfo>


using namespace std;

void release_StdException(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}

const char * _Nonnull _func_StdException_what(CObject cself, ErrorObj* _Nonnull err){
    
    auto c_to_cxx_cself = static_cast<std::exception*>(cself.ptr);
    try {
        const auto& result = c_to_cxx_cself->what();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    const char * result = nullptr;
    return result;
}
void release_StdLogicError(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdRuntimeError(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdDomainError(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdInvalidArgument(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdLengthError(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdOutOfRange(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdRangeError(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdOverflowError(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdUnderflowError(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdBadAlloc(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdBadCast(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}
void release_StdBadTypeId(CObject cself) {
    delete static_cast<std::exception*>(cself.ptr);
}