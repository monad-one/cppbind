/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-16:27.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Optionals {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_Optionals(cself)
    }
  }

  /**
   * constructor
   */
  public convenience init() {
    var err = ErrorObj()
    self.init(create_Optionals(&err), true)
    let err_type = Int(err.err_type)
    if (err_type != 0) {
      switch(err_type) {
        case(1):
          let exc_obj = StdException(err.err_ptr, true)
          ExceptionHandler.handleUncaughtException(exc_obj.what())
        default:
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func optionalPtrWithNullptrDefault(task: Task? = nil) -> Task? {

    let swifttosctask = task?.cself
    var err = ErrorObj()
    let result = _func_Optionals_optionalPtrWithNullptrDefault(cself, swifttosctask, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult: Task?
    if let result = result {
      sctoswiftresult = Task(result)
    } else {
      sctoswiftresult = nil
    }
    return sctoswiftresult
  }

  public func optionalPtrWithNullDefault(task: Task? = nil) -> Task? {

    let swifttosctask = task?.cself
    var err = ErrorObj()
    let result = _func_Optionals_optionalPtrWithNullDefault(cself, swifttosctask, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult: Task?
    if let result = result {
      sctoswiftresult = Task(result)
    } else {
      sctoswiftresult = nil
    }
    return sctoswiftresult
  }

  public func optionalFDPtrWithNullptrDefault(project: Project? = nil) -> Project? {

    let swifttoscproject = project?.cself
    var err = ErrorObj()
    let result = _func_Optionals_optionalFDPtrWithNullptrDefault(cself, swifttoscproject, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult: Project?
    if let result = result {
      sctoswiftresult = Project(result)
    } else {
      sctoswiftresult = nil
    }
    return sctoswiftresult
  }

  public func optionalSharedPtrWithNullptrDefault(person: Person? = nil) -> Person? {

    let swifttoscperson = person?.cself
    var err = ErrorObj()
    let result = _func_Optionals_optionalSharedPtrWithNullptrDefault(cself, swifttoscperson, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult: Person?
        if let result = result {
          sctoswiftresult = Person(result, true)
        } else {
          sctoswiftresult = nil
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
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
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = Task(result)
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
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = Task(result, true)
    return sctoswiftresult
  }

}
