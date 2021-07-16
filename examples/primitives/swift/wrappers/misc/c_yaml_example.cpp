/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/15/2021-06:51.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/misc/c_yaml_example.h"
#include "cxx/misc/yaml_example.hpp"


using namespace iegen::example;
void release_WithExternalAPIComments(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::WithExternalAPIComments*>(static_cast<iegen::example::WithExternalAPIComments*>(cself));
}
void* _Nonnull create_WithExternalAPIComments(char* _Nonnull s){
    auto c_to_cxx_s = std::string(s);
    free(s);
    auto this_object = new iegen::example::WithExternalAPIComments(c_to_cxx_s);
    return static_cast<iegen::example::WithExternalAPIComments*>(this_object);
}
int _func_WithExternalAPIComments_retInt(int n, ErrorObj* _Nonnull err){
    
  
    try {
      const auto& result = iegen::example::WithExternalAPIComments::retInt(n);
      
      return result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    int result;
    return result;
}
char* _Nonnull _prop_get_WithExternalAPIComments_str(void* _Nonnull cself){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::WithExternalAPIComments*>(static_cast<iegen::example::WithExternalAPIComments*>(cself));
    auto result = c_to_cxx_cself->str();
    auto cxx_to_c_result = strdup(result.c_str()); 
    return cxx_to_c_result;
}

void _prop_set_WithExternalAPIComments_setStr(void* _Nonnull cself, char* _Nonnull s){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::WithExternalAPIComments*>(static_cast<iegen::example::WithExternalAPIComments*>(cself));
    auto c_to_cxx_s = std::string(s);
    free(s);
    c_to_cxx_cself->setStr(c_to_cxx_s);
}

int _func_WithExternalAPIComments_maxInt(int arg0, int arg1, ErrorObj* _Nonnull err){
    
  
    
  
    try {
      const auto& result = iegen::example::WithExternalAPIComments::max<int>(arg0, arg1);
      
      return result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    int result;
    return result;
}
char* _Nonnull _func_WithExternalAPIComments_maxString(char* _Nonnull arg0, char* _Nonnull arg1, ErrorObj* _Nonnull err){
    auto c_to_cxx_arg0 = std::string(arg0);
    free(arg0);
  
    auto c_to_cxx_arg1 = std::string(arg1);
    free(arg1);
  
    try {
      const auto& result = iegen::example::WithExternalAPIComments::max<std::string>(c_to_cxx_arg0, c_to_cxx_arg1);
      auto cxx_to_c_result = strdup(result.c_str()); 
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    char* _Nonnull result;
    return result;
}

using namespace iegen::example;
void release_AdderInt(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Adder<int>*>(static_cast<iegen::example::Adder<int>*>(cself));
}
int _func_AdderInt_add(int a, int b, ErrorObj* _Nonnull err){
    
  
    
  
    try {
      const auto& result = iegen::example::Adder<int>::add(a, b);
      
      return result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    int result;
    return result;
}

using namespace iegen::example;
void release_AdderDouble(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Adder<double>*>(static_cast<iegen::example::Adder<double>*>(cself));
}
double _func_AdderDouble_add(double a, double b, ErrorObj* _Nonnull err){
    
  
    
  
    try {
      const auto& result = iegen::example::Adder<double>::add(a, b);
      
      return result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    double result;
    return result;
}