/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/29/2021-14:29.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/simple/root.hpp"

namespace py = pybind11;

void bindIegenExampleRoot(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Root> root(m, "Root");

    root.def(py::init<const std::string &>(), py::arg("_path"));
    root.def("set_path", &iegen::example::Root::setPath, py::arg("_path"));

    root.def_readwrite("path", &iegen::example::Root::path);
}