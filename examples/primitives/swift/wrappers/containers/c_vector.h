/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:32.
 * Please do not change it manually.
 */

#ifndef _C_vector_WRAPPER_
#define _C_vector_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_VectorItem(void* _Nonnull cself);
    int _prop_get_VectorItem_value(void* _Nonnull cself);
    void _prop_set_VectorItem_value(void* _Nonnull cself, int value);


    void* _Nonnull create_VectorItem(int _value, ErrorObj* _Nonnull err);
    void release_VectorExamples(void* _Nonnull cself);

    void* _Nonnull create_VectorExamples(ErrorObj* _Nonnull err);
    void _func_VectorExamples_addIntVector(void* _Nonnull cself, CDataArray  v, ErrorObj* _Nonnull err);
    void _func_VectorExamples_addObjVector(void* _Nonnull cself, CDataArray  v, ErrorObj* _Nonnull err);
    void _func_VectorExamples_addStringVector(void* _Nonnull cself, CDataArray  v, ErrorObj* _Nonnull err);
    CDataArray _func_VectorExamples_getStringVector(void* _Nonnull cself, ErrorObj* _Nonnull err);
    CDataArray _func_VectorExamples_getObjVector(void* _Nonnull cself, ErrorObj* _Nonnull err);
    CDataArray _func_VectorExamples_getIntVector(void* _Nonnull cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_vector_WRAPPER_ */