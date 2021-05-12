#ifndef addressable_hpp
#define addressable_hpp
#include <string>

/**
 * This is a template class example that will be used as a base type for other types.
 * In this example also implementations are in the same file.
 */

namespace iegen::example {

/**
 * Addressable is a base class for all the objects, that have abs path.
 * __API__
 * gen: interface
 * template: {"T": [{"type": "iegen::example::Root"}]}
 * shared_ref: true
 * package: templates
 * python.include: classes.root_pygen
 */
template <typename T>
struct Addressable {
  /**
    * comments
    * __API__
    * gen: constructor
    */
  Addressable(const T& parent, const std::string& name);

  /**
    * comments
    * @brief Get object's abs path based on parent's abs path and object's name
    * @return the abs path of the object
    * __API__
    * gen: method
    */
  std::string absPath() const;
  virtual ~Addressable() = default;

private:
    std::string _parent_path;
    std::string _name;
};


template <typename T>
inline std::string Addressable<T>::absPath() const {
    return _parent_path + _name;
}

template <typename T>
inline Addressable<T>::Addressable(const T& parent, const std::string& name) {
    _parent_path = parent.path;
    _name = name;
}

}
#endif