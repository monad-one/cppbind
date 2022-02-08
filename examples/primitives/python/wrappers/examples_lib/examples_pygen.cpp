/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/08/2022-06:11.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include "python/wrappers/examples_lib/examples_pygen.hpp"

namespace py = pybind11;

void bindExamples(py::module& m) {
    py::module_ containers = m.def_submodule("containers", "containers");

    py::module_ containers_map = containers.def_submodule("map", "map");

    bindExamplesLibContainersMap(containers_map);
    py::module_ containers_nested_containers = containers.def_submodule("nested_containers", "nested_containers");

    bindExamplesLibContainersNestedContainers(containers_nested_containers);
    py::module_ containers_pair = containers.def_submodule("pair", "pair");

    bindExamplesLibContainersPair(containers_pair);
    py::module_ containers_vector = containers.def_submodule("vector", "vector");

    bindExamplesLibContainersVector(containers_vector);
    py::module_ enums = m.def_submodule("enums", "enums");

    py::module_ enums_color = enums.def_submodule("color", "color");

    bindExamplesLibEnumsColor(enums_color);
    py::module_ enums_frame = enums.def_submodule("frame", "frame");

    bindExamplesLibEnumsFrame(enums_frame);
    py::module_ extra = m.def_submodule("extra", "extra");

    py::module_ extra_object = extra.def_submodule("object", "object");

    bindExamplesLibExtraObject(extra_object);
    py::module_ extra_object_usage = extra.def_submodule("object_usage", "object_usage");

    bindExamplesLibExtraObjectUsage(extra_object_usage);
    py::module_ forward_decl = m.def_submodule("forward_decl", "forward_decl");

    py::module_ forward_decl_student = forward_decl.def_submodule("student", "student");

    bindExamplesLibForwardDeclStudent(forward_decl_student);
    py::module_ forward_decl_teacher = forward_decl.def_submodule("teacher", "teacher");

    bindExamplesLibForwardDeclTeacher(forward_decl_teacher);
    py::module_ functionals = m.def_submodule("functionals", "functionals");

    py::module_ functionals_functional_example = functionals.def_submodule("functional_example", "functional_example");

    bindExamplesLibFunctionalsFunctionalExample(functionals_functional_example);
    py::module_ getters = m.def_submodule("getters", "getters");

    py::module_ getters_fruits = getters.def_submodule("fruits", "fruits");

    bindExamplesLibGettersFruits(getters_fruits);
    py::module_ getters_number = getters.def_submodule("number", "number");

    bindExamplesLibGettersNumber(getters_number);
    py::module_ getters_person = getters.def_submodule("person", "person");

    bindExamplesLibGettersPerson(getters_person);
    py::module_ simple_task = m.def_submodule("simple.task", "simple.task");

    py::module_ simple_task_task = simple_task.def_submodule("task", "task");

    bindExamplesLibSimpleTaskTask(simple_task_task);
    py::module_ simple = m.def_submodule("simple", "simple");

    py::module_ simple_project = simple.def_submodule("project", "project");

    bindExamplesLibSimpleProject(simple_project);
    py::module_ globs = m.def_submodule("globs", "globs");

    py::module_ globs_utils = globs.def_submodule("utils", "utils");

    bindExamplesLibGlobsUtils(globs_utils);
    py::module_ inheritance = m.def_submodule("inheritance", "inheritance");

    py::module_ inheritance_animal = inheritance.def_submodule("animal", "animal");

    bindExamplesLibInheritanceAnimal(inheritance_animal);
    py::module_ inheritance_base = inheritance.def_submodule("base", "base");

    bindExamplesLibInheritanceBase(inheritance_base);
    py::module_ inheritance_vehicle = inheritance.def_submodule("vehicle", "vehicle");

    bindExamplesLibInheritanceVehicle(inheritance_vehicle);
    py::module_ inheritance_bicycle = inheritance.def_submodule("bicycle", "bicycle");

    bindExamplesLibInheritanceBicycle(inheritance_bicycle);
    py::module_ inheritance_car = inheritance.def_submodule("car", "car");

    bindExamplesLibInheritanceCar(inheritance_car);
    py::module_ inheritance_date = inheritance.def_submodule("date", "date");

    bindExamplesLibInheritanceDate(inheritance_date);
    py::module_ inheritance_datetime = inheritance.def_submodule("datetime", "datetime");

    bindExamplesLibInheritanceDatetime(inheritance_datetime);
    py::module_ inheritance_parallelogram = inheritance.def_submodule("parallelogram", "parallelogram");

    bindExamplesLibInheritanceParallelogram(inheritance_parallelogram);
    py::module_ inheritance_rectangle = inheritance.def_submodule("rectangle", "rectangle");

    bindExamplesLibInheritanceRectangle(inheritance_rectangle);
    py::module_ inheritance_rhombus = inheritance.def_submodule("rhombus", "rhombus");

    bindExamplesLibInheritanceRhombus(inheritance_rhombus);
    py::module_ inheritance_square = inheritance.def_submodule("square", "square");

    bindExamplesLibInheritanceSquare(inheritance_square);
    py::module_ inheritance_symbol = inheritance.def_submodule("symbol", "symbol");

    bindExamplesLibInheritanceSymbol(inheritance_symbol);
    py::module_ inheritance_usage = inheritance.def_submodule("usage", "usage");

    bindExamplesLibInheritanceUsage(inheritance_usage);
    py::module_ misc = m.def_submodule("misc", "misc");

    py::module_ misc_size_buffer = misc.def_submodule("size_buffer", "size_buffer");

    bindExamplesLibMiscSizeBuffer(misc_size_buffer);
    py::module_ misc_yaml_example = misc.def_submodule("yaml_example", "yaml_example");

    bindExamplesLibMiscYamlExample(misc_yaml_example);
    py::module_ nested_types = m.def_submodule("nested_types", "nested_types");

    py::module_ nested_types_list = nested_types.def_submodule("list", "list");

    bindExamplesLibNestedTypesList(nested_types_list);
    py::module_ nested_types_usage = m.def_submodule("nested_types.usage", "nested_types.usage");

    py::module_ nested_types_usage_list_usage = nested_types_usage.def_submodule("list_usage", "list_usage");

    bindExamplesLibNestedTypesUsageListUsage(nested_types_usage_list_usage);
    py::module_ nullables = m.def_submodule("nullables", "nullables");

    py::module_ nullables_nullable_utils = nullables.def_submodule("nullable_utils", "nullable_utils");

    bindExamplesLibNullablesNullableUtils(nullables_nullable_utils);
    py::module_ operators = m.def_submodule("operators", "operators");

    py::module_ operators_counter = operators.def_submodule("counter", "counter");

    bindExamplesLibOperatorsCounter(operators_counter);
    py::module_ operators_intarray = operators.def_submodule("intarray", "intarray");

    bindExamplesLibOperatorsIntarray(operators_intarray);
    py::module_ optionals = m.def_submodule("optionals", "optionals");

    py::module_ optionals_optionals = optionals.def_submodule("optionals", "optionals");

    bindExamplesLibOptionalsOptionals(optionals_optionals);
    py::module_ overloads = m.def_submodule("overloads", "overloads");

    py::module_ overloads_employee = overloads.def_submodule("employee", "employee");

    bindExamplesLibOverloadsEmployee(overloads_employee);
    py::module_ overloads_utils = overloads.def_submodule("utils", "utils");

    bindExamplesLibOverloadsUtils(overloads_utils);
    py::module_ rv_policies = m.def_submodule("rv_policies", "rv_policies");

    py::module_ rv_policies_return_value_policies = rv_policies.def_submodule("return_value_policies", "return_value_policies");

    bindExamplesLibRvPoliciesReturnValuePolicies(rv_policies_return_value_policies);
    py::module_ rv_policies_singleton = rv_policies.def_submodule("singleton", "singleton");

    bindExamplesLibRvPoliciesSingleton(rv_policies_singleton);
    py::module_ shared_ptr = m.def_submodule("shared_ptr", "shared_ptr");

    py::module_ shared_ptr_shared_ptr = shared_ptr.def_submodule("shared_ptr", "shared_ptr");

    bindExamplesLibSharedPtrSharedPtr(shared_ptr_shared_ptr);
    py::module_ shared_ptr_shared_ptr_symbol = shared_ptr.def_submodule("shared_ptr_symbol", "shared_ptr_symbol");

    bindExamplesLibSharedPtrSharedPtrSymbol(shared_ptr_shared_ptr_symbol);
    py::module_ simple_holder = simple.def_submodule("holder", "holder");

    bindExamplesLibSimpleHolder(simple_holder);
    py::module_ simple_path = simple.def_submodule("path", "path");

    bindExamplesLibSimplePath(simple_path);
    py::module_ simple_root = simple.def_submodule("root", "root");

    bindExamplesLibSimpleRoot(simple_root);
    py::module_ templates = m.def_submodule("templates", "templates");

    py::module_ templates_addressable = templates.def_submodule("addressable", "addressable");

    bindExamplesLibTemplatesAddressable(templates_addressable);
    py::module_ templates_component = templates.def_submodule("component", "component");

    bindExamplesLibTemplatesComponent(templates_component);
    py::module_ templates_container = templates.def_submodule("container", "container");

    bindExamplesLibTemplatesContainer(templates_container);
    py::module_ templates_pair = templates.def_submodule("pair", "pair");

    bindExamplesLibTemplatesPair(templates_pair);
    py::module_ templates_stack = templates.def_submodule("stack", "stack");

    bindExamplesLibTemplatesStack(templates_stack);
    py::module_ templates_stack_usage = templates.def_submodule("stack_usage", "stack_usage");

    bindExamplesLibTemplatesStackUsage(templates_stack_usage);
    py::module_ templates_template_methods = templates.def_submodule("template_methods", "template_methods");

    bindExamplesLibTemplatesTemplateMethods(templates_template_methods);
    py::module_ templates_wrapper = templates.def_submodule("wrapper", "wrapper");

    bindExamplesLibTemplatesWrapper(templates_wrapper);
}
