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

#include "cxx/getters/many_type_template_getter.hpp"

namespace py = pybind11;

void bindIegenExampleFoo(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Foo> foo(m, "Foo");

    foo.def_readwrite("value", &iegen::example::Foo::value);
}
void bindIegenExampleBar(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Bar> bar(m, "Bar");

    bar.def_readwrite("value", &iegen::example::Bar::value);
}
void bindIegenExampleManyTypeTemplateGetter(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::ManyTypeTemplateGetter> manytypetemplategetter(m, "ManyTypeTemplateGetter");

    manytypetemplategetter.def(py::init<>());


    manytypetemplategetter.def_property_readonly("foo_bar", &iegen::example::ManyTypeTemplateGetter::pair<iegen::example::Foo, iegen::example::Bar>);



    manytypetemplategetter.def_property_readonly("foo_bar_pair", &iegen::example::ManyTypeTemplateGetter::pairWithType<iegen::example::Foo, iegen::example::Bar>);



    manytypetemplategetter.def_property_readonly("bar_bar_pair", &iegen::example::ManyTypeTemplateGetter::pairWithType<iegen::example::Bar, iegen::example::Bar>);
}