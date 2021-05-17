#ifndef _C_root_WRAPPER_
#define _C_root_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Root(void* _Nonnull cself);
    void* _Nonnull create_Root(char* _Nonnull _path);
    char* _Nonnull _prop_get_Root_path(void* _Nonnull cself);
    void _prop_set_Root_path(void* _Nonnull cself, char* _Nonnull path);

#if __cplusplus
}
#endif
#endif /* ifndef _C_root_WRAPPER_ */