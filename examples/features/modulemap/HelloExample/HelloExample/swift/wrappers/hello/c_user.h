/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/21/2021-09:33.
 * Please do not change it manually.
 */

#ifndef _C_user_WRAPPER_
#define _C_user_WRAPPER_

#include "c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_UserInfo(CObject cself, bool owner);

    CObject create_UserInfo(char* _Nonnull user_name, unsigned int user_age, ErrorObj* _Nonnull err);
    unsigned int _prop_get_UserInfo_age(CObject cself);
    char* _Nonnull _prop_get_UserInfo_name(CObject cself);
    bool _prop_get_UserInfo_want_a_drink(CObject cself);
    void _prop_set_UserInfo_want_a_drink(CObject cself, bool want_a_drink);

#if __cplusplus
}
#endif
#endif /* ifndef _C_user_WRAPPER_ */
