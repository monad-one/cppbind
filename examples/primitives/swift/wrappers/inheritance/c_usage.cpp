/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-16:31.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_usage.h"
#include "cxx/inheritance/usage.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/vehicle.hpp"
#include "cxx/inheritance/bicycle.hpp"

using namespace iegen::example;

void release_GeometricFigure(void* _Nonnull cself) {
    delete static_cast<iegen::example::GeometricFigure*>(cself);
}

void* _Nonnull create_GeometricFigure(void* _Nonnull p, ErrorObj* _Nonnull err){
    
    auto ctocxxp = static_cast<iegen::example::Parallelogram*>(p);
    try {
        auto this_object = new iegen::example::GeometricFigure(ctocxxp);
        return this_object;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

void* _Nonnull _prop_get_GeometricFigure_parallelogram(void* _Nonnull cself){
    auto ctocxxcself = static_cast<iegen::example::GeometricFigure*>(cself);
    const auto& result = ctocxxcself->parallelogram();
    
    auto cxxtocresult = const_cast<iegen::example::Parallelogram*>(result);
    return cxxtocresult;
}

void _prop_set_GeometricFigure_parallelogram(void* _Nonnull cself, void* _Nonnull p){
    
    auto ctocxxcself = static_cast<iegen::example::GeometricFigure*>(cself);
    
    auto ctocxxp = static_cast<iegen::example::Parallelogram*>(p);
    ctocxxcself->setParallelogram(ctocxxp);
}

void release_MyVehicle(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself);
}

void* _Nonnull create_MyVehicle(void* _Nonnull v, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Vehicle> ctocxxv;
    ctocxxv = *static_cast<std::shared_ptr<iegen::example::Vehicle>*>(v);
    try {
        auto this_object = new iegen::example::MyVehicle(ctocxxv);
        return new std::shared_ptr<iegen::example::MyVehicle>(this_object);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

void* _Nonnull _prop_get_MyVehicle_vehicle(void* _Nonnull cself){
    std::shared_ptr<iegen::example::MyVehicle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself);
    const auto& result = ctocxxcself->vehicle();
    
    void* cxxtocresult;
    cxxtocresult = reinterpret_cast<void*>(new std::shared_ptr<iegen::example::Vehicle>(result));
    return cxxtocresult;
}

void _prop_set_MyVehicle_vehicle(void* _Nonnull cself, void* _Nonnull v){
    
    std::shared_ptr<iegen::example::MyVehicle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself);
    
    std::shared_ptr<iegen::example::Vehicle> ctocxxv;
    ctocxxv = *static_cast<std::shared_ptr<iegen::example::Vehicle>*>(v);
    ctocxxcself->setVehicle(ctocxxv);
}

void release_MyBicycle(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(cself);
}

void* _Nonnull create_MyBicycle(void* _Nonnull b, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Bicycle> ctocxxb;
    ctocxxb = std::dynamic_pointer_cast<iegen::example::Bicycle>(*static_cast<std::shared_ptr<iegen::example::Vehicle>*>(b));
    try {
        auto this_object = new iegen::example::MyBicycle(ctocxxb);
        return new std::shared_ptr<iegen::example::MyBicycle>(this_object);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

void* _Nonnull _prop_get_MyBicycle_bicycle(void* _Nonnull cself){
    std::shared_ptr<iegen::example::MyBicycle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(cself);
    const auto& result = ctocxxcself->bicycle();
    
    void* cxxtocresult;
    cxxtocresult = reinterpret_cast<void*>(new std::shared_ptr<const iegen::example::Vehicle>(std::static_pointer_cast<const iegen::example::Vehicle>(result)));
    return cxxtocresult;
}

void _prop_set_MyBicycle_bicycle(void* _Nonnull cself, void* _Nonnull b){
    
    std::shared_ptr<iegen::example::MyBicycle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(cself);
    
    std::shared_ptr<const iegen::example::Bicycle> ctocxxb;
    ctocxxb = std::dynamic_pointer_cast<const iegen::example::Bicycle>(*static_cast<std::shared_ptr<const iegen::example::Vehicle>*>(b));
    ctocxxcself->setBicycle(ctocxxb);
}
