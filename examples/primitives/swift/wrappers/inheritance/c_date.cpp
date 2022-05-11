/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 05/05/2022-13:29.
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
#include "cxx/inheritance/datetime.hpp"

extern const char* IEGEN_IEGEN_EXAMPLE_DATETIME;
extern const char* IEGEN_STD_STDEXCEPTION;

const char* IEGEN_IEGEN_EXAMPLE_MYDATE = "iegen::example::Date";

using namespace iegen::example;

void release_IegenExample_MyDate(IEGenCObject cself, bool owner) {
    if (owner) {
        if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_MYDATE) == 0)
            delete static_cast<std::shared_ptr<iegen::example::Date>*>(cself.ptr);
        else if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_DATETIME) == 0)
            delete static_cast<std::shared_ptr<iegen::example::DateTime>*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

std::shared_ptr<iegen::example::Date> recover_obj_from_IegenExample_MyDate(IEGenCObject iegenObj) {
    if (iegenObj.ptr) {
        if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_MYDATE) == 0)
            return *static_cast<std::shared_ptr<iegen::example::Date>*>(iegenObj.ptr);
        else if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_DATETIME) == 0)
            return *static_cast<std::shared_ptr<iegen::example::DateTime>*>(iegenObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << iegenObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

IEGenCObject create_IegenExample_MyDate(int d, int m, int y, IEGenCObject* _Nonnull iegen_err) {
    try {
        auto this_object = new iegen::example::Date(d, m, y);
        return {strdup(IEGEN_IEGEN_EXAMPLE_MYDATE), new std::shared_ptr<iegen::example::Date>(this_object)};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_IegenExample_MyDate_value(IEGenCObject cself, IEGenCObject* _Nonnull iegen_err) {
    std::shared_ptr<iegen::example::Date> ctocxxcself;
    ctocxxcself = recover_obj_from_IegenExample_MyDate(cself);
    try {
        const auto& result = ctocxxcself->value();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _prop_get_IegenExample_MyDate_date(IEGenCObject cself, IEGenCObject* _Nonnull iegen_err) {
    std::shared_ptr<iegen::example::Date> ctocxxcself;
    ctocxxcself = recover_obj_from_IegenExample_MyDate(cself);
    try {
        const auto& result = ctocxxcself->date();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

