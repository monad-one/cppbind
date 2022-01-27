/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/27/2022-11:11.
 * Please do not change it manually.
 */

#ifndef _C_queue_int_WRAPPER_
#define _C_queue_int_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_QueueInt(CObject cself, bool owner);

    CObject create_QueueInt(ErrorObj* _Nonnull err);
    void _func_QueueInt_push_back(CObject cself, int  element, ErrorObj* _Nonnull err);
    void release_QueueIntUsage(CObject cself, bool owner);

    CObject create_QueueIntUsage(CObject q, ErrorObj* _Nonnull err);
    int _func_QueueIntUsage_getLastElement(CObject  q, ErrorObj* _Nonnull err);
    int _func_QueueIntUsage_getFirstElement(CObject  q, ErrorObj* _Nonnull err);
    CObject _func_QueueIntUsage_getInvQueue(CDataArray  v, ErrorObj* _Nonnull err);
    CObject _func_QueueIntUsage_getSavedQueue(CObject cself, ErrorObj* _Nonnull err);
    CObject _prop_get_QueueIntUsage_empty_queue(CObject cself);
    CObject _prop_get_QueueIntUsage_empty_queue_ptr(CObject cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_queue_int_WRAPPER_ */
