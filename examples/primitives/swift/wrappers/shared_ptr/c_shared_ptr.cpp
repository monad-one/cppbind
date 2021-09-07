/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/07/2021-10:58.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/shared_ptr/c_shared_ptr.h"
#include "cxx/shared_ptr/shared_ptr.hpp"

using namespace Example;

void release_Car(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<Example::Car>*>(cself);
}

void* _Nonnull create_Car(int cost){
    
    auto this_object = new Example::Car(cost);
    return new std::shared_ptr<Example::Car>(this_object);
}

int _prop_get_Car_cost(void* _Nonnull cself){
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = std::dynamic_pointer_cast<Example::Car>(*static_cast<std::shared_ptr<Example::Car>*>(cself));
    auto result = c_to_cxx_cself->cost();
    
    return result;
}

void _func_Car_setCostWithCarSharedPtr(void* _Nonnull cself, void* _Nonnull sp, ErrorObj* _Nonnull err){
    
    std::shared_ptr<Example::Car> c_to_cxx_sp;
    c_to_cxx_sp = std::dynamic_pointer_cast<Example::Car>(*static_cast<std::shared_ptr<Example::Car>*>(sp));
  
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = std::dynamic_pointer_cast<Example::Car>(*static_cast<std::shared_ptr<Example::Car>*>(cself));
    try {
        c_to_cxx_cself->setCostWithCarSharedPtr(c_to_cxx_sp);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void* _Nonnull _func_Car_getNewCarSharedPtr(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = std::dynamic_pointer_cast<Example::Car>(*static_cast<std::shared_ptr<Example::Car>*>(cself));
    try {
        const auto& result = c_to_cxx_cself->getNewCarSharedPtr();
        
        void* cxx_to_c_result;
        cxx_to_c_result = reinterpret_cast<void*>(new std::shared_ptr<Example::Car>(std::static_pointer_cast<Example::Car>(result)));
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result;
    return result;
}