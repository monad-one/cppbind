/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/15/2021-07:16.
 * Please do not change it manually.
 */

#ifndef _C_object_WRAPPER_
#define _C_object_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Object(void* _Nonnull cself);
    char* _Nonnull _func_Object_toString(void* _Nonnull cself , ErrorObj* _Nonnull err);
    char* _Nonnull _func_Object_className(void* _Nonnull cself , ErrorObj* _Nonnull err);
    bool _func_Object_equals(void* _Nonnull cself , void* _Nonnull other, ErrorObj* _Nonnull err);
    unsigned long _func_Object_hash(void* _Nonnull cself , ErrorObj* _Nonnull err);
    char* _Nonnull _func_Object_debugInfo(void* _Nonnull cself , ErrorObj* _Nonnull err);
    unsigned long _func_Object_bytesCount(void* _Nonnull cself , ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_object_WRAPPER_ */