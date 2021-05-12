
#include <pybind11/pybind11.h>
#include "python/wrappers/examples_pygen.hpp"

namespace py = pybind11;
PYBIND11_MODULE(examples, m) {
    py::module_ parent = m;
    bindExamples(parent);
}