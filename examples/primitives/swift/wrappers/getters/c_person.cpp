#include <string.h>
#include <memory>
#include "swift/wrappers/getters/c_person.h"
#include "cxx/getters/person.hpp"


using namespace iegen::example;
void release_Person(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::Person>*>(cself);
}
void* _Nonnull create_Person(char* _Nonnull name, char* _Nonnull email, int age){
    auto c_to_cxx_name = std::string(name);
    free(name);
    auto c_to_cxx_email = std::string(email);
    free(email);
    
    auto this_object = new iegen::example::Person(c_to_cxx_name, c_to_cxx_email, age);
    return new std::shared_ptr<iegen::example::Person>(this_object);
}
char* _Nonnull _prop_get_Person_fullName(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Person>(
              *static_cast<std::shared_ptr<iegen::example::Person>*>(cself)
              );
    auto result = c_to_cxx_cself->fullName();
    auto cxx_to_c_result = strdup(result.c_str()); 
    return cxx_to_c_result;
}

void _prop_set_Person_setFullName(void* _Nonnull cself, char* _Nonnull val){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Person>(
              *static_cast<std::shared_ptr<iegen::example::Person>*>(cself)
              );
    auto c_to_cxx_val = std::string(val);
    free(val);
    c_to_cxx_cself->setFullName(c_to_cxx_val);
}

char* _Nonnull _prop_get_Person_email(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Person>(
              *static_cast<std::shared_ptr<iegen::example::Person>*>(cself)
              );
    auto result = c_to_cxx_cself->_email;
    auto cxx_to_c_result = strdup(result.c_str()); 
    return cxx_to_c_result;
}
void _prop_set_Person_email(void* _Nonnull cself, char* _Nonnull email){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Person>(
              *static_cast<std::shared_ptr<iegen::example::Person>*>(cself)
              );
    auto c_to_cxx_email = std::string(email);
    free(email);
    c_to_cxx_cself->_email = c_to_cxx_email;
}

int _prop_get_Person_age(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Person>(
              *static_cast<std::shared_ptr<iegen::example::Person>*>(cself)
              );
    auto result = c_to_cxx_cself->_age;
    
    return result;
}
void _prop_set_Person_age(void* _Nonnull cself, int age){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Person>(
              *static_cast<std::shared_ptr<iegen::example::Person>*>(cself)
              );
    
    c_to_cxx_cself->_age = age;
}