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
#include "swift/wrappers/nested_types/usage/c_list_usage.h"
#include "cxx/nested_types/list_usage.hpp"
#include "cxx/nested_types/list.hpp"

using namespace iegen::example;

void release_IegenExample_ListWrapper(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::ListWrapper*>(cself.ptr);
    }
}

IEGenCObject create_IegenExample_ListWrapper(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::ListWrapper();
        return {strdup("iegen::example::ListWrapper"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

void _func_IegenExample_ListWrapper_push_back(IEGenCObject cself, IEGenCObject item, IEGenCObject* _Nonnull err) {
    
    auto ctocxxitem = static_cast<List::Item*>(item.ptr);
  
    
    auto ctocxxcself = static_cast<iegen::example::ListWrapper*>(cself.ptr);
    try {
        ctocxxcself->push_back(ctocxxitem);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

IEGenCObject _prop_get_IegenExample_ListWrapper_back(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::ListWrapper*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->back();
        
        char* type_result = strdup("iegen::example::List::Item");
        auto value_ptr_result = const_cast<List::Item*>(result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

