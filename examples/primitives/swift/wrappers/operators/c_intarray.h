/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/07/2022-14:41.
 * Please do not change it manually.
 */

#ifndef _C_intarray_WRAPPER_
#define _C_intarray_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_IegenExample_IntArrayImpl(IEGenCObject cself, bool owner);

    IEGenCObject create_IegenExample_IntArray(IEGenCObject* _Nonnull err);


    int _func_IegenExample_IntArray__getitem_(IEGenCObject cself, int  i);


    void _func_IegenExample_IntArray__setitem_(IEGenCObject cself, int i, int value);


    int _func_IegenExample_IntArray__getitem__1(IEGenCObject cself, char* _Nonnull i);



    int _func_IegenExample_IntArray__getitem__2(IEGenCObject cself, double  i);

#if __cplusplus
}
#endif
#endif /* ifndef _C_intarray_WRAPPER_ */
