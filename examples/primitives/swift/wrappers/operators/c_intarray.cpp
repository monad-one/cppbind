/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/10/2022-14:09.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/operators/c_intarray.h"
#include "cxx/operators/intarray.hpp"

using namespace iegen::example;

void release_IegenExample_IntArrayImpl(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::IntArray*>(cself.ptr);
    }
}

IEGenCObject create_IegenExample_IntArray(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::IntArray();
        return {strdup("iegen::example::IntArray"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}


int _func_IegenExample_IntArray__getitem_(IEGenCObject cself,int i) {
    auto ctocxxcself = static_cast<iegen::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](i);
    
    return result;
}

void _func_IegenExample_IntArray__setitem_(IEGenCObject cself, int i, int value) {
    
    auto ctocxxcself = static_cast<iegen::example::IntArray*>(cself.ptr);
    ctocxxcself->operator[](i) = value;
}

int _func_IegenExample_IntArray__getitem__1(IEGenCObject cself,char* _Nonnull i) {
    auto ctocxxi = std::string(i);
    free(i);
    auto ctocxxcself = static_cast<iegen::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](ctocxxi);
    
    return result;
}

int _func_IegenExample_IntArray__getitem__2(IEGenCObject cself,double i) {
    auto ctocxxcself = static_cast<iegen::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](i);
    
    return result;
}
