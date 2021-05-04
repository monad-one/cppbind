#include <pybind11/pybind11.h>
#include "examples_pygen.hpp"

namespace py = pybind11;
void bindExamples(py::module& m) {
    py::module_ extra = m.def_submodule("extra", "extra");
    py::module_ extra_object = extra.def_submodule("object", "object");
    bindObject(extra_object);
    py::module_ containers = m.def_submodule("containers", "containers");
    py::module_ containers_map = containers.def_submodule("map", "map");
    bindMapItem(containers_map);
    bindMapExamples(containers_map);
    py::module_ containers_vector = containers.def_submodule("vector", "vector");
    bindVectorItem(containers_vector);
    bindVectorExamples(containers_vector);
    py::module_ enums = m.def_submodule("enums", "enums");
    py::module_ enums_color = enums.def_submodule("color", "color");
    bindColor(enums_color);
    py::module_ enums_frame = enums.def_submodule("frame", "frame");
    bindFrame(enums_frame);
    py::module_ forward_decl = m.def_submodule("forward_decl", "forward_decl");
    py::module_ forward_decl_student = forward_decl.def_submodule("student", "student");
    bindStudent(forward_decl_student);
    py::module_ forward_decl_teacher = forward_decl.def_submodule("teacher", "teacher");
    bindTeacher(forward_decl_teacher);
    py::module_ functions = m.def_submodule("functions", "functions");
    py::module_ functions_functional = functions.def_submodule("functional", "functional");
    bindFunctionalExamples(functions_functional);
    py::module_ getters = m.def_submodule("getters", "getters");
    py::module_ getters_many_type_template_getter = getters.def_submodule("many_type_template_getter", "many_type_template_getter");
    bindFoo(getters_many_type_template_getter);
    bindBar(getters_many_type_template_getter);
    bindManyTypeTemplateGetter(getters_many_type_template_getter);
    py::module_ getters_number = getters.def_submodule("number", "number");
    bindNumberint(getters_number);
    bindNumberfloat(getters_number);
    py::module_ getters_one_type_template_getter = getters.def_submodule("one_type_template_getter", "one_type_template_getter");
    bindSimpleItem(getters_one_type_template_getter);
    bindOneTypeTemplateGetter(getters_one_type_template_getter);
    py::module_ getters_person = getters.def_submodule("person", "person");
    bindPerson(getters_person);
    py::module_ inheritance = m.def_submodule("inheritance", "inheritance");
    py::module_ inheritance_vehicle = inheritance.def_submodule("vehicle", "vehicle");
    bindVehicle(inheritance_vehicle);
    py::module_ inheritance_bicycle = inheritance.def_submodule("bicycle", "bicycle");
    bindBicycle(inheritance_bicycle);
    py::module_ inheritance_parallelogram = inheritance.def_submodule("parallelogram", "parallelogram");
    bindParallelogram(inheritance_parallelogram);
    py::module_ inheritance_rectangle = inheritance.def_submodule("rectangle", "rectangle");
    bindRectangle(inheritance_rectangle);
    py::module_ inheritance_rhombus = inheritance.def_submodule("rhombus", "rhombus");
    bindRhombus(inheritance_rhombus);
    py::module_ inheritance_square = inheritance.def_submodule("square", "square");
    bindSquare(inheritance_square);
    py::module_ operators = m.def_submodule("operators", "operators");
    py::module_ operators_counter = operators.def_submodule("counter", "counter");
    bindCounter(operators_counter);
    py::module_ overloads = m.def_submodule("overloads", "overloads");
    py::module_ overloads_utils = overloads.def_submodule("utils", "utils");
    bindUtils(overloads_utils);
    py::module_ simple = m.def_submodule("simple", "simple");
    py::module_ simple_task = simple.def_submodule("task", "task");
    bindTask(simple_task);
    py::module_ simple_project = simple.def_submodule("project", "project");
    bindProject(simple_project);
    py::module_ simple_root = simple.def_submodule("root", "root");
    bindRoot(simple_root);
    py::module_ templates = m.def_submodule("templates", "templates");
    py::module_ templates_addressable = templates.def_submodule("addressable", "addressable");
    bindAddressableRoot(templates_addressable);
    py::module_ templates_component = templates.def_submodule("component", "component");
    bindComponent(templates_component);
    py::module_ templates_stack = templates.def_submodule("stack", "stack");
    bindStackProject(templates_stack);
    bindStackTask(templates_stack);
    py::module_ templates_stack_usage = templates.def_submodule("stack_usage", "stack_usage");
    bindStackUsage(templates_stack_usage);
    py::module_ templates_template_functions = templates.def_submodule("template_functions", "template_functions");
    bindTemplateFunctions(templates_template_functions);
}