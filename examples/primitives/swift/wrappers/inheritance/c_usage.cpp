/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/07/2021-10:58.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_usage.h"
#include "cxx/inheritance/usage.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/vehicle.hpp"

using namespace iegen::example;

void release_GeometricFigure(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::GeometricFigure*>(static_cast<iegen::example::GeometricFigure*>(cself));
}

void* _Nonnull create_GeometricFigure(void* _Nonnull p){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_p = dynamic_cast<iegen::example::Parallelogram*>(static_cast<iegen::example::Parallelogram*>(p));
    auto this_object = new iegen::example::GeometricFigure(c_to_cxx_p);
    return static_cast<iegen::example::GeometricFigure*>(this_object);
}

void* _Nonnull _prop_get_GeometricFigure_parallelogram(void* _Nonnull cself){
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::GeometricFigure*>(static_cast<iegen::example::GeometricFigure*>(cself));
    auto result = c_to_cxx_cself->parallelogram();
    auto value_ptr_result = const_cast<iegen::example::Parallelogram*>(result);
    auto cxx_to_c_result = static_cast<iegen::example::Parallelogram*>(value_ptr_result);
    return cxx_to_c_result;
}

void _prop_set_GeometricFigure_setParallelogram(void* _Nonnull cself, void* _Nonnull p){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::GeometricFigure*>(static_cast<iegen::example::GeometricFigure*>(cself));
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_p = dynamic_cast<iegen::example::Parallelogram*>(static_cast<iegen::example::Parallelogram*>(p));
    c_to_cxx_cself->setParallelogram(c_to_cxx_p);
}

void release_MyVehicle(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself);
}

void* _Nonnull create_MyVehicle(void* _Nonnull v){
    
    std::shared_ptr<iegen::example::Vehicle> c_to_cxx_v;
    c_to_cxx_v = std::dynamic_pointer_cast<iegen::example::Vehicle>(*static_cast<std::shared_ptr<iegen::example::Vehicle>*>(v));
    auto this_object = new iegen::example::MyVehicle(c_to_cxx_v);
    return new std::shared_ptr<iegen::example::MyVehicle>(this_object);
}

void* _Nonnull _prop_get_MyVehicle_vehicle(void* _Nonnull cself){
    std::shared_ptr<iegen::example::MyVehicle> c_to_cxx_cself;
    c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::MyVehicle>(*static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself));
    auto result = c_to_cxx_cself->vehicle();
    
    void* cxx_to_c_result;
    cxx_to_c_result = reinterpret_cast<void*>(new std::shared_ptr<iegen::example::Vehicle>(std::static_pointer_cast<iegen::example::Vehicle>(result)));
    return cxx_to_c_result;
}

void _prop_set_MyVehicle_setVehicle(void* _Nonnull cself, void* _Nonnull v){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::MyVehicle>(
              *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself)
              );
    
    std::shared_ptr<iegen::example::Vehicle> c_to_cxx_v;
    c_to_cxx_v = std::dynamic_pointer_cast<iegen::example::Vehicle>(*static_cast<std::shared_ptr<iegen::example::Vehicle>*>(v));
    c_to_cxx_cself->setVehicle(c_to_cxx_v);
}
