/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/02/2021-15:34.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/inheritance/c_bicycle.h"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/vehicle.hpp"

using namespace iegen::example;

void release_Bicycle(CObject cself) {
    delete static_cast<std::shared_ptr<iegen::example::Vehicle>*>(cself.ptr);
}

CObject create_Bicycle(int numberOfSeats){
    
    auto this_object = new iegen::example::Bicycle(numberOfSeats);
    return {strdup("iegen::example::Bicycle"), new std::shared_ptr<iegen::example::Vehicle>(this_object)};
}

char* _Nonnull _func_Bicycle_type(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Bicycle> c_to_cxx_cself;
    c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Bicycle>(*static_cast<std::shared_ptr<iegen::example::Vehicle>*>(cself.ptr));
    try {
        const auto& result = c_to_cxx_cself->type();
        auto cxx_to_c_result = strdup(result.data());
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result = nullptr;
    return result;
}