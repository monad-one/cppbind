/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/05/2021-09:59.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_rectangle.h"
#include "cxx/inheritance/rectangle.hpp"
#include "cxx/inheritance/parallelogram.hpp"

using namespace iegen::example;

void release_RectangleImpl(void* _Nonnull cself){
    delete dynamic_cast<iegen::example::Rectangle*>(static_cast<iegen::example::Parallelogram*>(cself));
}

void* _Nonnull create_Rectangle(double length, double width){
    
    
    auto this_object = new iegen::example::Rectangle(length, width);
    return static_cast<iegen::example::Parallelogram*>(this_object);
}
double _prop_get_Rectangle_area(void* _Nonnull cself){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Rectangle*>(static_cast<iegen::example::Parallelogram*>(cself));
    auto result = c_to_cxx_cself->area();
    
    return result;
}

double _func_Rectangle_perimeter(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Rectangle*>(static_cast<iegen::example::Parallelogram*>(cself));
    try {
      const auto& result = c_to_cxx_cself->perimeter();
      
      return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    double result;
    return result;
}
double _prop_get_Rectangle_length(void* _Nonnull cself){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Rectangle*>(static_cast<iegen::example::Parallelogram*>(cself));
    auto result = c_to_cxx_cself->length();
    
    return result;
}
double _prop_get_Rectangle_width(void* _Nonnull cself){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Rectangle*>(static_cast<iegen::example::Parallelogram*>(cself));
    auto result = c_to_cxx_cself->width();
    
    return result;
}