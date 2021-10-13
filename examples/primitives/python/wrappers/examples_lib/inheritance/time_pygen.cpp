/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/13/2021-14:43.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/inheritance/time.hpp"
#include "cxx/inheritance/base.hpp"

namespace py = pybind11;

void bindIegenExampleTime(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Time, std::shared_ptr<iegen::example::Time>, iegen::example::Base> time(m, "Time");

    time.def(py::init<int, int, int>(), py::arg("h"), py::arg("m"), py::arg("s"));


    time.def_property_readonly("time", &iegen::example::Time::time);
}