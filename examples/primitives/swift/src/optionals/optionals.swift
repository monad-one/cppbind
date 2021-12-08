/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/08/2021-11:58.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Optionals {

  public let cself: CObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: CObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_Optionals(cself, owner)
  }

  /**
   * constructor
   */
  public convenience init() {
    var err = ErrorObj()
    self.init(create_Optionals(&err), true)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func optionalPtrWithNullptrDefault(task: Task? = nil) -> Task? {

    let swifttosctask = CObject(type: task?.cself.type, ptr: task?.cself.ptr)
    var err = ErrorObj()
    let result = _func_Optionals_optionalPtrWithNullptrDefault(cself, swifttosctask, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Task? = nil
    if (result.ptr != nil) {
        sctoswiftresult = Task(result)
    }
    return sctoswiftresult
  }

  public func optionalPtrWithNullDefault(task: Task? = nil) -> Task? {

    let swifttosctask = CObject(type: task?.cself.type, ptr: task?.cself.ptr)
    var err = ErrorObj()
    let result = _func_Optionals_optionalPtrWithNullDefault(cself, swifttosctask, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Task? = nil
    if (result.ptr != nil) {
        sctoswiftresult = Task(result)
    }
    return sctoswiftresult
  }

  public func optionalFDPtrWithNullptrDefault(project: Project? = nil) -> Project? {

    let swifttoscproject = CObject(type: project?.cself.type, ptr: project?.cself.ptr)
    var err = ErrorObj()
    let result = _func_Optionals_optionalFDPtrWithNullptrDefault(cself, swifttoscproject, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Project? = nil
    if (result.ptr != nil) {
        sctoswiftresult = Project(result)
    }
    return sctoswiftresult
  }

  public func optionalSharedPtrWithNullptrDefault(person: Person? = nil) -> Person? {

    let swifttoscperson = CObject(type: person?.cself.type, ptr: person?.cself.ptr)
    var err = ErrorObj()
    let result = _func_Optionals_optionalSharedPtrWithNullptrDefault(cself, swifttoscperson, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Person? = nil
        if (result.ptr != nil) {
            sctoswiftresult = Person(result, true)
        }
    return sctoswiftresult
  }

  public func optionalIntWithDefault(value: Int = 5) -> Int {

    let swifttoscvalue = CInt(value)
    var err = ErrorObj()
    let result = _func_Optionals_optionalIntWithDefault(cself, swifttoscvalue, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  public func optionalLongWithDefault(value: CLong = 7) -> CLong {

    var err = ErrorObj()
    let result = _func_Optionals_optionalLongWithDefault(cself, value, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  public func optionalDoubleWithDefault(value: Double = 9.0) -> Double {

    var err = ErrorObj()
    let result = _func_Optionals_optionalDoubleWithDefault(cself, value, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  public func optionalFloatWithDefault(value: Float = 11.0) -> Float {

    var err = ErrorObj()
    let result = _func_Optionals_optionalFloatWithDefault(cself, value, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  public func optionalBoolWithDefault(value: Bool = true) -> Bool {

    var err = ErrorObj()
    let result = _func_Optionals_optionalBoolWithDefault(cself, value, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  /**
   * @param[in] optionalStr string with default value
   */
  public func optionalStringWithDefault(optionalStr: String = "abc") -> String {

    let swifttoscoptionalStr = strdup(optionalStr)!
    var err = ErrorObj()
    let result = _func_Optionals_optionalStringWithDefault(cself, swifttoscoptionalStr, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
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
   * @param[in] optionalStr string with default value
   */
  public func optionalStringViewWithDefault(optionalStr: String = "abc") -> String {

    let swifttoscoptionalStr = strdup(optionalStr)!
    var err = ErrorObj()
    let result = _func_Optionals_optionalStringViewWithDefault(cself, swifttoscoptionalStr, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func optionalCharPointerWithDefault(optionalStr: String = "def") -> String {

    let swifttoscoptionalStr = optionalStr.cString(using: String.Encoding.utf8)!
    var err = ErrorObj()
    let result = _func_Optionals_optionalCharPointerWithDefault(cself, swifttoscoptionalStr, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

  public func optionalEnumWithDefault(c: Color = Color.Red) -> Color {

    let swifttoscc = c.rawValue
    var err = ErrorObj()
    let result = _func_Optionals_optionalEnumWithDefault(cself, swifttoscc, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresultOptional = Color(rawValue: result)
    if (sctoswiftresultOptional == nil) {
      ExceptionHandler.handleUncaughtException(
      "Internal error: unresolved reference to non existing field of Color enum.")
    }
    let sctoswiftresult = sctoswiftresultOptional!
    return sctoswiftresult
  }

  public func optionalEnumWithDefaultAndFieldPrefix(c: ColorShade = ColorShade.ShadeLight) -> ColorShade {

    let swifttoscc = c.rawValue
    var err = ErrorObj()
    let result = _func_Optionals_optionalEnumWithDefaultAndFieldPrefix(cself, swifttoscc, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresultOptional = ColorShade(rawValue: result)
    if (sctoswiftresultOptional == nil) {
      ExceptionHandler.handleUncaughtException(
      "Internal error: unresolved reference to non existing field of ColorShade enum.")
    }
    let sctoswiftresult = sctoswiftresultOptional!
    return sctoswiftresult
  }

  public func optionalEnumWithInternalDefault(c: ColorShade) -> ColorShade {

    let swifttoscc = c.rawValue
    var err = ErrorObj()
    let result = _func_Optionals_optionalEnumWithInternalDefault(cself, swifttoscc, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresultOptional = ColorShade(rawValue: result)
    if (sctoswiftresultOptional == nil) {
      ExceptionHandler.handleUncaughtException(
      "Internal error: unresolved reference to non existing field of ColorShade enum.")
    }
    let sctoswiftresult = sctoswiftresultOptional!
    return sctoswiftresult
  }

  public func optionalRefWithDefaultComplexValue(task: Task) -> Task {

    let swifttosctask = task.cself
    var err = ErrorObj()
    let result = _func_Optionals_optionalRefWithDefaultComplexValue(cself, swifttosctask, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Task
    sctoswiftresult = Task(result)
    return sctoswiftresult
  }

  public func optionalByValWithDefaultComplexValue(task: Task) -> Task {

    let swifttosctask = task.cself
    var err = ErrorObj()
    let result = _func_Optionals_optionalByValWithDefaultComplexValue(cself, swifttosctask, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Task
    sctoswiftresult = Task(result, true)
    return sctoswiftresult
  }

}
