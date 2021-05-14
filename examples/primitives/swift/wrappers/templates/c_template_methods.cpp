#include <string.h>
#include <memory>
#include "swift/wrappers/templates/c_template_methods.h"
#include "cxx/templates/template_methods.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/root.hpp"


using namespace iegen::example;
void release_TemplateMethods(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::TemplateMethods*>(static_cast<iegen::example::TemplateMethods*>(cself));
}
void* _Nonnull create_TemplateMethods(){
    auto this_object = new iegen::example::TemplateMethods();
    return static_cast<iegen::example::TemplateMethods*>(this_object);
}
int _func_TemplateMethods_maxInt(void* _Nonnull cself , int arg0, int arg1){
    
  
    
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::TemplateMethods*>(static_cast<iegen::example::TemplateMethods*>(cself));
    const auto& result = c_to_cxx_cself->max(arg0, arg1);
    
    return result;
}
char* _Nonnull _func_TemplateMethods_maxString(void* _Nonnull cself , char* _Nonnull arg0, char* _Nonnull arg1){
    auto c_to_cxx_arg0 = std::string(arg0);
    free(arg0);
  
    auto c_to_cxx_arg1 = std::string(arg1);
    free(arg1);
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::TemplateMethods*>(static_cast<iegen::example::TemplateMethods*>(cself));
    const auto& result = c_to_cxx_cself->max(c_to_cxx_arg0, c_to_cxx_arg1);
    auto cxx_to_c_result = strdup(result.c_str()); 
    return cxx_to_c_result;
}
CDataPair _func_TemplateMethods_makePairProjectProject(void* _Nonnull cself , void* _Nonnull arg0, void* _Nonnull arg1){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_arg0 = dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(arg0));
  
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_arg1 = dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(arg1));
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::TemplateMethods*>(static_cast<iegen::example::TemplateMethods*>(cself));
    const auto& result = c_to_cxx_cself->makePair(c_to_cxx_arg0, c_to_cxx_arg1);
    auto _first_data_cxx_to_c_result = new void* _Nonnull;
    auto _second_data_cxx_to_c_result = new void* _Nonnull;
    const auto& first_result = result.first;
    const auto& second_result = result.second;
    auto value_ptr_first_result = const_cast<iegen::example::Project*>(first_result);
        auto cxx_to_c_first_result = static_cast<iegen::example::Project*>(value_ptr_first_result);
    auto value_ptr_second_result = const_cast<iegen::example::Project*>(second_result);
        auto cxx_to_c_second_result = static_cast<iegen::example::Project*>(value_ptr_second_result);
    *_first_data_cxx_to_c_result = cxx_to_c_first_result;
    *_second_data_cxx_to_c_result = cxx_to_c_second_result;
    CDataPair cxx_to_c_result = { _first_data_cxx_to_c_result, _second_data_cxx_to_c_result };
    return cxx_to_c_result;
}
CDataPair _func_TemplateMethods_makePairRootProject(void* _Nonnull cself , void* _Nonnull arg0, void* _Nonnull arg1){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_arg0 = dynamic_cast<iegen::example::Root*>(static_cast<iegen::example::Root*>(arg0));
  
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_arg1 = dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(arg1));
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::TemplateMethods*>(static_cast<iegen::example::TemplateMethods*>(cself));
    const auto& result = c_to_cxx_cself->makePair(c_to_cxx_arg0, c_to_cxx_arg1);
    auto _first_data_cxx_to_c_result = new void* _Nonnull;
    auto _second_data_cxx_to_c_result = new void* _Nonnull;
    const auto& first_result = result.first;
    const auto& second_result = result.second;
    auto value_ptr_first_result = const_cast<iegen::example::Root*>(first_result);
        auto cxx_to_c_first_result = static_cast<iegen::example::Root*>(value_ptr_first_result);
    auto value_ptr_second_result = const_cast<iegen::example::Project*>(second_result);
        auto cxx_to_c_second_result = static_cast<iegen::example::Project*>(value_ptr_second_result);
    *_first_data_cxx_to_c_result = cxx_to_c_first_result;
    *_second_data_cxx_to_c_result = cxx_to_c_second_result;
    CDataPair cxx_to_c_result = { _first_data_cxx_to_c_result, _second_data_cxx_to_c_result };
    return cxx_to_c_result;
}