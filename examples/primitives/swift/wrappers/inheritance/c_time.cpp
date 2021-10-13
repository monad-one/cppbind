/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/13/2021-14:38.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_time.h"
#include "cxx/inheritance/time.hpp"
#include "cxx/inheritance/base.hpp"

using namespace iegen::example;

void release_TimeImpl(void* _Nonnull cself){
    delete static_cast<std::shared_ptr<iegen::example::Base>*>(cself);
}

void* _Nonnull create_Time(int h, int m, int s){
    
    
    
    auto this_object = new iegen::example::Time(h, m, s);
    return new std::shared_ptr<iegen::example::Base>(this_object);
}

char* _Nonnull _prop_get_Time_time(void* _Nonnull cself){
    std::shared_ptr<iegen::example::Time> c_to_cxx_cself;
    c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Time>(*static_cast<std::shared_ptr<iegen::example::Base>*>(cself));
    auto result = c_to_cxx_cself->time();
    auto cxx_to_c_result = strdup(result.c_str());
    return cxx_to_c_result;
}