/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/09/2022-13:05.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/exceptions/c_swift_custom_std_exceptions.h"
#include "cxx/exceptions/exceptions.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_SYSTEMERROR = "cppbind::example::SystemError";
const char* CPPBIND_CPPBIND_EXAMPLE_FILEERROR = "cppbind::example::FileError";

using namespace cppbind::example;

cppbind::example::SystemError* recover_obj_from_CppbindExample_SystemError(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_SYSTEMERROR) == 0)
            return static_cast<cppbind::example::SystemError*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_FILEERROR) == 0)
            return static_cast<cppbind::example::FileError*>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

CppBindCObject create_CppbindExample_SystemError(char* _Nonnull message, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxmessage = std::string(message);
    free(message);
    try {
        auto this_object = new cppbind::example::SystemError(ctocxxmessage);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_SYSTEMERROR), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

const char * _Nonnull _func_CppbindExample_SystemError_what(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    cppbind::example::SystemError* ctocxxcself = recover_obj_from_CppbindExample_SystemError(cself);
    try {
        const auto& result = ctocxxcself->what();
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    const char * result {};
    return result;
}

CppBindCObject create_CppbindExample_FileError(char* _Nonnull message, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxmessage = std::string(message);
    free(message);
    try {
        auto this_object = new cppbind::example::FileError(ctocxxmessage);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_FILEERROR), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

const char * _Nonnull _func_CppbindExample_FileError_what(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxcself = static_cast<cppbind::example::FileError*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->what();
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    const char * result {};
    return result;
}
