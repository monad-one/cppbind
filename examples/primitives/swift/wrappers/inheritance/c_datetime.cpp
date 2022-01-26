/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/26/2022-08:15.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/inheritance/c_datetime.h"
#include "cxx/inheritance/time.hpp"
#include "cxx/inheritance/base.hpp"
#include "cxx/inheritance/datetime.hpp"
#include "cxx/inheritance/date.hpp"

using namespace iegen::example;

void release_TimeImpl(CObject cself, bool owner){
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Time>*>(cself.ptr);
    }
}

CObject create_Time(int h, int m, int s, ErrorObj* _Nonnull err){
    
    
    
    try {
        auto this_object = new iegen::example::Time(h, m, s);
        return {strdup("iegen::example::Time"), new std::shared_ptr<iegen::example::Time>(this_object)};
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

char* _Nonnull _func_Time_value(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Time> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::Time") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Time>*>(cself.ptr);
    else if (strcmp(cself.type, "iegen::example::DateTime") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::DateTime>*>(cself.ptr);
    else {
        std::cerr << "Unexpected object type: " << cself.type << std::endl;
        exit(1);
    }
    try {
        const auto& result = ctocxxcself->value();
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

char* _Nonnull _prop_get_Time_time(CObject cself){
    std::shared_ptr<iegen::example::Time> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::Time") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Time>*>(cself.ptr);
    else if (strcmp(cself.type, "iegen::example::DateTime") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::DateTime>*>(cself.ptr);
    else {
        std::cerr << "Unexpected object type: " << cself.type << std::endl;
        exit(1);
    }
    const auto& result = ctocxxcself->time();
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}
void release_DateTime(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::DateTime>*>(cself.ptr);
    }
}

CObject create_DateTime(int d, int mo, int y, int h, int mi, int s, ErrorObj* _Nonnull err){
    
    
    
    
    
    
    try {
        auto this_object = new iegen::example::DateTime(d, mo, y, h, mi, s);
        return {strdup("iegen::example::DateTime"), new std::shared_ptr<iegen::example::DateTime>(this_object)};
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

char* _Nonnull _func_DateTime_value(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::DateTime> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::DateTime") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::DateTime>*>(cself.ptr);
    else {
        std::cerr << "Unexpected object type: " << cself.type << std::endl;
        exit(1);
    }
    try {
        const auto& result = ctocxxcself->value();
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

char* _Nonnull _prop_get_DateTime_datetime(CObject cself){
    std::shared_ptr<iegen::example::DateTime> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::DateTime") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::DateTime>*>(cself.ptr);
    else {
        std::cerr << "Unexpected object type: " << cself.type << std::endl;
        exit(1);
    }
    const auto& result = ctocxxcself->datetime();
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}
