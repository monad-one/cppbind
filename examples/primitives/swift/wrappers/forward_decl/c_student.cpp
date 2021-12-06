/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/05/2021-13:00.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/forward_decl/c_student.h"
#include "cxx/forward_decl/student.hpp"
#include "cxx/forward_decl/teacher.hpp"

using namespace iegen::example;

void release_Student(CObject cself) {
    delete static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
}

CObject create_Student(char* _Nonnull st_name){
    auto c_to_cxx_st_name = std::string(st_name);
    free(st_name);
    auto this_object = new iegen::example::Student(c_to_cxx_st_name);
    return {strdup("iegen::example::Student"), new std::shared_ptr<iegen::example::Student>(this_object)};
}

CObject create_Student_1(CDataArray teachers){
    std::vector<Teacher *> c_to_cxx_teachers;

    auto data_teachers = reinterpret_cast<CObject*>(teachers.data);

    for (size_t _i_teachers = 0; _i_teachers < teachers.size; ++_i_teachers) {
        auto& value_teachers = data_teachers[_i_teachers];
        
        auto c_to_cxx_value_teachers = static_cast<iegen::example::Teacher*>(value_teachers.ptr);
        c_to_cxx_teachers.emplace_back(c_to_cxx_value_teachers);
    }
    auto this_object = new iegen::example::Student(c_to_cxx_teachers);
    return {strdup("iegen::example::Student"), new std::shared_ptr<iegen::example::Student>(this_object)};
}

void _func_Student_addTeacher(CObject cself, CObject t, ErrorObj* _Nonnull err){
    
    auto c_to_cxx_t = static_cast<iegen::example::Teacher*>(t.ptr);
  
    
    std::shared_ptr<iegen::example::Student> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    try {
        c_to_cxx_cself->addTeacher(c_to_cxx_t);
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
    
    std::shared_ptr<iegen::example::Student> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    try {
        const auto& result = c_to_cxx_cself->teachers();
        auto _data_cxx_to_c_result = new CObject [result.size()];
        CDataArray cxx_to_c_result = { _data_cxx_to_c_result, (long long)result.size() };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            char* type_value_result = strdup("iegen::example::Teacher");
            CObject cxx_to_c_value_result = {type_value_result, const_cast<iegen::example::Teacher*>(value_result)};
            _data_cxx_to_c_result[_i_result] = cxx_to_c_value_result;
        }
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataArray result;
    return result;
}
char* _Nonnull _prop_get_Student_name(CObject cself){
    std::shared_ptr<iegen::example::Student> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    const auto& result = c_to_cxx_cself->name;
    auto cxx_to_c_result = strdup(result.data());
    return cxx_to_c_result;
}
void _prop_set_Student_name(CObject cself, char* _Nonnull name){
    
    std::shared_ptr<iegen::example::Student> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<iegen::example::Student>*>(cself.ptr);
    auto c_to_cxx_name = std::string(name);
    free(name);
    c_to_cxx_cself->name = c_to_cxx_name;
}
