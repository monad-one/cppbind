#ifndef simple_project_hpp
#define simple_project_hpp

#include <pybind11/pybind11.h>

namespace py = pybind11;

void bindProject(py::module& m);

#endif