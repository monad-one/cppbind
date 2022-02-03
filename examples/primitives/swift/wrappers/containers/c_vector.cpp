/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/31/2022-10:17.
 * Please do not change it manually.
 */

#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/containers/c_vector.h"
#include "cxx/containers/vector.hpp"

using namespace iegen::example;

void release_VectorItem(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::VectorItem*>(cself.ptr);
    }
}
int _prop_get_VectorItem_value(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::VectorItem*>(cself.ptr);
    const auto& result = ctocxxcself->value;
    
    return result;
}
void _prop_set_VectorItem_value(IEGenCObject cself, int value){
    
    auto ctocxxcself = static_cast<iegen::example::VectorItem*>(cself.ptr);
    
    ctocxxcself->value = value;
}


IEGenCObject create_VectorItem(int _value, IEGenCErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::VectorItem(_value);
        return {strdup("iegen::example::VectorItem"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCObject result {};
    return result;
}
void release_VectorExamples(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::VectorExamples*>(cself.ptr);
    }
}

IEGenCObject create_VectorExamples(IEGenCErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::VectorExamples();
        return {strdup("iegen::example::VectorExamples"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCObject result {};
    return result;
}

void _func_VectorExamples_addIntVector(IEGenCObject cself, IEGenCDataArray v, IEGenCErrorObj* _Nonnull err){
    std::vector<int> ctocxxv;

    auto data_v = reinterpret_cast<int*>(v.data);

    for (size_t _i_v = 0; _i_v < v.size; ++_i_v) {
        auto& value_v = data_v[_i_v];
        
        ctocxxv.emplace_back(value_v);
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::VectorExamples*>(cself.ptr);
    try {
        ctocxxcself->addIntVector(ctocxxv);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_VectorExamples_addObjVector(IEGenCObject cself, IEGenCDataArray v, IEGenCErrorObj* _Nonnull err){
    std::vector<VectorItem *> ctocxxv;

    auto data_v = reinterpret_cast<IEGenCObject*>(v.data);

    for (size_t _i_v = 0; _i_v < v.size; ++_i_v) {
        auto& value_v = data_v[_i_v];
        
        auto ctocxxvalue_v = static_cast<iegen::example::VectorItem*>(value_v.ptr);
        ctocxxv.emplace_back(ctocxxvalue_v);
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::VectorExamples*>(cself.ptr);
    try {
        ctocxxcself->addObjVector(ctocxxv);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_VectorExamples_addStringVector(IEGenCObject cself, IEGenCDataArray v, IEGenCErrorObj* _Nonnull err){
    std::vector<std::string> ctocxxv;

    auto data_v = reinterpret_cast<char**>(v.data);

    for (size_t _i_v = 0; _i_v < v.size; ++_i_v) {
        auto& value_v = data_v[_i_v];
        auto ctocxxvalue_v = std::string(value_v);
        free(value_v);
        ctocxxv.emplace_back(ctocxxvalue_v);
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::VectorExamples*>(cself.ptr);
    try {
        ctocxxcself->addStringVector(ctocxxv);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataArray _func_VectorExamples_getStringVector(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::VectorExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getStringVector();
        auto _data_cxxtocresult = new char* [result.size()];
        IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            auto cxxtocvalue_result = strdup(value_result.data());
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataArray result {};
    return result;
}

IEGenCDataArray _func_VectorExamples_getObjVector(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::VectorExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getObjVector();
        auto _data_cxxtocresult = new IEGenCObject [result.size()];
        IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            char* type_value_result = strdup("iegen::example::VectorItem");
            IEGenCObject cxxtocvalue_result = {type_value_result, const_cast<iegen::example::VectorItem*>(value_result)};
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataArray result {};
    return result;
}

IEGenCDataArray _func_VectorExamples_getIntVector(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::VectorExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getIntVector();
        auto _data_cxxtocresult = new int [result.size()];
        IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            _data_cxxtocresult[_i_result] = value_result;
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataArray result {};
    return result;
}
