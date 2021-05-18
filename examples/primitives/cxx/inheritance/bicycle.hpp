#ifndef bicycle_hpp
#define bicycle_hpp

#include "cxx/inheritance/vehicle.hpp"

namespace iegen::example {
// [example]
/**
 * __API__
 * gen: class
 * shared_ref: False
 * package: inheritance
 * swift.include: CWrapper
 * python.include: inheritance.vehicle_pygen
 */
class Bicycle : public Vehicle {
public:
    /**
     * __API__
     * gen: constructor
     */
    Bicycle(int numberOfSeats) : Vehicle(numberOfSeats) {};
};
// [example]
}
#endif