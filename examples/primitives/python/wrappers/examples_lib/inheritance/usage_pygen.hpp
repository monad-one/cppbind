/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:30.
 * Please do not change it manually.
 */

#ifndef inheritance_usage_hpp
#define inheritance_usage_hpp

#include <pybind11/pybind11.h>

namespace py = pybind11;

void bindIegenExampleGeometricFigure(py::module& m);
void bindIegenExampleMyVehicle(py::module& m);
void bindIegenExampleMyBicycle(py::module& m);

#endif