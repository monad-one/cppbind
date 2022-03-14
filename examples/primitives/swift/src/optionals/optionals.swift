/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/14/2022-08:23.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Optionals {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_IegenExample_Optionals(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var err = IEGenCObject()
    self.init(create_IegenExample_Optionals_1(&err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public convenience init(task: Task, i: Int = 1) {
    let swifttosctask = task.cself
    let swifttosci = CInt(i)
    var err = IEGenCObject()
    self.init(create_IegenExample_Optionals_2(swifttosctask, swifttosci, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public convenience init(task: Task, i: Int = 1, r: Root) {
    let swifttosctask = task.cself
    let swifttosci = CInt(i)
    let swifttoscr = r.cself
    var err = IEGenCObject()
    self.init(create_IegenExample_Optionals(swifttosctask, swifttosci, swifttoscr, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func optionalPtrWithNullptrDefault(task: Task? = nil) -> Task? {

    let swifttosctask = task?.cself ?? IEGenCObject(type: nil, ptr: nil)
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalPtrWithNullptrDefault(cself, swifttosctask, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
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

    let swifttosctask = task?.cself ?? IEGenCObject(type: nil, ptr: nil)
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalPtrWithNullDefault(cself, swifttosctask, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Task? = nil
    if (result.ptr != nil) {
      sctoswiftresult = Task(result)
    }
    return sctoswiftresult
  }

  public func optionalIntWithDefault(value: Int = 5) -> Int {

    let swifttoscvalue = CInt(value)
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalIntWithDefault(cself, swifttoscvalue, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  public func optionalLongWithDefault(value: CLong = 7) -> CLong {

    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalLongWithDefault(cself, value, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  public func optionalDoubleWithDefault(value: Double = 9.0) -> Double {

    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalDoubleWithDefault(cself, value, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  public func optionalFloatWithDefault(value: Float = 11.0) -> Float {

    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalFloatWithDefault(cself, value, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  public func optionalBoolWithDefault(value: Bool = true) -> Bool {

    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalBoolWithDefault(cself, value, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
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
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalStringWithDefault(cself, swifttoscoptionalStr, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
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
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalCharPointerWithDefault(cself, swifttoscoptionalStr, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

  public func optionalEnumWithDefault(c: Color = Color.Red) -> Color {

    let swifttoscc = c.rawValue
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalEnumWithDefault(cself, swifttoscc, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    guard let sctoswiftresult = Color(rawValue: result) else {
       ExceptionHandler.handleUncaughtException(
          "Internal error: unresolved reference to non existing field of Color enum.")
    }
    return sctoswiftresult
  }

  public func singleComplexDefaultValue() -> Task {

    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_singleComplexDefaultValue_1(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Task
    sctoswiftresult = Task(result, true)
    return sctoswiftresult
  }

  public func singleComplexDefaultValue(task: Task) -> Task {

    let swifttosctask = task.cself
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_singleComplexDefaultValue(cself, swifttosctask, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Task
    sctoswiftresult = Task(result, true)
    return sctoswiftresult
  }

  public func multipleMixedDefaultValues() -> String {

    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_multipleMixedDefaultValues_1(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func multipleMixedDefaultValues(task: Task, i: Int = 1) -> String {

    let swifttosctask = task.cself
    let swifttosci = CInt(i)
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_multipleMixedDefaultValues_2(cself, swifttosctask, swifttosci, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func multipleMixedDefaultValues(task: Task, i: Int = 1, r: Root) -> String {

    let swifttosctask = task.cself
    let swifttosci = CInt(i)
    let swifttoscr = r.cself
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_multipleMixedDefaultValues(cself, swifttosctask, swifttosci, swifttoscr, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func optionalEnumWithDefaultAndFieldPrefix(c: ColorShade = ColorShade.ShadeLight) -> ColorShade {

    let swifttoscc = c.rawValue
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalEnumWithDefaultAndFieldPrefix(cself, swifttoscc, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    guard let sctoswiftresult = ColorShade(rawValue: result) else {
       ExceptionHandler.handleUncaughtException(
          "Internal error: unresolved reference to non existing field of ColorShade enum.")
    }
    return sctoswiftresult
  }

  public func optionalEnumWithInternalDefault(c: ColorShade) -> ColorShade {

    let swifttoscc = c.rawValue
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalEnumWithInternalDefault(cself, swifttoscc, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    guard let sctoswiftresult = ColorShade(rawValue: result) else {
       ExceptionHandler.handleUncaughtException(
          "Internal error: unresolved reference to non existing field of ColorShade enum.")
    }
    return sctoswiftresult
  }

  /**
   * @param[in] optionalStr string with default value
   */
  public func optionalStringViewWithDefault(optionalStr: String = "abc") -> String {

    let swifttoscoptionalStr = strdup(optionalStr)!
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalStringViewWithDefault(cself, swifttoscoptionalStr, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func optionalFDPtrWithNullptrDefault(project: Project? = nil) -> Project? {

    let swifttoscproject = project?.cself ?? IEGenCObject(type: nil, ptr: nil)
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalFDPtrWithNullptrDefault(cself, swifttoscproject, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
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

    let swifttoscperson = person?.cself ?? IEGenCObject(type: nil, ptr: nil)
    var err = IEGenCObject()
    let result = _func_IegenExample_Optionals_optionalSharedPtrWithNullptrDefault(cself, swifttoscperson, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Person? = nil
    if (result.ptr != nil) {
      sctoswiftresult = Person(result, true)
    }
    return sctoswiftresult
  }

}
