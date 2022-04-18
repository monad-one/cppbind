/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/12/2022-06:07.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/templates/addressable.hpp"
#include "cxx/simple/root.hpp"

namespace py = pybind11;

void bindExamplesLibTemplatesAddressablePygen(py::module& m) {
    {
        using namespace iegen::example;
        py::class_<iegen::example::Addressable<iegen::example::Root>, std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>> addressableRoot(m, "AddressableRoot");
        
        addressableRoot.def(py::init<const iegen::example::Root &, const std::string &>(), py::arg("parent"), py::arg("name"));
        addressableRoot.def("abs_path", &iegen::example::Addressable<iegen::example::Root>::absPath, py::return_value_policy::automatic);
    }
} /* bindExamplesLibTemplatesAddressablePygen */
