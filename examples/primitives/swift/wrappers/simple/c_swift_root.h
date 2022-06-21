/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/09/2022-13:05.
 * Please do not change it manually.
 */

#ifndef _SWIFT_WRAPPERS_SIMPLE_C_SWIFT_ROOT_H_
#define _SWIFT_WRAPPERS_SIMPLE_C_SWIFT_ROOT_H_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_CppbindExample_Root(CppBindCObject cself, bool owner);

    CppBindCObject create_CppbindExample_Root(char* _Nonnull _path, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_Root_setPath(CppBindCObject cself, char* _Nonnull _path, CppBindCObject* _Nonnull cppbind_err);
    char* _Nonnull _prop_get_CppbindExample_Root_path(CppBindCObject cself);
    void _prop_set_CppbindExample_Root_path(CppBindCObject cself, char* _Nonnull path);

#if __cplusplus
}
#endif
#endif /* ifndef _SWIFT_WRAPPERS_SIMPLE_C_SWIFT_ROOT_H_ */