/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/02/2021-08:02.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/extra/object_usage.hpp"
#include "cxx/extra/object.hpp"

namespace py = pybind11;

void bindIegenObjectUsage(py::module& m) {
    using namespace iegen;
    py::class_<iegen::ObjectUsage, std::shared_ptr<iegen::ObjectUsage>, iegen::Object> objectusage(m, "ObjectUsage");

    objectusage.def(py::init<>());
}