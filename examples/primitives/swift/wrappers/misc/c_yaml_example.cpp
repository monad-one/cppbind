/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-13:23.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/misc/c_yaml_example.h"
#include "cxx/misc/yaml_example.hpp"

using namespace iegen::example;

void release_WithExternalAPIComments(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::WithExternalAPIComments*>(cself.ptr);
    }
}

IEGenCObject create_WithExternalAPIComments(char* _Nonnull s, IEGenCObject* _Nonnull err){
    auto ctocxxs = std::string(s);
    free(s);
    try {
        auto this_object = new iegen::example::WithExternalAPIComments(ctocxxs);
        return {strdup("iegen::example::WithExternalAPIComments"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

int _func_WithExternalAPIComments_retInt(int n, IEGenCObject* _Nonnull err){
    
  
    try {
        const auto& result = iegen::example::WithExternalAPIComments::retInt(n);
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}
char* _Nonnull _prop_get_WithExternalAPIComments_str(IEGenCObject cself, IEGenCObject* _Nonnull err){
    auto ctocxxcself = static_cast<iegen::example::WithExternalAPIComments*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->str();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

void _prop_set_WithExternalAPIComments_str(IEGenCObject cself, char* _Nonnull s, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::WithExternalAPIComments*>(cself.ptr);
    auto ctocxxs = std::string(s);
    free(s);
    try {
        ctocxxcself->setStr(ctocxxs);
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}


int _func_WithExternalAPIComments_maxInt(int arg0, int arg1, IEGenCObject* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::WithExternalAPIComments::max<int>(arg0, arg1);
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

char* _Nonnull _func_WithExternalAPIComments_maxString(char* _Nonnull arg0, char* _Nonnull arg1, IEGenCObject* _Nonnull err){
    auto ctocxxarg0 = std::string(arg0);
    free(arg0);
  
    auto ctocxxarg1 = std::string(arg1);
    free(arg1);
  
    try {
        const auto& result = iegen::example::WithExternalAPIComments::max<std::string>(ctocxxarg0, ctocxxarg1);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}
void release_AdderInt(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Adder<int>*>(cself.ptr);
    }
}

int _func_AdderInt_add(int a, int b, IEGenCObject* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::Adder<int>::add(a, b);
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}
void release_AdderDouble(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Adder<double>*>(cself.ptr);
    }
}

double _func_AdderDouble_add(double a, double b, IEGenCObject* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::Adder<double>::add(a, b);
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    double result {};
    return result;
}
