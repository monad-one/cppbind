/*
 * This file was generated by iegen on 06/09/2021-11:41.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/containers/vector.hpp"

namespace py = pybind11;

void bindVectorItem(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::VectorItem> vectoritem(m, "VectorItem");

    vectoritem.def_readwrite("value", &iegen::example::VectorItem::value);

    vectoritem.def(py::init<int>(), py::arg("_value"));
}
void bindVectorExamples(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::VectorExamples> vectorexamples(m, "VectorExamples");

    vectorexamples.def(py::init<>());
    vectorexamples.def("add_int_vector", &iegen::example::VectorExamples::addIntVector, py::arg("v"));
    vectorexamples.def("add_obj_vector", &iegen::example::VectorExamples::addObjVector, py::arg("v"));
    vectorexamples.def("add_string_vector", &iegen::example::VectorExamples::addStringVector, py::arg("v"));
    vectorexamples.def("get_string_vector", &iegen::example::VectorExamples::getStringVector);
    vectorexamples.def("get_obj_vector", &iegen::example::VectorExamples::getObjVector);
    vectorexamples.def("get_int_vector", &iegen::example::VectorExamples::getIntVector);
}