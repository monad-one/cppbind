/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/20/2022-10:46.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/inheritance/car.hpp"

namespace py = pybind11;

void bindIegenExampleMyCar(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::MyCar, std::shared_ptr<iegen::example::MyCar>> myCar(m, "MyCar");

    myCar.def(py::init<int>(), py::arg("number_of_seats"));
    myCar.def("type", &iegen::example::MyCar::type, py::return_value_policy::automatic);
}
