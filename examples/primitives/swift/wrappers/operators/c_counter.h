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

#ifndef _C_counter_WRAPPER_
#define _C_counter_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Counter(CObject cself);

    CObject create_Counter(int count);
    int _prop_get_Counter_count(CObject cself);
    CObject _func_Counter_operator_add_(CObject cself, CObject  counter, ErrorObj* _Nonnull err);
    int _func_Counter_compareTo(CObject cself, CObject  counter, ErrorObj* _Nonnull err);
    bool _func_Counter_operator_gt_(CObject cself, CObject  counter, ErrorObj* _Nonnull err);
    CObject _func_Counter_operator_iadd_(CObject cself, CObject  counter, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_counter_WRAPPER_ */