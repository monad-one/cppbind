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
#include "swift/wrappers/operators/c_intarray.h"
#include "cxx/operators/intarray.hpp"

using namespace iegen::example;

void release_IntArrayImpl(CObject cself, bool owner){
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::IntArray*>(cself.ptr);
    }
}

CObject create_IntArray(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::IntArray();
        return {strdup("iegen::example::IntArray"), this_object};
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


int _func_IntArray_operator_getitem_(CObject cself,int i) {
    
    
    auto ctocxxcself = static_cast<iegen::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](i);
    
    return result;
}
void _func_IntArray_operator_setitem_(CObject cself, int i, int value) {
    
    
    
    
    auto ctocxxcself = static_cast<iegen::example::IntArray*>(cself.ptr);
    ctocxxcself->operator[](i) = value;
}


int _func_IntArray_operator_getitem__1(CObject cself,char* _Nonnull i) {
    auto ctocxxi = std::string(i);
    free(i);
    
    auto ctocxxcself = static_cast<iegen::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](ctocxxi);
    
    return result;
}


int _func_IntArray_operator_getitem__2(CObject cself,double i) {
    
    
    auto ctocxxcself = static_cast<iegen::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](i);
    
    return result;
}
