/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/19/2021-16:01.
 * Please do not change it manually.
 */

#ifndef _C_vehicle_WRAPPER_
#define _C_vehicle_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Vehicle(void* _Nonnull cself);
    int _prop_get_Vehicle_numberOfSeats(void* _Nonnull cself);
    char* _Nonnull _func_Vehicle_type(void* _Nonnull cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_vehicle_WRAPPER_ */