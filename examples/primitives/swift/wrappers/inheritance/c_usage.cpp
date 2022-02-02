/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/02/2022-10:55.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/inheritance/c_usage.h"
#include "cxx/inheritance/usage.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/rectangle.hpp"
#include "cxx/inheritance/square.hpp"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/vehicle.hpp"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/date.hpp"
#include "cxx/inheritance/datetime.hpp"

using namespace iegen::example;

void release_GeometricFigure(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::GeometricFigure*>(cself.ptr);
    }
}

CObject create_GeometricFigure(CObject p, ErrorObj* _Nonnull err){
    iegen::example::Parallelogram* ctocxxp_ptr = nullptr;
    if (p.ptr) {
        if (strcmp(p.type, "iegen::example::Parallelogram") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Parallelogram*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Rectangle") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Rectangle*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Rhombus") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Rhombus*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Square") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Square*>(p.ptr);
        else {
            std::cerr << "Unexpected object type: " << p.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxp = ctocxxp_ptr;
    try {
        auto this_object = new iegen::example::GeometricFigure(ctocxxp);
        return {strdup("iegen::example::GeometricFigure"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

CObject _prop_get_GeometricFigure_parallelogram(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::GeometricFigure*>(cself.ptr);
    const auto& result = ctocxxcself->parallelogram();
    
    char* type_result = nullptr;
    const char * name_result = typeid(*result).name();
    int status = 0;
    char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
    if (status == 0) {
        type_result = demangled_result;
    } else {
        type_result = strdup("iegen::example::Parallelogram");
    }
    auto value_ptr_result = const_cast<iegen::example::Parallelogram*>(result);
    CObject cxxtocresult = {type_result, dynamic_cast<void*>(value_ptr_result)};
    return cxxtocresult;
}

void _prop_set_GeometricFigure_parallelogram(CObject cself, CObject p){
    
    auto ctocxxcself = static_cast<iegen::example::GeometricFigure*>(cself.ptr);
    iegen::example::Parallelogram* ctocxxp_ptr = nullptr;
    if (p.ptr) {
        if (strcmp(p.type, "iegen::example::Parallelogram") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Parallelogram*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Rectangle") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Rectangle*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Rhombus") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Rhombus*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Square") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Square*>(p.ptr);
        else {
            std::cerr << "Unexpected object type: " << p.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxp = ctocxxp_ptr;
    ctocxxcself->setParallelogram(ctocxxp);
}


CObject _prop_get_GeometricFigure_nullableParallelogram(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::GeometricFigure*>(cself.ptr);
    const auto& result = ctocxxcself->nullableParallelogram();
    
    char* type_result = nullptr;
    if (result) {
        const char * name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::Parallelogram");
        }
    } else {
        type_result = strdup("iegen::example::Parallelogram");
    }
    auto value_ptr_result = const_cast<iegen::example::Parallelogram*>(result);
    CObject cxxtocresult = {type_result, dynamic_cast<void*>(value_ptr_result)};
    return cxxtocresult;
}

void _prop_set_GeometricFigure_nullableParallelogram(CObject cself, CObject p){
    
    auto ctocxxcself = static_cast<iegen::example::GeometricFigure*>(cself.ptr);
    iegen::example::Parallelogram* ctocxxp_ptr = nullptr;
    if (p.ptr) {
        if (strcmp(p.type, "iegen::example::Parallelogram") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Parallelogram*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Rectangle") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Rectangle*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Rhombus") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Rhombus*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Square") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Square*>(p.ptr);
        else {
            std::cerr << "Unexpected object type: " << p.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxp = ctocxxp_ptr;
    ctocxxcself->setNullableParallelogram(ctocxxp);
}

void release_MyVehicle(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself.ptr);
    }
}

CObject create_MyVehicle(CObject v, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Vehicle> ctocxxv;
    if (strcmp(v.type, "iegen::example::Vehicle") == 0)
        ctocxxv = *static_cast<std::shared_ptr<iegen::example::Vehicle>*>(v.ptr);
    else if (strcmp(v.type, "iegen::example::Bicycle") == 0)
        ctocxxv = *static_cast<std::shared_ptr<iegen::example::Bicycle>*>(v.ptr);
    else {
        std::cerr << "Unexpected object type: " << v.type << std::endl;
        exit(1);
    }
    try {
        auto this_object = new iegen::example::MyVehicle(ctocxxv);
        return {strdup("iegen::example::MyVehicle"), new std::shared_ptr<iegen::example::MyVehicle>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

CObject _prop_get_MyVehicle_vehicle(CObject cself){
    std::shared_ptr<iegen::example::MyVehicle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself.ptr);
    const auto& result = ctocxxcself->vehicle();
    
    char* type_result = nullptr;
    void* cxxtocresult_ptr = nullptr;
    if (result) {
        
        auto& arg_pointee_result = *result.get();
        const char * name_result = typeid(arg_pointee_result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::Vehicle");
        }
        cxxtocresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result));
    } else {
        type_result = strdup("iegen::example::Vehicle");
    }
    CObject cxxtocresult = {type_result, cxxtocresult_ptr};
    return cxxtocresult;
}

void _prop_set_MyVehicle_vehicle(CObject cself, CObject v){
    
    std::shared_ptr<iegen::example::MyVehicle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(cself.ptr);
    
    std::shared_ptr<iegen::example::Vehicle> ctocxxv = nullptr;
    if (v.ptr) {
        if (strcmp(v.type, "iegen::example::Vehicle") == 0)
        ctocxxv = *static_cast<std::shared_ptr<iegen::example::Vehicle>*>(v.ptr);
    else if (strcmp(v.type, "iegen::example::Bicycle") == 0)
        ctocxxv = *static_cast<std::shared_ptr<iegen::example::Bicycle>*>(v.ptr);
    else {
        std::cerr << "Unexpected object type: " << v.type << std::endl;
        exit(1);
    }
    }
    ctocxxcself->setVehicle(ctocxxv);
}

void release_MyBicycle(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(cself.ptr);
    }
}

CObject create_MyBicycle(CObject b, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Bicycle> ctocxxb;
    ctocxxb = *static_cast<std::shared_ptr<iegen::example::Bicycle>*>(b.ptr);
    try {
        auto this_object = new iegen::example::MyBicycle(ctocxxb);
        return {strdup("iegen::example::MyBicycle"), new std::shared_ptr<iegen::example::MyBicycle>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

CObject _prop_get_MyBicycle_bicycle(CObject cself){
    std::shared_ptr<iegen::example::MyBicycle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(cself.ptr);
    const auto& result = ctocxxcself->bicycle();
    
    char* type_result = strdup("iegen::example::Bicycle");
    void* cxxtocresult_ptr;
    cxxtocresult_ptr = new std::shared_ptr<const iegen::example::Bicycle>(result);
    CObject cxxtocresult = {type_result, cxxtocresult_ptr};
    return cxxtocresult;
}

void _prop_set_MyBicycle_bicycle(CObject cself, CObject b){
    
    std::shared_ptr<iegen::example::MyBicycle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(cself.ptr);
    
    std::shared_ptr<const iegen::example::Bicycle> ctocxxb;
    ctocxxb = *static_cast<std::shared_ptr<const iegen::example::Bicycle>*>(b.ptr);
    ctocxxcself->setBicycle(ctocxxb);
}

void release_MyCalendar(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::MyCalendar>*>(cself.ptr);
    }
}

CObject create_MyCalendar(CDataArray events, ErrorObj* _Nonnull err){
    std::vector<std::shared_ptr<Date>> ctocxxevents;

    auto data_events = reinterpret_cast<CObject*>(events.data);

    for (size_t _i_events = 0; _i_events < events.size; ++_i_events) {
        auto& value_events = data_events[_i_events];
        
        std::shared_ptr<iegen::example::Date> ctocxxvalue_events;
        if (strcmp(value_events.type, "iegen::example::Date") == 0)
            ctocxxvalue_events = *static_cast<std::shared_ptr<iegen::example::Date>*>(value_events.ptr);
        else if (strcmp(value_events.type, "iegen::example::DateTime") == 0)
            ctocxxvalue_events = *static_cast<std::shared_ptr<iegen::example::DateTime>*>(value_events.ptr);
        else {
            std::cerr << "Unexpected object type: " << value_events.type << std::endl;
            exit(1);
        }
        ctocxxevents.emplace_back(ctocxxvalue_events);
    }
    try {
        auto this_object = new iegen::example::MyCalendar(ctocxxevents);
        return {strdup("iegen::example::MyCalendar"), new std::shared_ptr<iegen::example::MyCalendar>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

void _func_MyCalendar_addEvent(CObject cself, CObject e, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Date> ctocxxe;
    if (strcmp(e.type, "iegen::example::Date") == 0)
        ctocxxe = *static_cast<std::shared_ptr<iegen::example::Date>*>(e.ptr);
    else if (strcmp(e.type, "iegen::example::DateTime") == 0)
        ctocxxe = *static_cast<std::shared_ptr<iegen::example::DateTime>*>(e.ptr);
    else {
        std::cerr << "Unexpected object type: " << e.type << std::endl;
        exit(1);
    }
  
    
    std::shared_ptr<iegen::example::MyCalendar> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyCalendar>*>(cself.ptr);
    try {
        ctocxxcself->addEvent(ctocxxe);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CDataArray _prop_get_MyCalendar_events(CObject cself){
    std::shared_ptr<iegen::example::MyCalendar> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyCalendar>*>(cself.ptr);
    const auto& result = ctocxxcself->events();
    auto _data_cxxtocresult = new CObject [result.size()];
    CDataArray cxxtocresult = { _data_cxxtocresult, (long long)result.size() };
    for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
        auto& value_result = result[_i_result];
        
        char* type_value_result = nullptr;
        void* cxxtocvalue_result_ptr;

        auto& arg_pointee_value_result = *value_result.get();
        const char * name_value_result = typeid(arg_pointee_value_result).name();
        int status = 0;
        char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
        if (status == 0) {
            type_value_result = demangled_value_result;
        } else {
            type_value_result = strdup("iegen::example::Date");
        }
        cxxtocvalue_result_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(value_result));
        CObject cxxtocvalue_result = {type_value_result, cxxtocvalue_result_ptr};
        _data_cxxtocresult[_i_result] = cxxtocvalue_result;
    }
    return cxxtocresult;
}
