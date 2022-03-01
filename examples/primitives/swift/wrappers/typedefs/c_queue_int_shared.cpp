/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/01/2022-11:56.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/typedefs/c_queue_int_shared.h"
#include "cxx/typedefs/queue_int_shared.hpp"

using namespace iegen::example;

void release_QueueIntShared(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(cself.ptr);
    }
}

IEGenCObject create_QueueIntShared(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::QueueIntShared();
        return {strdup("iegen::example::QueueIntShared"), new std::shared_ptr<iegen::example::QueueIntShared>(this_object)};
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

void _func_QueueIntShared_push_back(IEGenCObject cself, int element, IEGenCObject* _Nonnull err){
    
  
    
    std::shared_ptr<iegen::example::QueueIntShared> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(cself.ptr);
    try {
        ctocxxcself->push_back(element);
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

int _func_QueueIntShared_get_size(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    std::shared_ptr<iegen::example::QueueIntShared> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->get_size();
        
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
void release_QueueIntSharedUsage(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::QueueIntSharedUsage*>(cself.ptr);
    }
}

IEGenCObject create_QueueIntSharedUsage(IEGenCObject q, IEGenCObject* _Nonnull err){
    
    std::shared_ptr<iegen::example::QueueIntShared> ctocxxq;
    ctocxxq = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(q.ptr);
    try {
        auto this_object = new iegen::example::QueueIntSharedUsage(ctocxxq);
        return {strdup("iegen::example::QueueIntSharedUsage"), this_object};
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

int _func_QueueIntSharedUsage_getSize(IEGenCObject q, IEGenCObject* _Nonnull err){
    
    std::shared_ptr<iegen::example::QueueIntShared> ctocxxq;
    ctocxxq = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(q.ptr);
  
    try {
        const auto& result = iegen::example::QueueIntSharedUsage::getSize(ctocxxq);
        
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

int _func_QueueIntSharedUsage_getLastElement(IEGenCObject q, IEGenCObject* _Nonnull err){
    
    std::shared_ptr<iegen::example::QueueIntShared> ctocxxq;
    ctocxxq = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(q.ptr);
  
    try {
        const auto& result = iegen::example::QueueIntSharedUsage::getLastElement(ctocxxq);
        
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

int _func_QueueIntSharedUsage_getFirstElement(IEGenCObject q, IEGenCObject* _Nonnull err){
    
    std::shared_ptr<const iegen::example::QueueIntShared> ctocxxq;
    ctocxxq = *static_cast<std::shared_ptr<const iegen::example::QueueIntShared>*>(q.ptr);
  
    try {
        const auto& result = iegen::example::QueueIntSharedUsage::getFirstElement(ctocxxq);
        
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

IEGenCObject _func_QueueIntSharedUsage_getInvQueue(IEGenCDataArray v, IEGenCObject* _Nonnull err){
    std::vector<int> ctocxxv;

    auto data_v = reinterpret_cast<int*>(v.data);

    for (size_t _i_v = 0; _i_v < v.size; ++_i_v) {
        auto& value_v = data_v[_i_v];
        
        ctocxxv.emplace_back(value_v);
    }
  
    try {
        const auto& result = iegen::example::QueueIntSharedUsage::getInvQueue(ctocxxv);
        
        char* type_result = strdup("iegen::example::QueueIntShared");
        void* cxxtocresult_ptr = nullptr;
        cxxtocresult_ptr = new std::shared_ptr<iegen::example::QueueIntShared>(result);
        IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
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

IEGenCObject _func_QueueIntSharedUsage_getSavedQueue(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::QueueIntSharedUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getSavedQueue();
        
        char* type_result = strdup("iegen::example::QueueIntShared");
        void* cxxtocresult_ptr = nullptr;
        cxxtocresult_ptr = new std::shared_ptr<iegen::example::QueueIntShared>(result);
        IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
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
IEGenCObject _prop_get_QueueIntSharedUsage_saved_queue(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::QueueIntSharedUsage*>(cself.ptr);
    const auto& result = ctocxxcself->saved_queue;
    
    char* type_result = strdup("iegen::example::QueueIntShared");
    void* cxxtocresult_ptr = nullptr;
    cxxtocresult_ptr = new std::shared_ptr<iegen::example::QueueIntShared>(result);
    IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
    return cxxtocresult;
}
