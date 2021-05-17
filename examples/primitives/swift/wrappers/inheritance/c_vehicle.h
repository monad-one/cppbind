#ifndef _C_vehicle_WRAPPER_
#define _C_vehicle_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Vehicle(void* _Nonnull cself);
    void* _Nonnull create_Vehicle(int numberOfSeats);
    int _prop_get_Vehicle_numberOfSeats(void* _Nonnull cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_vehicle_WRAPPER_ */