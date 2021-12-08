/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:46.
 * Please do not change it manually.
 */

#ifndef _C_user_WRAPPER_
#define _C_user_WRAPPER_

#include "c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_UserInfo(void* _Nonnull cself);

    void* _Nonnull create_UserInfo(char* _Nonnull user_name, unsigned int user_age, ErrorObj* _Nonnull err);
    unsigned int _prop_get_UserInfo_age(void* _Nonnull cself);
    char* _Nonnull _prop_get_UserInfo_name(void* _Nonnull cself);
    bool _prop_get_UserInfo_want_a_drink(void* _Nonnull cself);
    void _prop_set_UserInfo_want_a_drink(void* _Nonnull cself, bool want_a_drink);

#if __cplusplus
}
#endif
#endif /* ifndef _C_user_WRAPPER_ */