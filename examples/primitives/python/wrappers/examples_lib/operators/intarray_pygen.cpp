/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/23/2021-14:18.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/operators/intarray.hpp"

namespace py = pybind11;

void bindIegenExampleIntArray(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::IntArray> intArray(m, "IntArray");

    intArray.def(py::init<>());
    intArray.def("__getitem__", py::overload_cast<int>(&iegen::example::IntArray::operator[]), py::arg("i"));
    intArray.def("__setitem__", [](iegen::example::IntArray& self, int i, int v){self[i] = v;});
    intArray.def("__getitem__", py::overload_cast<std::string>(&iegen::example::IntArray::operator[]), py::arg("i"));
    intArray.def("__getitem__", py::overload_cast<double>(&iegen::example::IntArray::operator[]), py::arg("i"));
}
