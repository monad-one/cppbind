/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/09/2022-07:12.
 * Please do not change it manually.
 */

#ifndef _C_frame_WRAPPER_
#define _C_frame_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_IegenExample_Frame(IEGenCObject cself, bool owner);

    IEGenCObject create_IegenExample_Frame(IEGenCObject* _Nonnull err);
    unsigned int _prop_get_IegenExample_Frame_backgroundColor(IEGenCObject cself);
    void _prop_set_IegenExample_Frame_backgroundColor(IEGenCObject cself, unsigned int backgroundColor);

    unsigned int _prop_get_IegenExample_Frame_backgroundColorShade(IEGenCObject cself);
    void _prop_set_IegenExample_Frame_backgroundColorShade(IEGenCObject cself, unsigned int backgroundColorShade);

#if __cplusplus
}
#endif
#endif /* ifndef _C_frame_WRAPPER_ */
