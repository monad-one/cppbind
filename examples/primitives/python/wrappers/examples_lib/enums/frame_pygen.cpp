/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/07/2022-18:26.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/enums/frame.hpp"
#include "cxx/enums/color.hpp"

namespace py = pybind11;

void bindExamplesLibEnumsFrame(py::module& m) {
    {
        using namespace iegen::example;
        py::class_<iegen::example::Frame> frame(m, "Frame");
        
        frame.def(py::init<>());
        frame.def_readwrite("background_color", &iegen::example::Frame::backgroundColor, py::return_value_policy::reference_internal);
        frame.def_readwrite("background_color_shade", &iegen::example::Frame::backgroundColorShade, py::return_value_policy::reference_internal);
    }
} /* bindExamplesLibEnumsFrame */
