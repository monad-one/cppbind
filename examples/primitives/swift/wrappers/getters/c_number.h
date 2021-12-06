/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/02/2021-15:46.
 * Please do not change it manually.
 */

#ifndef _C_number_WRAPPER_
#define _C_number_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_NumberInt(CObject cself);

    CObject create_NumberInt(int n);
    int _func_NumberInt_toInt(CObject cself, ErrorObj* _Nonnull err);
    int _prop_get_NumberInt_num(CObject cself);
    void _prop_set_NumberInt_num(CObject cself, int num);

    void release_NumberDouble(CObject cself);

    CObject create_NumberDouble(double n);
    int _func_NumberDouble_toInt(CObject cself, ErrorObj* _Nonnull err);
    double _prop_get_NumberDouble_num(CObject cself);
    void _prop_set_NumberDouble_num(CObject cself, double num);

#if __cplusplus
}
#endif
#endif /* ifndef _C_number_WRAPPER_ */