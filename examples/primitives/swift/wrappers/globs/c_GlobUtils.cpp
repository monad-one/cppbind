/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/02/2022-11:11.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/globs/c_GlobUtils.h"
#include "cxx/globs/utils.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/root.hpp"
#include "cxx/enums/color.hpp"



char* _Nonnull _func__concat(char* _Nonnull str1, char* _Nonnull str2, IEGenCErrorObj* _Nonnull err) {
    auto ctocxxstr1 = std::string(str1);
    free(str1);
    auto ctocxxstr2 = std::string(str2);
    free(str2);
    try {
        const auto& result = ::concat(ctocxxstr1, ctocxxstr2);
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
    char* result {};
    return result;
}

char* _Nonnull _func__concat_1(char* _Nonnull str1, char* _Nonnull str2, char* _Nonnull str3, IEGenCErrorObj* _Nonnull err) {
    auto ctocxxstr1 = std::string(str1);
    free(str1);
    auto ctocxxstr2 = std::string(str2);
    free(str2);
    auto ctocxxstr3 = std::string(str3);
    free(str3);
    try {
        const auto& result = ::concat(ctocxxstr1, ctocxxstr2, ctocxxstr3);
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
    char* result {};
    return result;
}

int _func__maxInt(int arg0, int arg1, IEGenCErrorObj* _Nonnull err) {
    
    
    try {
        const auto& result = ::max<int>(arg0, arg1);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result {};
    return result;
}

char* _Nonnull _func__maxString(char* _Nonnull arg0, char* _Nonnull arg1, IEGenCErrorObj* _Nonnull err) {
    auto ctocxxarg0 = std::string(arg0);
    free(arg0);
    auto ctocxxarg1 = std::string(arg1);
    free(arg1);
    try {
        const auto& result = ::max<std::string>(ctocxxarg0, ctocxxarg1);
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
    char* result {};
    return result;
}

IEGenCDataPair _func_IegenExample_makePairProjectProject(IEGenCObject arg0, IEGenCObject arg1, IEGenCErrorObj* _Nonnull err) {
    
    auto ctocxxarg0 = static_cast<iegen::example::Project*>(arg0.ptr);
    
    auto ctocxxarg1 = static_cast<iegen::example::Project*>(arg1.ptr);
    try {
        const auto& result = iegen::example::makePair<iegen::example::Project, iegen::example::Project>(ctocxxarg0, ctocxxarg1);
        auto _first_data_cxxtocresult = new IEGenCObject;
        auto _second_data_cxxtocresult = new IEGenCObject;
        const auto& first_result = result.first;
        const auto& second_result = result.second;

        char* type_first_result = strdup("iegen::example::Project");
        auto value_ptr_first_result = const_cast<iegen::example::Project*>(first_result);
        IEGenCObject cxxtocfirst_result = {type_first_result, value_ptr_first_result};

        char* type_second_result = strdup("iegen::example::Project");
        auto value_ptr_second_result = const_cast<iegen::example::Project*>(second_result);
        IEGenCObject cxxtocsecond_result = {type_second_result, value_ptr_second_result};
        *_first_data_cxxtocresult = cxxtocfirst_result;
        *_second_data_cxxtocresult = cxxtocsecond_result;
        IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataPair result {};
    return result;
}

IEGenCDataPair _func_IegenExample_makePairRootProject(IEGenCObject arg0, IEGenCObject arg1, IEGenCErrorObj* _Nonnull err) {
    
    auto ctocxxarg0 = static_cast<iegen::example::Root*>(arg0.ptr);
    
    auto ctocxxarg1 = static_cast<iegen::example::Project*>(arg1.ptr);
    try {
        const auto& result = iegen::example::makePair<iegen::example::Root, iegen::example::Project>(ctocxxarg0, ctocxxarg1);
        auto _first_data_cxxtocresult = new IEGenCObject;
        auto _second_data_cxxtocresult = new IEGenCObject;
        const auto& first_result = result.first;
        const auto& second_result = result.second;

        char* type_first_result = strdup("iegen::example::Root");
        auto value_ptr_first_result = const_cast<iegen::example::Root*>(first_result);
        IEGenCObject cxxtocfirst_result = {type_first_result, value_ptr_first_result};

        char* type_second_result = strdup("iegen::example::Project");
        auto value_ptr_second_result = const_cast<iegen::example::Project*>(second_result);
        IEGenCObject cxxtocsecond_result = {type_second_result, value_ptr_second_result};
        *_first_data_cxxtocresult = cxxtocfirst_result;
        *_second_data_cxxtocresult = cxxtocsecond_result;
        IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataPair result {};
    return result;
}

unsigned int _func__optionalColor(unsigned int c, IEGenCErrorObj* _Nonnull err) {
    auto ctocxxc = static_cast<iegen::example::Color>(c);
    try {
        const auto& result = ::optionalColor(ctocxxc);
        unsigned int cxxtocresult = static_cast<unsigned int>(result);
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    unsigned int result {};
    return result;
}

IEGenCObject _func__optionalFDPtr(IEGenCObject project, IEGenCErrorObj* _Nonnull err) {
    
    auto ctocxxproject = static_cast<iegen::example::Project*>(project.ptr);
    try {
        const auto& result = ::optionalFDPtr(ctocxxproject);
        
        char* type_result = strdup("iegen::example::Project");
        auto value_ptr_result = const_cast<iegen::example::Project*>(result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCObject result {};
    return result;
}

void _func__doNothing(IEGenCErrorObj* _Nonnull err) {
    try {
        doNothing();
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

int _func__optionalInt(int i, IEGenCErrorObj* _Nonnull err) {
    
    try {
        const auto& result = ::optionalInt(i);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result {};
    return result;
}
