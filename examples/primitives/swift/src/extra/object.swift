/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/14/2022-10:58.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/// comments
/// 
public class Object: Hashable, CustomStringConvertible {

  /// An internal property to keep a reference to the original C++ object.
  /// It is intended to be used by the generated code.
  public let cself: CppBindCObject

  /// An internal property to keep track whether Swift is responsible for deallocating the underlying C++ object or not.
  /// It is intended to be used by the generated code.
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_Cppbind_Object(cself, owner)
  }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: CppBindCObject, _self: Object) {
    fatalError("A dummy internal initializer should not be called.")
  }

  /**
   * String representation for user readability
   * @return result of toReprString by default
   */
  public var description: String {
    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_toString(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  /// Human readable class name
  /// @return class name
  public func className() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_className(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  /**
   * Compare on equality two objects
   * @param other is the second one
   * @return is equals two objects
   */
  public static func == (lhs: Object, rhs: Object) -> Bool {
    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_equals(lhs.cself, rhs.cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  /**
   * Hash for object. Used in wrappers (java, obj-c, python) to define the hash function
   * @return hash of the object
   */
  public func hash(into hasher: inout Hasher) {
    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_hash(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    hasher.combine(result)
  }

  /// Detailed string representation only for debug porpoises
  /// @return object state as string
  public func debugInfo() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_debugInfo(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  /// The object's size in bytes
  /// @return bytes count
  public func bytesCount() -> CUnsignedLong {

    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_bytesCount(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "cppbind::Object" }

  /// An internal method to create a Swift object from a C++ object.
  /// It is intended to be used by the generated code.
  class func cppbindConstructObject(_ cppbindObj: CppBindCObject, _ owner: Bool = false) -> Object {
    let typeName = String(cString: cppbindObj.type)
    switch(typeName) {
    case(ObjectUsage.cppbindCxxTypeName):
      return ObjectUsage(cppbindObj, owner)
    default:
      return Object(cppbindObj, owner)
    }
  }
}
