/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/30/2021-14:29.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/extra/c_object.h"
#include "cxx/extra/object.hpp"

using namespace iegen;

void release_Object(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::Object>*>(cself);
}

char* _Nonnull _func_Object_toString(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::Object>(
              *static_cast<std::shared_ptr<iegen::Object>*>(cself)
              );
    try {
      const auto& result = c_to_cxx_cself->toString();
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

char* _Nonnull _func_Object_className(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::Object>(
              *static_cast<std::shared_ptr<iegen::Object>*>(cself)
              );
    try {
      const auto& result = c_to_cxx_cself->className();
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

bool _func_Object_equals(void* _Nonnull cself, void* _Nonnull other, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::Object> c_to_cxx_other;
    auto c_to_cxx_other_baseptr = *reinterpret_cast<std::shared_ptr<iegen::Object>*>(other);
    c_to_cxx_other = std::dynamic_pointer_cast<iegen::Object>(c_to_cxx_other_baseptr);
  
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::Object>(
              *static_cast<std::shared_ptr<iegen::Object>*>(cself)
              );
    try {
      const auto& result = c_to_cxx_cself->equals(c_to_cxx_other);
      
      return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    bool result;
    return result;
}

unsigned long _func_Object_hash(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::Object>(
              *static_cast<std::shared_ptr<iegen::Object>*>(cself)
              );
    try {
      const auto& result = c_to_cxx_cself->hash();
      
      return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    unsigned long result;
    return result;
}

char* _Nonnull _func_Object_debugInfo(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::Object>(
              *static_cast<std::shared_ptr<iegen::Object>*>(cself)
              );
    try {
      const auto& result = c_to_cxx_cself->debugInfo();
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

unsigned long _func_Object_bytesCount(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::Object>(
              *static_cast<std::shared_ptr<iegen::Object>*>(cself)
              );
    try {
      const auto& result = c_to_cxx_cself->bytesCount();
      
      return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    unsigned long result;
    return result;
}