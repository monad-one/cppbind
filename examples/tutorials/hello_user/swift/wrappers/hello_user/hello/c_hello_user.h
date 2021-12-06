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

#ifndef _C_hello_user_WRAPPER_
#define _C_hello_user_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_UserInfo(CObject cself);

    CObject create_UserInfo(char* _Nonnull user_name, unsigned int user_age);
    unsigned int _prop_get_UserInfo_age(CObject cself);
    char* _Nonnull _prop_get_UserInfo_name(CObject cself);
    bool _prop_get_UserInfo_want_a_drink(CObject cself);
    void _prop_set_UserInfo_want_a_drink(CObject cself, bool want_a_drink);

    void release_Host(CObject cself);

    CObject create_Host();
    char* _Nonnull _func_Host_hello(CObject cself, CObject  user, ErrorObj* _Nonnull err);
    char* _Nonnull _func_Host_welcome(CObject cself, CObject  user, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_hello_user_WRAPPER_ */