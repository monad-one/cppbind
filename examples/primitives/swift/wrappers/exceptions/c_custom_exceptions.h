/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:32.
 * Please do not change it manually.
 */

#ifndef _C_custom_exceptions_WRAPPER_
#define _C_custom_exceptions_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_SimpleBaseException(void* _Nonnull cself);

    void* _Nonnull create_SimpleBaseException(int err_num, ErrorObj* _Nonnull err);
    int _func_SimpleBaseException_errNum(void* _Nonnull cself, ErrorObj* _Nonnull err);
    void release_SimpleChildException(void* _Nonnull cself);

    void* _Nonnull create_SimpleChildException(int err_num, ErrorObj* _Nonnull err);
    int _func_SimpleChildException_errNum(void* _Nonnull cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_custom_exceptions_WRAPPER_ */