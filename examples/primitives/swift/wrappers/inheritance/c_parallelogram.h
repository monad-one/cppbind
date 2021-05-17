#ifndef _C_parallelogram_WRAPPER_
#define _C_parallelogram_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Parallelogram(void* _Nonnull cself);
    double _prop_get_Parallelogram_area(void* _Nonnull cself);
    double _func_Parallelogram_perimeter(void* _Nonnull cself , ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_parallelogram_WRAPPER_ */