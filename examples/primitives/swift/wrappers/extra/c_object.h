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

#ifndef _C_object_WRAPPER_
#define _C_object_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Object(CObject cself, bool owner);
    char* _Nonnull _func_Object_toString(CObject cself, ErrorObj* _Nonnull err);
    char* _Nonnull _func_Object_className(CObject cself, ErrorObj* _Nonnull err);
    bool _func_Object_equals(CObject cself, CObject  other, ErrorObj* _Nonnull err);
    unsigned long _func_Object_hash(CObject cself, ErrorObj* _Nonnull err);
    char* _Nonnull _func_Object_debugInfo(CObject cself, ErrorObj* _Nonnull err);
    unsigned long _func_Object_bytesCount(CObject cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_object_WRAPPER_ */