#ifndef containers_vector_hpp
#define containers_vector_hpp

#include <pybind11/pybind11.h>

namespace py = pybind11;

void bindVectorItem(py::module& m);
void bindVectorExamples(py::module& m);

#endif