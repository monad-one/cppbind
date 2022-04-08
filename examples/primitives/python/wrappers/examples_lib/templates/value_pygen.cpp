/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/07/2022-13:43.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/templates/value.hpp"

namespace py = pybind11;

void bindExamplesLibTemplatesValue(py::module& m) {
    {
        using namespace iegen::example;
        py::class_<iegen::example::TemplateValue> templateValue(m, "TemplateValue");
        
        templateValue.def(py::init<int>(), py::arg("value"));

        templateValue.def(py::init<std::string>(), py::arg("value"));
        templateValue.def("add_value", &iegen::example::TemplateValue::add_value<int>, py::arg("other"), py::return_value_policy::automatic);
        templateValue.def("add_value", &iegen::example::TemplateValue::add_value<std::string>, py::arg("other"), py::return_value_policy::automatic);
    }
} /* bindExamplesLibTemplatesValue */
