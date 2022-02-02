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
#include "swift/wrappers/templates/c_template_methods.h"
#include "cxx/templates/template_methods.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/root.hpp"

using namespace iegen::example;

void release_TemplateMethods(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::TemplateMethods*>(cself.ptr);
    }
}

CObject create_TemplateMethods(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::TemplateMethods();
        return {strdup("iegen::example::TemplateMethods"), this_object};
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

int _func_TemplateMethods_maxInt(CObject cself, int arg0, int arg1, ErrorObj* _Nonnull err){
    
  
    
  
    
    auto ctocxxcself = static_cast<iegen::example::TemplateMethods*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->max<int>(arg0, arg1);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result{};
    return result;
}

char* _Nonnull _func_TemplateMethods_maxString(CObject cself, char* _Nonnull arg0, char* _Nonnull arg1, ErrorObj* _Nonnull err){
    auto ctocxxarg0 = std::string(arg0);
    free(arg0);
  
    auto ctocxxarg1 = std::string(arg1);
    free(arg1);
  
    
    auto ctocxxcself = static_cast<iegen::example::TemplateMethods*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->max<std::string>(ctocxxarg0, ctocxxarg1);
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

CDataPair _func_TemplateMethods_makePairProjectProject(CObject cself, CObject arg0, CObject arg1, ErrorObj* _Nonnull err){
    
    auto ctocxxarg0 = static_cast<iegen::example::Project*>(arg0.ptr);
  
    
    auto ctocxxarg1 = static_cast<iegen::example::Project*>(arg1.ptr);
  
    
    auto ctocxxcself = static_cast<iegen::example::TemplateMethods*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->makePair<iegen::example::Project, iegen::example::Project>(ctocxxarg0, ctocxxarg1);
        auto _first_data_cxxtocresult = new CObject;
        auto _second_data_cxxtocresult = new CObject;
        const auto& first_result = result.first;
        const auto& second_result = result.second;

        char* type_first_result = strdup("iegen::example::Project");
        auto value_ptr_first_result = const_cast<iegen::example::Project*>(first_result);
        CObject cxxtocfirst_result = {type_first_result, value_ptr_first_result};

        char* type_second_result = strdup("iegen::example::Project");
        auto value_ptr_second_result = const_cast<iegen::example::Project*>(second_result);
        CObject cxxtocsecond_result = {type_second_result, value_ptr_second_result};
        *_first_data_cxxtocresult = cxxtocfirst_result;
        *_second_data_cxxtocresult = cxxtocsecond_result;
        CDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataPair result{};
    return result;
}

CDataPair _func_TemplateMethods_makePairRootProject(CObject cself, CObject arg0, CObject arg1, ErrorObj* _Nonnull err){
    
    auto ctocxxarg0 = static_cast<iegen::example::Root*>(arg0.ptr);
  
    
    auto ctocxxarg1 = static_cast<iegen::example::Project*>(arg1.ptr);
  
    
    auto ctocxxcself = static_cast<iegen::example::TemplateMethods*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->makePair<iegen::example::Root, iegen::example::Project>(ctocxxarg0, ctocxxarg1);
        auto _first_data_cxxtocresult = new CObject;
        auto _second_data_cxxtocresult = new CObject;
        const auto& first_result = result.first;
        const auto& second_result = result.second;

        char* type_first_result = strdup("iegen::example::Root");
        auto value_ptr_first_result = const_cast<iegen::example::Root*>(first_result);
        CObject cxxtocfirst_result = {type_first_result, value_ptr_first_result};

        char* type_second_result = strdup("iegen::example::Project");
        auto value_ptr_second_result = const_cast<iegen::example::Project*>(second_result);
        CObject cxxtocsecond_result = {type_second_result, value_ptr_second_result};
        *_first_data_cxxtocresult = cxxtocfirst_result;
        *_second_data_cxxtocresult = cxxtocsecond_result;
        CDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataPair result{};
    return result;
}
