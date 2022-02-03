/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/03/2022-06:56.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/templates/c_stack_usage.h"
#include "cxx/templates/stack_usage.hpp"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"

using namespace iegen::example;

void release_StackUsage(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::StackUsage*>(cself.ptr);
    }
}

CObject create_StackUsage(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::StackUsage();
        return {strdup("iegen::example::StackUsage"), this_object};
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

CObject _func_StackUsage_firstItemOfSpecializedStack(CObject cself, CObject p, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto ctocxxp = dynamic_cast<iegen::example::Stack<Project>*>(static_cast<iegen::example::Container*>(p.ptr));
  
    
    auto ctocxxcself = static_cast<iegen::example::StackUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->firstItemOfSpecializedStack(ctocxxp);
        
        char* type_result = strdup("iegen::example::Project");
        CObject cxxtocresult = {type_result, const_cast<iegen::example::Project*>(result)};
        return cxxtocresult;
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

CObject _func_StackUsage_firstItemOfTemplateStackProject(CObject cself, CObject arg0, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto ctocxxarg0 = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Container*>(arg0.ptr));
  
    
    auto ctocxxcself = static_cast<iegen::example::StackUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->firstItemOfTemplateStack<iegen::example::Project>(ctocxxarg0);
        
        char* type_result = strdup("iegen::example::Project");
        CObject cxxtocresult = {type_result, const_cast<iegen::example::Project*>(result)};
        return cxxtocresult;
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
