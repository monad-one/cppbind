#ifndef project_hpp
#define project_hpp

#include <vector>
#include <string>

#include "cxx/simple/task.hpp"

namespace iegen::example {
// [example]
/**
 * Class holding project information.
 * __API__
 * action: gen_class
 * shared_ref: False
 * package: simple
 */
class Project {
public:
    /**
     * Project constructor.
     * __API__
     * action: gen_constructor
     * throws: no_throw
     */
    Project(const std::string& title) : _title(title) {};

    /**
     * Get project´s title.
     * __API__
     * action: gen_getter
     * throws: no_throw
     */
    std::string& title() {
        return _title;
    };


    /**
     * Add a task to project.
     * __API__
     * action: gen_method
     * throws: no_throw
     */
    void addTask(Task* task) {
        _tasks.push_back(task);
    }

    /**
     * Get project´s tasks.
     * __API__
     * action: gen_method
     * throws: no_throw
     * return_value_policy: reference
     */
    const std::vector<Task*>& tasks() const {
        return _tasks;
    }
private:
    std::vector<Task*> _tasks;
    std::string _title;
};
// [example]
}
#endif