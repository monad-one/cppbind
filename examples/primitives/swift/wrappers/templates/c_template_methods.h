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

#ifndef _C_template_methods_WRAPPER_
#define _C_template_methods_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_TemplateMethods(CObject cself);

    CObject create_TemplateMethods();
    int _func_TemplateMethods_maxInt(CObject cself, int  arg0, int  arg1, ErrorObj* _Nonnull err);
    char* _Nonnull _func_TemplateMethods_maxString(CObject cself, char* _Nonnull arg0, char* _Nonnull arg1, ErrorObj* _Nonnull err);
    CDataPair _func_TemplateMethods_makePairProjectProject(CObject cself, CObject  arg0, CObject  arg1, ErrorObj* _Nonnull err);
    CDataPair _func_TemplateMethods_makePairRootProject(CObject cself, CObject  arg0, CObject  arg1, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_template_methods_WRAPPER_ */