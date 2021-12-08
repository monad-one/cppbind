/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-16:20.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/templates/c_stack_usage.h"
#include "cxx/templates/stack_usage.hpp"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"

using namespace iegen::example;

void release_StackUsage(void* _Nonnull cself) {
    delete static_cast<iegen::example::StackUsage*>(cself);
}

void* _Nonnull create_StackUsage(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::StackUsage();
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

void* _Nonnull _func_StackUsage_firstItemOfSpecializedStack(void* _Nonnull cself, void* _Nonnull p, ErrorObj* _Nonnull err){
    
    auto ctocxxp = static_cast<iegen::example::Stack<Project>*>(p);
  
    
    auto ctocxxcself = static_cast<iegen::example::StackUsage*>(cself);
    try {
        const auto& result = ctocxxcself->firstItemOfSpecializedStack(ctocxxp);
        
        auto cxxtocresult = const_cast<iegen::example::Project*>(result);
        return cxxtocresult;
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

void* _Nonnull _func_StackUsage_firstItemOfTemplateStackProject(void* _Nonnull cself, void* _Nonnull arg0, ErrorObj* _Nonnull err){
    
    auto ctocxxarg0 = static_cast<iegen::example::Stack<iegen::example::Project>*>(arg0);
  
    
    auto ctocxxcself = static_cast<iegen::example::StackUsage*>(cself);
    try {
        const auto& result = ctocxxcself->firstItemOfTemplateStack<iegen::example::Project>(ctocxxarg0);
        
        auto cxxtocresult = const_cast<iegen::example::Project*>(result);
        return cxxtocresult;
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