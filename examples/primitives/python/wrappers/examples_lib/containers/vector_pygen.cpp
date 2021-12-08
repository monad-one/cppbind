/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:30.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/containers/vector.hpp"

namespace py = pybind11;

void bindIegenExampleVectorItem(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::VectorItem> vectorItem(m, "VectorItem");

    vectorItem.def_readwrite("value", &iegen::example::VectorItem::value);

    vectorItem.def(py::init<int>(), py::arg("_value"));
}
void bindIegenExampleVectorExamples(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::VectorExamples> vectorExamples(m, "VectorExamples");

    vectorExamples.def(py::init<>());
    vectorExamples.def("add_int_vector", &iegen::example::VectorExamples::addIntVector, py::arg("v"));
    vectorExamples.def("add_obj_vector", &iegen::example::VectorExamples::addObjVector, py::arg("v"));
    vectorExamples.def("add_string_vector", &iegen::example::VectorExamples::addStringVector, py::arg("v"));
    vectorExamples.def("get_string_vector", &iegen::example::VectorExamples::getStringVector);
    vectorExamples.def("get_obj_vector", &iegen::example::VectorExamples::getObjVector);
    vectorExamples.def("get_int_vector", &iegen::example::VectorExamples::getIntVector);
}