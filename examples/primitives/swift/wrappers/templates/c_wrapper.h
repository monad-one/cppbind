/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/21/2021-09:26.
 * Please do not change it manually.
 */

#ifndef _C_wrapper_WRAPPER_
#define _C_wrapper_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_WrapperPairStrings(CObject cself, bool owner);

    CObject create_WrapperPairStrings(CDataPair value, ErrorObj* _Nonnull err);
    CDataPair _prop_get_WrapperPairStrings_value(CObject cself);

    void _prop_set_WrapperPairStrings_value(CObject cself, CDataPair value);

    void release_WrapperPairIntInt(CObject cself, bool owner);

    CObject create_WrapperPairIntInt(CDataPair value, ErrorObj* _Nonnull err);
    CDataPair _prop_get_WrapperPairIntInt_value(CObject cself);

    void _prop_set_WrapperPairIntInt_value(CObject cself, CDataPair value);

    void release_WrapperString(CObject cself, bool owner);

    CObject create_WrapperString(char* _Nonnull value, ErrorObj* _Nonnull err);
    char* _Nonnull _prop_get_WrapperString_value(CObject cself);

    void _prop_set_WrapperString_value(CObject cself, char* _Nonnull value);

#if __cplusplus
}
#endif
#endif /* ifndef _C_wrapper_WRAPPER_ */
