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

#ifndef _C_project_WRAPPER_
#define _C_project_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Project(CObject cself);

    CObject create_Project(char* _Nonnull title);
    char* _Nonnull _prop_get_Project_title(CObject cself);
    void _func_Project_addTask(CObject cself, CObject  task, ErrorObj* _Nonnull err);
    CDataArray _func_Project_tasks(CObject cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_project_WRAPPER_ */