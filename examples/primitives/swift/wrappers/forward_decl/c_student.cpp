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
#include "swift/wrappers/forward_decl/c_student.h"
#include "cxx/forward_decl/student.hpp"
#include "cxx/forward_decl/teacher.hpp"

using namespace iegen::example;

void release_Student(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    }
}

CObject create_Student(char* _Nonnull st_name, ErrorObj* _Nonnull err){
    auto ctocxxst_name = std::string(st_name);
    free(st_name);
    try {
        auto this_object = new iegen::example::Student(ctocxxst_name);
        return {strdup("iegen::example::Student"), new std::shared_ptr<iegen::example::Student>(this_object)};
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

CObject create_Student_1(CDataArray teachers, ErrorObj* _Nonnull err){
    std::vector<Teacher *> ctocxxteachers;

    auto data_teachers = reinterpret_cast<CObject*>(teachers.data);

    for (size_t _i_teachers = 0; _i_teachers < teachers.size; ++_i_teachers) {
        auto& value_teachers = data_teachers[_i_teachers];
        
        auto ctocxxvalue_teachers = static_cast<iegen::example::Teacher*>(value_teachers.ptr);
        ctocxxteachers.emplace_back(ctocxxvalue_teachers);
    }
    try {
        auto this_object = new iegen::example::Student(ctocxxteachers);
        return {strdup("iegen::example::Student"), new std::shared_ptr<iegen::example::Student>(this_object)};
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

void _func_Student_addTeacher(CObject cself, CObject t, ErrorObj* _Nonnull err){
    
    auto ctocxxt = static_cast<iegen::example::Teacher*>(t.ptr);
  
    
    std::shared_ptr<iegen::example::Student> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    try {
        ctocxxcself->addTeacher(ctocxxt);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CDataArray _func_Student_teachers(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Student> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->teachers();
        auto _data_cxxtocresult = new CObject [result.size()];
        CDataArray cxxtocresult = { _data_cxxtocresult, (long long)result.size() };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            char* type_value_result = strdup("iegen::example::Teacher");
            auto value_ptr_value_result = const_cast<iegen::example::Teacher*>(value_result);
            CObject cxxtocvalue_result = {type_value_result, value_ptr_value_result};
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataArray result{};
    return result;
}
char* _Nonnull _prop_get_Student_name(CObject cself){
    std::shared_ptr<iegen::example::Student> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    const auto& result = ctocxxcself->name;
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}
void _prop_set_Student_name(CObject cself, char* _Nonnull name){
    
    std::shared_ptr<iegen::example::Student> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    auto ctocxxname = std::string(name);
    free(name);
    ctocxxcself->name = ctocxxname;
}

