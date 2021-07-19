/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/16/2021-08:19.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include "examples_pygen.hpp"

namespace py = pybind11;
void bindExamples(py::module& m) {
    py::module_ containers = m.def_submodule("containers", "containers");

    py::module_ containers_map = containers.def_submodule("map", "map");

    bindIegenExampleMapItem(containers_map);
    bindIegenExampleMapExamples(containers_map);
    py::module_ containers_pair = containers.def_submodule("pair", "pair");

    bindIegenExamplePairExamples(containers_pair);
    py::module_ containers_vector = containers.def_submodule("vector", "vector");

    bindIegenExampleVectorItem(containers_vector);
    bindIegenExampleVectorExamples(containers_vector);
    py::module_ enums = m.def_submodule("enums", "enums");

    py::module_ enums_color = enums.def_submodule("color", "color");

    bindIegenExampleColor(enums_color);
    py::module_ enums_frame = enums.def_submodule("frame", "frame");

    bindIegenExampleFrame(enums_frame);
    py::module_ forward_decl = m.def_submodule("forward_decl", "forward_decl");

    py::module_ forward_decl_student = forward_decl.def_submodule("student", "student");

    bindIegenExampleStudent(forward_decl_student);
    py::module_ forward_decl_teacher = forward_decl.def_submodule("teacher", "teacher");

    bindIegenExampleTeacher(forward_decl_teacher);
    py::module_ functionals = m.def_submodule("functionals", "functionals");

    py::module_ functionals_functional_example = functionals.def_submodule("functional_example", "functional_example");

    bindIegenExampleFunctionalExamples(functionals_functional_example);
    py::module_ getters = m.def_submodule("getters", "getters");

    py::module_ getters_many_type_template_getter = getters.def_submodule("many_type_template_getter", "many_type_template_getter");

    bindIegenExampleFoo(getters_many_type_template_getter);
    bindIegenExampleBar(getters_many_type_template_getter);
    bindIegenExampleManyTypeTemplateGetter(getters_many_type_template_getter);
    py::module_ getters_number = getters.def_submodule("number", "number");

    bindIegenExampleNumberint(getters_number);
    bindIegenExampleNumberfloat(getters_number);
    py::module_ getters_one_type_template_getter = getters.def_submodule("one_type_template_getter", "one_type_template_getter");

    bindIegenExampleSimpleItem(getters_one_type_template_getter);
    bindIegenExampleOneTypeTemplateGetter(getters_one_type_template_getter);
    py::module_ getters_person = getters.def_submodule("person", "person");

    bindIegenExamplePerson(getters_person);
    py::module_ inheritance = m.def_submodule("inheritance", "inheritance");

    py::module_ inheritance_vehicle = inheritance.def_submodule("vehicle", "vehicle");

    bindIegenExampleVehicle(inheritance_vehicle);
    py::module_ inheritance_bicycle = inheritance.def_submodule("bicycle", "bicycle");

    bindIegenExampleBicycle(inheritance_bicycle);
    py::module_ inheritance_parallelogram = inheritance.def_submodule("parallelogram", "parallelogram");

    bindIegenExampleParallelogram(inheritance_parallelogram);
    py::module_ inheritance_rectangle = inheritance.def_submodule("rectangle", "rectangle");

    bindIegenExampleRectangle(inheritance_rectangle);
    py::module_ inheritance_rhombus = inheritance.def_submodule("rhombus", "rhombus");

    bindIegenExampleRhombus(inheritance_rhombus);
    py::module_ inheritance_square = inheritance.def_submodule("square", "square");

    bindIegenExampleSquare(inheritance_square);
    py::module_ misc = m.def_submodule("misc", "misc");

    py::module_ misc_object = misc.def_submodule("object", "object");

    bindIegenExampleObject(misc_object);
    py::module_ misc_object_usage = misc.def_submodule("object_usage", "object_usage");

    bindIegenExampleObjectUsage(misc_object_usage);
    py::module_ misc_size_buffer = misc.def_submodule("size_buffer", "size_buffer");

    bindIegenExampleSizeUsage(misc_size_buffer);
    bindIegenExampleBufferUsage(misc_size_buffer);
    py::module_ misc_yaml_example = misc.def_submodule("yaml_example", "yaml_example");

    bindIegenExampleWithExternalAPIComments(misc_yaml_example);
    bindIegenExampleAdderint(misc_yaml_example);
    bindIegenExampleAdderfloat(misc_yaml_example);
    bindIegenExamplecolor(misc_yaml_example);
    py::module_ nullables = m.def_submodule("nullables", "nullables");

    py::module_ nullables_nullable_utils = nullables.def_submodule("nullable_utils", "nullable_utils");

    bindIegenExampleNullableNumberInt(nullables_nullable_utils);
    bindIegenExampleNullableNumberDouble(nullables_nullable_utils);
    bindIegenExampleNullableUtils(nullables_nullable_utils);
    py::module_ operators = m.def_submodule("operators", "operators");

    py::module_ operators_counter = operators.def_submodule("counter", "counter");

    bindIegenExampleCounter(operators_counter);
    py::module_ simple_task = m.def_submodule("simple.task", "simple.task");

    py::module_ simple_task_task = simple_task.def_submodule("task", "task");

    bindIegenExamplePyTask(simple_task_task);
    py::module_ optionals = m.def_submodule("optionals", "optionals");

    py::module_ optionals_optionals = optionals.def_submodule("optionals", "optionals");

    bindIegenExampleOptionals(optionals_optionals);
    py::module_ overloads = m.def_submodule("overloads", "overloads");

    py::module_ overloads_utils = overloads.def_submodule("utils", "utils");

    bindIegenExampleUtils(overloads_utils);
    py::module_ shared_ptr = m.def_submodule("shared_ptr", "shared_ptr");

    py::module_ shared_ptr_shared_ptr = shared_ptr.def_submodule("shared_ptr", "shared_ptr");

    bindExampleCar(shared_ptr_shared_ptr);
    py::module_ simple = m.def_submodule("simple", "simple");

    py::module_ simple_path = simple.def_submodule("path", "path");

    bindIegenExamplePath(simple_path);
    py::module_ simple_project = simple.def_submodule("project", "project");

    bindIegenExampleProject(simple_project);
    py::module_ simple_root = simple.def_submodule("root", "root");

    bindIegenExampleRoot(simple_root);
    py::module_ templates = m.def_submodule("templates", "templates");

    py::module_ templates_addressable = templates.def_submodule("addressable", "addressable");

    bindIegenExampleAddressableRoot(templates_addressable);
    py::module_ templates_component = templates.def_submodule("component", "component");

    bindIegenExampleComponent(templates_component);
    py::module_ templates_stack = templates.def_submodule("stack", "stack");

    bindIegenExampleStackProject(templates_stack);
    bindIegenExampleStackPyTask(templates_stack);
    py::module_ templates_stack_usage = templates.def_submodule("stack_usage", "stack_usage");

    bindIegenExampleStackUsage(templates_stack_usage);
    py::module_ templates_template_methods = templates.def_submodule("template_methods", "template_methods");

    bindIegenExampleTemplateMethods(templates_template_methods);
}