#ifndef _C_stack_usage_WRAPPER_
#define _C_stack_usage_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_StackUsage(void* _Nonnull cself);
    void* _Nonnull create_StackUsage();
    void* _Nonnull _func_StackUsage_firstItemOfSpecializedStack(void* _Nonnull cself , void* _Nonnull p, ErrorObj* _Nonnull err);
    void* _Nonnull _func_StackUsage_firstItemOfTemplateStackProject(void* _Nonnull cself , void* _Nonnull arg0, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_stack_usage_WRAPPER_ */