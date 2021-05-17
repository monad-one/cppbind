#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/forward_decl/teacher.hpp"
#include "cxx/forward_decl/student.hpp"

namespace py = pybind11;

void bindTeacher(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Teacher> teacher(m, "Teacher");

    teacher.def(py::init<>());
    teacher.def("add_student", &iegen::example::Teacher::addStudent, py::arg("s"));
    teacher.def("students", &iegen::example::Teacher::students);
}