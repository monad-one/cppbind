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

#include "cxx/functionals/functional_example.hpp"

namespace py = pybind11;

void bindIegenExampleFunctionalExamples(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::FunctionalExamples, std::shared_ptr<iegen::example::FunctionalExamples>> functionalexamples(m, "FunctionalExamples");

    functionalexamples.def(py::init<>());
    functionalexamples.def_static("gen_func_to_increment_result", &iegen::example::FunctionalExamples::genFuncToIncrementResult, py::arg("f"));
}