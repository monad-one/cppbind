/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/07/2022-18:26.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/globs/utils.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/root.hpp"
#include "cxx/enums/color.hpp"

namespace py = pybind11;

void bindExamplesLibGlobsUtils(py::module& m) {
    
    m.def("concat", py::overload_cast<const std::string &, const std::string &>(&::concat), py::arg("str1"), py::arg("str2"), py::return_value_policy::automatic);

    m.def("concat1", py::overload_cast<const std::string &, const std::string &, const std::string &>(&::concat), py::arg("str1"), py::arg("str2"), py::arg("str3"), py::return_value_policy::automatic);

    m.def("max_int", &::max<int>, py::arg("arg0"), py::arg("arg1"), py::return_value_policy::automatic);

    m.def("max_str", &::max<std::string>, py::arg("arg0"), py::arg("arg1"), py::return_value_policy::automatic);

    m.def("make_pair_project_project", &iegen::example::makePair<iegen::example::Project, iegen::example::Project>, py::arg("arg0"), py::arg("arg1"), py::return_value_policy::reference);

    m.def("make_pair_root_project", &iegen::example::makePair<iegen::example::Root, iegen::example::Project>, py::arg("arg0"), py::arg("arg1"), py::return_value_policy::reference);

    m.def("optional_color", &::optionalColor, py::arg("c") = iegen::example::Color::Red, py::return_value_policy::automatic);

    m.def("optional_f_d_ptr", &::optionalFDPtr, py::arg("project") = nullptr, py::return_value_policy::reference);

    m.def("do_nothing", &::doNothing, py::return_value_policy::automatic);

    m.def("optional_int", &::optionalInt, py::arg("i") = 5, py::return_value_policy::automatic);
} /* bindExamplesLibGlobsUtils */
