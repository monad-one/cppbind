/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/30/2021-13:37.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/extra/object.hpp"

namespace py = pybind11;

void bindIegenObject(py::module& m) {
    using namespace iegen;
    py::class_<iegen::Object, std::shared_ptr<iegen::Object>> object(m, "Object");
object.def("__str__", &iegen::Object::toReprString);
    object.def("__repr__", &iegen::Object::toString);
    object.def("class_name", &iegen::Object::className);
    object.def("__eq__", py::overload_cast<std::shared_ptr<Object>>(&iegen::Object::equals, py::const_), py::arg("other"));
    object.def("__hash__", &iegen::Object::hash);
    object.def("debug_info", &iegen::Object::debugInfo);
    object.def("bytes_count", &iegen::Object::bytesCount);
}