/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 06/17/2021-10:23.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/getters/number.hpp"

namespace py = pybind11;

void bindNumberint(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Number<int>, std::shared_ptr<iegen::example::Number<int>>> numberInt(m, "Numberint");

    numberInt.def(py::init<const int &>(), py::arg("n"));
    numberInt.def("__int__", &iegen::example::Number<int>::toInt);

    numberInt.def_readwrite("num", &iegen::example::Number<int>::num);
}
void bindNumberfloat(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Number<double>, std::shared_ptr<iegen::example::Number<double>>> numberFloat(m, "Numberfloat");

    numberFloat.def(py::init<const double &>(), py::arg("n"));
    numberFloat.def("__int__", &iegen::example::Number<double>::toInt);

    numberFloat.def_readwrite("num", &iegen::example::Number<double>::num);
}