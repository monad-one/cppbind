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
#include "swift/wrappers/overloads/c_Utils.h"
#include "cxx/overloads/utils.hpp"

using namespace iegen::example;

void release_Utils(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::Utils>*>(cself);
}

void* _Nonnull create_Utils(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Utils();
        return new std::shared_ptr<iegen::example::Utils>(this_object);
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

int _func_Utils_sum(int first, int second, ErrorObj* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::Utils::sum(first, second);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result;
    return result;
}

float _func_Utils_sum_1(float first, float second, ErrorObj* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::Utils::sum(first, second);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    float result;
    return result;
}

char* _Nonnull _func_Utils_concatenate(void* _Nonnull cself, char* _Nonnull first, char* _Nonnull second, ErrorObj* _Nonnull err){
    auto ctocxxfirst = std::string(first);
    free(first);
  
    auto ctocxxsecond = std::string(second);
    free(second);
  
    
    std::shared_ptr<iegen::example::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Utils>*>(cself);
    try {
        const auto& result = ctocxxcself->concatenate(ctocxxfirst, ctocxxsecond);
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
    char* result = nullptr;
    return result;
}

char* _Nonnull _func_Utils_concatenate_1(void* _Nonnull cself, char* _Nonnull first, char* _Nonnull second, char* _Nonnull third, ErrorObj* _Nonnull err){
    auto ctocxxfirst = std::string(first);
    free(first);
  
    auto ctocxxsecond = std::string(second);
    free(second);
  
    auto ctocxxthird = std::string(third);
    free(third);
  
    
    std::shared_ptr<iegen::example::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Utils>*>(cself);
    try {
        const auto& result = ctocxxcself->concatenate(ctocxxfirst, ctocxxsecond, ctocxxthird);
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
    char* result = nullptr;
    return result;
}