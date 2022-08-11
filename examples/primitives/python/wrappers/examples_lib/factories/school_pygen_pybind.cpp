/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 07/15/2022-14:09.
 * Please do not change it manually.
 */

#include <cxxabi.h>
#include <memory>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/factories/school.h"
#include "cxx/forward_decl/teacher.hpp"

namespace py = pybind11;

void bindExamplesLibFactoriesSchoolPygen(py::module& m) {
    {
        using namespace cppbind::example;
        py::class_<cppbind::example::School, std::shared_ptr<cppbind::example::School>> school(m, "School");
        
        school.def(py::init(py::overload_cast<const std::vector<Teacher *> &>(&cppbind::example::School::create)), py::arg("teachers"), py::keep_alive<1, 2>());

        school.def(py::init(py::overload_cast<>(&cppbind::example::School::create)));
        school.def("add_teacher", &cppbind::example::School::addTeacher, py::arg("teacher"), py::keep_alive<1, 2>());

        school.def_property_readonly("teachers", &cppbind::example::School::teachers, py::return_value_policy::reference_internal);
        school.def("__repr__", [](const cppbind::example::School& self) -> std::string {
            int status;
            const char* name = typeid(self).name();
            std::unique_ptr<char[], std::function<void(char*)>> demangledSymbol(
                __cxxabiv1::__cxa_demangle(name, nullptr, nullptr, &status), free);
            const char * classname = "cppbind::example::School";
            if (status == 0) {
                classname = demangledSymbol.get();
            }
            char res[96];
            snprintf(res, sizeof(res), "<0x%08zx: %s>", reinterpret_cast<std::size_t>(&self), classname);
            return res;
        });  
    }
} /* bindExamplesLibFactoriesSchoolPygen */