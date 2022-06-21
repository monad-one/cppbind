/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/09/2022-13:05.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/operators/c_swift_intarray.h"
#include "cxx/operators/intarray.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_INTARRAY = "cppbind::example::IntArray";

using namespace cppbind::example;

void release_CppbindExample_IntArrayImpl(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::IntArray*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_IntArray(CppBindCObject* _Nonnull cppbind_err) {
    try {
        auto this_object = new cppbind::example::IntArray();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_INTARRAY), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}


int _func_CppbindExample_IntArray__getitem_(CppBindCObject cself,int i) {
    auto ctocxxcself = static_cast<cppbind::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](i);
    
    return result;
}

void _func_CppbindExample_IntArray__setitem_(CppBindCObject cself, int i, int value) {
    
    auto ctocxxcself = static_cast<cppbind::example::IntArray*>(cself.ptr);
    ctocxxcself->operator[](i) = value;
}

int _func_CppbindExample_IntArray__getitem__1(CppBindCObject cself,char* _Nonnull i) {
    auto ctocxxi = std::string(i);
    free(i);
    auto ctocxxcself = static_cast<cppbind::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](ctocxxi);
    
    return result;
}

int _func_CppbindExample_IntArray__getitem__2(CppBindCObject cself,double i) {
    auto ctocxxcself = static_cast<cppbind::example::IntArray*>(cself.ptr);
    const auto& result = ctocxxcself->operator[](i);
    
    return result;
}