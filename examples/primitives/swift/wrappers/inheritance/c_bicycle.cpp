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
#include "swift/wrappers/inheritance/c_bicycle.h"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/vehicle.hpp"

using namespace iegen::example;

void release_Bicycle(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Bicycle>*>(cself.ptr);
    }
}

CObject create_Bicycle(int numberOfSeats, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::Bicycle(numberOfSeats);
        return {strdup("iegen::example::Bicycle"), new std::shared_ptr<iegen::example::Bicycle>(this_object)};
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

char* _Nonnull _func_Bicycle_type(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Bicycle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Bicycle>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->type();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}
