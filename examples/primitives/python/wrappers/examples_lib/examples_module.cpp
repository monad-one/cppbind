/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/21/2021-09:31.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include "python/wrappers/examples_lib/examples_pygen.hpp"

namespace py = pybind11;
PYBIND11_MODULE(examples, m) {
    py::module_ parent = m;
    bindExamples(parent);
}
