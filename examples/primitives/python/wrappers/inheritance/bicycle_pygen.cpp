/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/02/2021-09:03.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/vehicle.hpp"

namespace py = pybind11;

void bindIegenExampleBicycle(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Bicycle,iegen::example::Vehicle> bicycle(m, "Bicycle");

    bicycle.def(py::init<int>(), py::arg("number_of_seats"));
}