#ifndef _C_component_WRAPPER_
#define _C_component_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Component(void* _Nonnull cself);
    void* _Nonnull create_Component(void* _Nonnull parent, char* _Nonnull name);
#if __cplusplus
}
#endif
#endif /* ifndef _C_component_WRAPPER_ */