#ifndef _C_task_WRAPPER_
#define _C_task_WRAPPER_ 

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Task(void* _Nonnull cself);
    void* _Nonnull create_Task(char* _Nonnull title);
    char* _Nonnull _prop_get_Task_title(void* _Nonnull cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_task_WRAPPER_ */