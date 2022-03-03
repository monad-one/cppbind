/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/03/2022-15:44.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/inheritance/c_date.h"
#include "cxx/inheritance/date.hpp"
#include "cxx/inheritance/base.hpp"
#include "cxx/inheritance/datetime.hpp"

using namespace iegen::example;

void release_MyDate(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Date>*>(cself.ptr);
    }
}

IEGenCObject create_MyDate(int d, int m, int y, IEGenCObject* _Nonnull err){
    
    
    
    try {
        auto this_object = new iegen::example::Date(d, m, y);
        return {strdup("iegen::example::Date"), new std::shared_ptr<iegen::example::Date>(this_object)};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_MyDate_value(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    std::shared_ptr<iegen::example::Date> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::Date") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Date>*>(cself.ptr);
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
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}
char* _Nonnull _prop_get_MyDate_date(IEGenCObject cself, IEGenCObject* _Nonnull err){
    std::shared_ptr<iegen::example::Date> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::Date") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Date>*>(cself.ptr);
    else if (strcmp(cself.type, "iegen::example::DateTime") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::DateTime>*>(cself.ptr);
    else {
        std::cerr << "Unexpected object type: " << cself.type << std::endl;
        exit(1);
    }
    try {
        const auto& result = ctocxxcself->date();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}
