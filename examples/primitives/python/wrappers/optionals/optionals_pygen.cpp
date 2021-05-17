#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/optionals/optionals.hpp"

namespace py = pybind11;

void bindOptionals(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Optionals> optionals(m, "Optionals");

    optionals.def(py::init<>());
    optionals.def("optional_ptr_with_nullptr_default", &iegen::example::Optionals::optionalPtrWithNullptrDefault, py::arg("task"));
    optionals.def("optional_int_with_default", &iegen::example::Optionals::optionalIntWithDefault, py::arg("val"));
    optionals.def("optional_string_with_default", &iegen::example::Optionals::optionalStringWithDefault, py::arg("val"));
    optionals.def("optional_char_with_default", &iegen::example::Optionals::optionalCharWithDefault, py::arg("symbol"));
    optionals.def("optional_ptr_with_null_default", &iegen::example::Optionals::optionalPtrWithNullDefault, py::arg("task"));
    optionals.def("optional_enum_with_default", &iegen::example::Optionals::optionalEnumWithDefault, py::arg("c"));
}