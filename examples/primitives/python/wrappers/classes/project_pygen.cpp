#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/classes/project.hpp"

namespace py = pybind11;

void bindProject(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Project> project(m, "Project");

    project.def(py::init<const std::string &>(), py::arg("title"));


    project.def_property_readonly("title", &iegen::example::Project::title);
    project.def("add_task", &iegen::example::Project::addTask, py::arg("task"));
    project.def("tasks", &iegen::example::Project::tasks);
}