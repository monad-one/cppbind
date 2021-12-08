/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-16:12.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/hello/c_user.h"
#include "cxx/user.hpp"


void release_UserInfo(void* _Nonnull cself) {
    delete static_cast<UserInfo*>(cself);
}

void* _Nonnull create_UserInfo(char* _Nonnull user_name, unsigned int user_age, ErrorObj* _Nonnull err){
    auto ctocxxuser_name = std::string(user_name);
    free(user_name);
    
    try {
        auto this_object = new UserInfo(ctocxxuser_name, user_age);
        return this_object;
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
unsigned int _prop_get_UserInfo_age(void* _Nonnull cself){
    auto ctocxxcself = static_cast<UserInfo*>(cself);
    const auto& result = ctocxxcself->age;
    
    return result;
}
char* _Nonnull _prop_get_UserInfo_name(void* _Nonnull cself){
    auto ctocxxcself = static_cast<UserInfo*>(cself);
    const auto& result = ctocxxcself->name;
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}
bool _prop_get_UserInfo_want_a_drink(void* _Nonnull cself){
    auto ctocxxcself = static_cast<UserInfo*>(cself);
    const auto& result = ctocxxcself->want_a_drink;
    
    return result;
}
void _prop_set_UserInfo_want_a_drink(void* _Nonnull cself, bool want_a_drink){
    
    auto ctocxxcself = static_cast<UserInfo*>(cself);
    
    ctocxxcself->want_a_drink = want_a_drink;
}
