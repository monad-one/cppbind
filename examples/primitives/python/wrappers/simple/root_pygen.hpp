#ifndef simple_root_hpp
#define simple_root_hpp

#include <pybind11/pybind11.h>

namespace py = pybind11;

void bindRoot(py::module& m);

#endif