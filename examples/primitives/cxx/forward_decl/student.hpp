#ifndef student_hpp
#define student_hpp

#include <vector>

namespace iegen::example {
// [example]
// forward declaration
class Teacher;

/**
 * comments
 *
 * __API__
 * action: gen_class
 * shared_ref: True
 * package: forward_decl
 * kotlin.package: forward_decl.student
 */
class Student {
public:
    /**
     * __API__
     * action: gen_constructor
     */
    Student() {};


    /**
     * __API__
     * action: gen_method
     * throws: no_throw
     */
    void addTeacher(Teacher* t) {
        _teachers.push_back(t);
    }

    /**
     * __API__
     * action: gen_method
     * throws: no_throw
     */
    const std::vector<Teacher*>& teachers() const {
        return _teachers;
    };

private:
    std::vector<Teacher*> _teachers;
};
// [example]
}
#endif