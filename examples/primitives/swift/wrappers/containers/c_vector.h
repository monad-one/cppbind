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

#ifndef _C_vector_WRAPPER_
#define _C_vector_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_VectorItem(CObject cself);
    int _prop_get_VectorItem_value(CObject cself);
    void _prop_set_VectorItem_value(CObject cself, int value);


    CObject create_VectorItem(int _value);
    void release_VectorExamples(CObject cself);

    CObject create_VectorExamples();
    void _func_VectorExamples_addIntVector(CObject cself, CDataArray  v, ErrorObj* _Nonnull err);
    void _func_VectorExamples_addObjVector(CObject cself, CDataArray  v, ErrorObj* _Nonnull err);
    void _func_VectorExamples_addStringVector(CObject cself, CDataArray  v, ErrorObj* _Nonnull err);
    CDataArray _func_VectorExamples_getStringVector(CObject cself, ErrorObj* _Nonnull err);
    CDataArray _func_VectorExamples_getObjVector(CObject cself, ErrorObj* _Nonnull err);
    CDataArray _func_VectorExamples_getIntVector(CObject cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_vector_WRAPPER_ */