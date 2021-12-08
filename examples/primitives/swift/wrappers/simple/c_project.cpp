/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-16:17.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/simple/c_project.h"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"

using namespace iegen::example;

void release_Project(void* _Nonnull cself) {
    delete static_cast<iegen::example::Project*>(cself);
}

void* _Nonnull create_Project(char* _Nonnull title, ErrorObj* _Nonnull err){
    auto ctocxxtitle = std::string(title);
    free(title);
    try {
        auto this_object = new iegen::example::Project(ctocxxtitle);
        return this_object;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

char* _Nonnull _prop_get_Project_title(void* _Nonnull cself){
    auto ctocxxcself = static_cast<iegen::example::Project*>(cself);
    const auto& result = ctocxxcself->title();
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}

void _func_Project_addTask(void* _Nonnull cself, void* _Nonnull task, ErrorObj* _Nonnull err){
    
    auto ctocxxtask = static_cast<iegen::example::Task*>(task);
  
    
    auto ctocxxcself = static_cast<iegen::example::Project*>(cself);
    try {
        ctocxxcself->addTask(ctocxxtask);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CDataArray _func_Project_tasks(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::Project*>(cself);
    try {
        const auto& result = ctocxxcself->tasks();
        auto _data_cxxtocresult = new void* [result.size()];
        CDataArray cxxtocresult = { _data_cxxtocresult, (long long)result.size() };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            auto cxxtocvalue_result = const_cast<iegen::example::Task*>(value_result);
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
    CDataArray result;
    return result;
}