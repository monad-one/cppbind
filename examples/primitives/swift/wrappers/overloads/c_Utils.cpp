/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/01/2021-08:16.
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

void* _Nonnull create_Utils(){
    auto this_object = new iegen::example::Utils();
    return new std::shared_ptr<iegen::example::Utils>(this_object);
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
    auto c_to_cxx_first = std::string(first);
    free(first);
  
    auto c_to_cxx_second = std::string(second);
    free(second);
  
    
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Utils>(*static_cast<std::shared_ptr<iegen::example::Utils>*>(cself));
    try {
        const auto& result = c_to_cxx_cself->concatenate(c_to_cxx_first, c_to_cxx_second);
        auto cxx_to_c_result = strdup(result.c_str()); 
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result;
    return result;
}

char* _Nonnull _func_Utils_concatenate_1(void* _Nonnull cself, char* _Nonnull first, char* _Nonnull second, char* _Nonnull third, ErrorObj* _Nonnull err){
    auto c_to_cxx_first = std::string(first);
    free(first);
  
    auto c_to_cxx_second = std::string(second);
    free(second);
  
    auto c_to_cxx_third = std::string(third);
    free(third);
  
    
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Utils>(*static_cast<std::shared_ptr<iegen::example::Utils>*>(cself));
    try {
        const auto& result = c_to_cxx_cself->concatenate(c_to_cxx_first, c_to_cxx_second, c_to_cxx_third);
        auto cxx_to_c_result = strdup(result.c_str()); 
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result;
    return result;
}