/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/12/2021-10:56.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/exception_helpers/c_std_exc_classes.h"



using namespace std;
void release_StdException(void* _Nonnull cself) {
    delete dynamic_cast<std::exception*>(static_cast<std::exception*>(cself));
}

const char * _Nullable _Nonnull _func_StdException_what(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<std::exception*>(static_cast<std::exception*>(cself));
    try {
      const auto& result = c_to_cxx_cself->what();
      
      return result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    const char * _Nullable result;
    return result;
}

using namespace std;
void release_StdBadAlloc(void* _Nonnull cself) {
    delete dynamic_cast<std::bad_alloc*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdBadCast(void* _Nonnull cself) {
    delete dynamic_cast<std::bad_cast*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdBadTypeId(void* _Nonnull cself) {
    delete dynamic_cast<std::bad_typeid*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdLogicError(void* _Nonnull cself) {
    delete dynamic_cast<std::logic_error*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdDomainError(void* _Nonnull cself) {
    delete dynamic_cast<std::domain_error*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdInvalidArgument(void* _Nonnull cself) {
    delete dynamic_cast<std::invalid_argument*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdLengthError(void* _Nonnull cself) {
    delete dynamic_cast<std::length_error*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdOutOfRange(void* _Nonnull cself) {
    delete dynamic_cast<std::out_of_range*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdRuntimeError(void* _Nonnull cself) {
    delete dynamic_cast<std::runtime_error*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdRangeError(void* _Nonnull cself) {
    delete dynamic_cast<std::range_error*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdOverflowError(void* _Nonnull cself) {
    delete dynamic_cast<std::overflow_error*>(static_cast<std::exception*>(cself));
}

using namespace std;
void release_StdUnderflowError(void* _Nonnull cself) {
    delete dynamic_cast<std::underflow_error*>(static_cast<std::exception*>(cself));
}