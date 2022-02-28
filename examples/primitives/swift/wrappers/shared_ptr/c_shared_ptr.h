/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-13:23.
 * Please do not change it manually.
 */

#ifndef _C_shared_ptr_WRAPPER_
#define _C_shared_ptr_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Car(IEGenCObject cself, bool owner);

    IEGenCObject create_Car(int cost, IEGenCObject* _Nonnull err);
    int _prop_get_Car_cost(IEGenCObject cself, IEGenCObject* _Nonnull err);
    void _func_Car_setCostWithCarSharedPtr(IEGenCObject cself, IEGenCObject  sp, IEGenCObject* _Nonnull err);
    void _func_Car_setCostWithCar(IEGenCObject cself, IEGenCObject  sp, IEGenCObject* _Nonnull err);
    void _func_Car_setCostWithCarConstSharedPtr(IEGenCObject cself, IEGenCObject  sp, IEGenCObject* _Nonnull err);
    IEGenCObject _func_Car_makeConstSharedPtr(IEGenCObject cself, IEGenCObject  sp, IEGenCObject* _Nonnull err);
    void _func_Car_setCostWithCarRef(IEGenCObject cself, IEGenCObject  sp, IEGenCObject* _Nonnull err);
    void _func_Car_setCostWithCarPtr(IEGenCObject cself, IEGenCObject  sp, IEGenCObject* _Nonnull err);
    IEGenCObject _func_Car_getNewCarSharedPtr(IEGenCObject cself, IEGenCObject* _Nonnull err);
    void release_CarUsage(IEGenCObject cself, bool owner);

    IEGenCObject create_CarUsage(IEGenCObject car, IEGenCObject* _Nonnull err);
    IEGenCObject _func_CarUsage_getCar(IEGenCObject cself, IEGenCObject* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_shared_ptr_WRAPPER_ */
