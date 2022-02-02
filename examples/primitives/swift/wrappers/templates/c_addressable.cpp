/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/02/2022-10:55.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/templates/c_addressable.h"
#include "cxx/templates/addressable.hpp"
#include "cxx/simple/root.hpp"
#include "cxx/templates/component.hpp"

using namespace iegen::example;

void release_AddressableImplRoot(CObject cself, bool owner){
    static_assert(std::has_virtual_destructor<iegen::example::Addressable<iegen::example::Root>>::value, "iegen::example::Addressable<iegen::example::Root> type must have virtual destructor");
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>*>(cself.ptr);
    }
}

CObject create_AddressableRoot(CObject parent, char* _Nonnull name, ErrorObj* _Nonnull err){
    
    auto& ctocxxparent = *static_cast<iegen::example::Root*>(parent.ptr);
    auto ctocxxname = std::string(name);
    free(name);
    try {
        auto this_object = new iegen::example::Addressable<iegen::example::Root>(ctocxxparent, ctocxxname);
        return {strdup("iegen::example::Addressable<iegen::example::Root>"), new std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

char* _Nonnull _func_AddressableRoot_absPath(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Addressable<iegen::example::Root>> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::Addressable<iegen::example::Root>") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>*>(cself.ptr);
    else if (strcmp(cself.type, "iegen::example::Component") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Component>*>(cself.ptr);
    else {
        std::cerr << "Unexpected object type: " << cself.type << std::endl;
        exit(1);
    }
    try {
        const auto& result = ctocxxcself->absPath();
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
    char* result{};
    return result;
}
