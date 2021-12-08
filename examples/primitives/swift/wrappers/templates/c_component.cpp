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
#include "swift/wrappers/templates/c_component.h"
#include "cxx/templates/component.hpp"
#include "cxx/templates/addressable.hpp"
#include "cxx/simple/root.hpp"

using namespace iegen::example;

void release_Component(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>*>(cself);
}

void* _Nonnull create_Component(void* _Nonnull parent, char* _Nonnull name, ErrorObj* _Nonnull err){
    
    auto& ctocxxparent = *static_cast<iegen::example::Root*>(parent);
    auto ctocxxname = std::string(name);
    free(name);
    try {
        auto this_object = new iegen::example::Component(ctocxxparent, ctocxxname);
        return new std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>(this_object);
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