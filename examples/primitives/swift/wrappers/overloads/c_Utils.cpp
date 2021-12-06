/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/02/2021-15:46.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/overloads/c_Utils.h"
#include "cxx/overloads/utils.hpp"

using namespace iegen::example;

void release_Utils(CObject cself) {
    delete static_cast<std::shared_ptr<iegen::example::Utils>*>(cself.ptr);
}

CObject create_Utils(){
    auto this_object = new iegen::example::Utils();
    return {strdup("iegen::example::Utils"), new std::shared_ptr<iegen::example::Utils>(this_object)};
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

char* _Nonnull _func_Utils_concatenate(CObject cself, char* _Nonnull first, char* _Nonnull second, ErrorObj* _Nonnull err){
    auto c_to_cxx_first = std::string(first);
    free(first);
  
    auto c_to_cxx_second = std::string(second);
    free(second);
  
    
    std::shared_ptr<iegen::example::Utils> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<iegen::example::Utils>*>(cself.ptr);
    try {
        const auto& result = c_to_cxx_cself->concatenate(c_to_cxx_first, c_to_cxx_second);
        auto cxx_to_c_result = strdup(result.data());
        return cxx_to_c_result;
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

char* _Nonnull _func_Utils_concatenate_1(CObject cself, char* _Nonnull first, char* _Nonnull second, char* _Nonnull third, ErrorObj* _Nonnull err){
    auto c_to_cxx_first = std::string(first);
    free(first);
  
    auto c_to_cxx_second = std::string(second);
    free(second);
  
    auto c_to_cxx_third = std::string(third);
    free(third);
  
    
    std::shared_ptr<iegen::example::Utils> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<iegen::example::Utils>*>(cself.ptr);
    try {
        const auto& result = c_to_cxx_cself->concatenate(c_to_cxx_first, c_to_cxx_second, c_to_cxx_third);
        auto cxx_to_c_result = strdup(result.data());
        return cxx_to_c_result;
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