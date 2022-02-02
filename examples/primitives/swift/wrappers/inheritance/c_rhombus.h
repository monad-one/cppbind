/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/31/2022-08:51.
 * Please do not change it manually.
 */

#ifndef _C_rhombus_WRAPPER_
#define _C_rhombus_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_RhombusFigureImpl(IEGenCObject cself, bool owner);

    IEGenCObject create_RhombusFigure(double diagonal1, double diagonal2, IEGenCErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_rhombus_WRAPPER_ */
