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

#include "cxx/enums/color.hpp"

namespace py = pybind11;

void bindColor(py::module& m) {
    py::enum_<iegen::example::Color>(m, "Color")
        .value("Red", iegen::example::Color::Red)
        .value("Green", iegen::example::Color::Green)
        .value("Blue", iegen::example::Color::Blue)
        .export_values();
}