/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/21/2021-09:26.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/inheritance/c_rhombus.h"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/parallelogram.hpp"

using namespace iegen::example;

void release_RhombusFigureImpl(CObject cself, bool owner){
    delete cself.type;
    if (owner) {
        delete dynamic_cast<iegen::example::Rhombus*>(static_cast<iegen::example::Parallelogram*>(cself.ptr));
    }
}

CObject create_RhombusFigure(double diagonal1, double diagonal2, ErrorObj* _Nonnull err){
    
    
    try {
        auto this_object = new iegen::example::Rhombus(diagonal1, diagonal2);
        return {strdup("iegen::example::Rhombus"), static_cast<iegen::example::Parallelogram*>(this_object)};
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
