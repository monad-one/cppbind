#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_parallelogram.h"
#include "cxx/inheritance/parallelogram.hpp"

using namespace iegen::example;
void release_Parallelogram(void* _Nonnull cself){
    delete dynamic_cast<iegen::example::Parallelogram*>(static_cast<iegen::example::Parallelogram*>(cself));
}
double _prop_get_Parallelogram_area(void* _Nonnull cself){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Parallelogram*>(static_cast<iegen::example::Parallelogram*>(cself));
    auto result = c_to_cxx_cself->area();
    
    return result;
}
double _func_Parallelogram_perimeter(void* _Nonnull cself , ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Parallelogram*>(static_cast<iegen::example::Parallelogram*>(cself));
    try {
      const auto& result = c_to_cxx_cself->perimeter();
      
      return result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    double result;
    return result;
}