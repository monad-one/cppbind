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

/// Class Frame.
public class Frame {

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
    release_CppbindExample_Frame(cself, owner)
  }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_Frame(&cppbindErr), true)
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
  }

  public var backgroundColor: Color {
    get {
      let result = _prop_get_CppbindExample_Frame_backgroundColor(cself)
      guard let sctoswiftresult = Color(rawValue: result) else {
         ExceptionHandler.handleUncaughtException(
            "Internal error: unresolved reference to non existing field of Color enum.")
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value.rawValue
      _prop_set_CppbindExample_Frame_backgroundColor(cself, swifttoscvalue)
    }
  }

  public var backgroundColorShade: ColorShade {
    get {
      let result = _prop_get_CppbindExample_Frame_backgroundColorShade(cself)
      guard let sctoswiftresult = ColorShade(rawValue: result) else {
         ExceptionHandler.handleUncaughtException(
            "Internal error: unresolved reference to non existing field of ColorShade enum.")
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value.rawValue
      _prop_set_CppbindExample_Frame_backgroundColorShade(cself, swifttoscvalue)
    }
  }

  public func getNextColor(color: Color) -> Color {

    let swifttosccolor = color.rawValue
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_Frame_getNextColor(cself, swifttosccolor, &cppbindErr)
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
    guard let sctoswiftresult = Color(rawValue: result) else {
       ExceptionHandler.handleUncaughtException(
          "Internal error: unresolved reference to non existing field of Color enum.")
    }
    return sctoswiftresult
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "cppbind::example::Frame" }
}
