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
#include "swift/wrappers/templates/c_wrapper.h"
#include "cxx/templates/wrapper.hpp"

using namespace iegen::example;

void release_WrapperPairStrings(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Wrapper<std::pair<std::string, std::string>>*>(cself.ptr);
    }
}

IEGenCObject create_WrapperPairStrings(IEGenCDataPair value, IEGenCErrorObj* _Nonnull err){
    auto first_tmp_value = *reinterpret_cast<char**>(value.first);
    auto second_tmp_value = *reinterpret_cast<char**>(value.second);
    auto ctocxxfirst_tmp_value = std::string(first_tmp_value);
    free(first_tmp_value);
    auto ctocxxsecond_tmp_value = std::string(second_tmp_value);
    free(second_tmp_value);
    std::pair<std::string, std::string> ctocxxvalue { ctocxxfirst_tmp_value, ctocxxsecond_tmp_value };
    try {
        auto this_object = new iegen::example::Wrapper<std::pair<std::string, std::string>>(ctocxxvalue);
        return {strdup("iegen::example::Wrapper<std::pair<std::string, std::string>>"), this_object};
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

IEGenCDataPair _prop_get_WrapperPairStrings_value(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Wrapper<std::pair<std::string, std::string>>*>(cself.ptr);
    const auto& result = ctocxxcself->value();
    auto _first_data_cxxtocresult = new char*;
    auto _second_data_cxxtocresult = new char*;
    const auto& first_result = result.first;
    const auto& second_result = result.second;
    auto cxxtocfirst_result = strdup(first_result.data());
    auto cxxtocsecond_result = strdup(second_result.data());
    *_first_data_cxxtocresult = cxxtocfirst_result;
    *_second_data_cxxtocresult = cxxtocsecond_result;
    IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
    return cxxtocresult;
}

void _prop_set_WrapperPairStrings_value(IEGenCObject cself, IEGenCDataPair value){
    
    auto ctocxxcself = static_cast<iegen::example::Wrapper<std::pair<std::string, std::string>>*>(cself.ptr);
    auto first_tmp_value = *reinterpret_cast<char**>(value.first);
    auto second_tmp_value = *reinterpret_cast<char**>(value.second);
    auto ctocxxfirst_tmp_value = std::string(first_tmp_value);
    free(first_tmp_value);
    auto ctocxxsecond_tmp_value = std::string(second_tmp_value);
    free(second_tmp_value);
    std::pair<std::string, std::string> ctocxxvalue { ctocxxfirst_tmp_value, ctocxxsecond_tmp_value };
    ctocxxcself->setValue(ctocxxvalue);
}

void release_WrapperPairIntInt(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Wrapper<std::pair<int, int>>*>(cself.ptr);
    }
}

IEGenCObject create_WrapperPairIntInt(IEGenCDataPair value, IEGenCErrorObj* _Nonnull err){
    auto first_tmp_value = *reinterpret_cast<int*>(value.first);
    auto second_tmp_value = *reinterpret_cast<int*>(value.second);


    std::pair<int, int> ctocxxvalue { first_tmp_value, second_tmp_value };
    try {
        auto this_object = new iegen::example::Wrapper<std::pair<int, int>>(ctocxxvalue);
        return {strdup("iegen::example::Wrapper<std::pair<int, int>>"), this_object};
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

IEGenCDataPair _prop_get_WrapperPairIntInt_value(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Wrapper<std::pair<int, int>>*>(cself.ptr);
    const auto& result = ctocxxcself->value();
    auto _first_data_cxxtocresult = new int;
    auto _second_data_cxxtocresult = new int;
    const auto& first_result = result.first;
    const auto& second_result = result.second;


    *_first_data_cxxtocresult = first_result;
    *_second_data_cxxtocresult = second_result;
    IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
    return cxxtocresult;
}

void _prop_set_WrapperPairIntInt_value(IEGenCObject cself, IEGenCDataPair value){
    
    auto ctocxxcself = static_cast<iegen::example::Wrapper<std::pair<int, int>>*>(cself.ptr);
    auto first_tmp_value = *reinterpret_cast<int*>(value.first);
    auto second_tmp_value = *reinterpret_cast<int*>(value.second);


    std::pair<int, int> ctocxxvalue { first_tmp_value, second_tmp_value };
    ctocxxcself->setValue(ctocxxvalue);
}

void release_WrapperString(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Wrapper<std::string>*>(cself.ptr);
    }
}

IEGenCObject create_WrapperString(char* _Nonnull value, IEGenCErrorObj* _Nonnull err){
    auto ctocxxvalue = std::string(value);
    free(value);
    try {
        auto this_object = new iegen::example::Wrapper<std::string>(ctocxxvalue);
        return {strdup("iegen::example::Wrapper<std::string>"), this_object};
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

char* _Nonnull _prop_get_WrapperString_value(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Wrapper<std::string>*>(cself.ptr);
    const auto& result = ctocxxcself->value();
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}

void _prop_set_WrapperString_value(IEGenCObject cself, char* _Nonnull value){
    
    auto ctocxxcself = static_cast<iegen::example::Wrapper<std::string>*>(cself.ptr);
    auto ctocxxvalue = std::string(value);
    free(value);
    ctocxxcself->setValue(ctocxxvalue);
}

