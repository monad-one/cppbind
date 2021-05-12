#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/operators/counter.hpp"

namespace py = pybind11;

void bindCounter(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Counter> counter(m, "Counter");

    counter.def(py::init<int>(), py::arg("count"));


    counter.def_property_readonly("count", &iegen::example::Counter::count);
    counter.def("__add__", &iegen::example::Counter::operator+, py::arg("counter"));
    counter.def("compare_to", &iegen::example::Counter::compareTo, py::arg("counter"));
    counter.def("__gt__", &iegen::example::Counter::operator>, py::arg("counter"));
    counter.def("__iadd__", &iegen::example::Counter::operator+=, py::arg("counter"));
}