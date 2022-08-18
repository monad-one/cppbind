/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/14/2022-10:59.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class QueueInt {

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
    release_CppbindExample_QueueInt(cself, owner)
  }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_QueueInt(&cppbindErr), true)
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

  public func push_back(element: Int) -> Void {

    let swifttoscelement = CInt(element)
    var cppbindErr = CppBindCObject()
    _func_CppbindExample_QueueInt_push_back(cself, swifttoscelement, &cppbindErr)
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

  public func push_back_from_str(element: String) -> Void {

    let swifttoscelement = strdup(element)!
    var cppbindErr = CppBindCObject()
    _func_CppbindExample_QueueInt_push_back_from_str(cself, swifttoscelement, &cppbindErr)
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

  public func get_size() -> Int {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_QueueInt_get_size(cself, &cppbindErr)
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
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "cppbind::example::QueueInt" }
}

public class QueueIntUsage {

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
    release_CppbindExample_QueueIntUsage(cself, owner)
  }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(q: QueueInt) {
    let swifttoscq = q.cself
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_QueueIntUsage(swifttoscq, &cppbindErr), true)
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

  public var empty_queue: QueueInt {
    let result = _prop_get_CppbindExample_QueueIntUsage_empty_queue(cself)
    var sctoswiftresult: QueueInt
    sctoswiftresult = QueueInt(result, true)
    return sctoswiftresult
  }

  public var saved_queue: QueueInt {
    let result = _prop_get_CppbindExample_QueueIntUsage_saved_queue(cself)
    var sctoswiftresult: QueueInt
    sctoswiftresult = QueueInt(result)
    return sctoswiftresult
  }

  public static func getSize(q: QueueInt) -> Int {

    let swifttoscq = q.cself
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_QueueIntUsage_getSize(swifttoscq, &cppbindErr)
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
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  public static func getLastElement(q: QueueInt) -> Int {

    let swifttoscq = q.cself
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_QueueIntUsage_getLastElement(swifttoscq, &cppbindErr)
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
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  public static func getFirstElement(q: QueueInt) -> Int {

    let swifttoscq = q.cself
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_QueueIntUsage_getFirstElement(swifttoscq, &cppbindErr)
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
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  public static func getInvQueue(v: Array<Int>) -> QueueInt {

    let _swifttoscvData = UnsafeMutablePointer<CInt>.allocate(capacity: v.count)
    var swifttoscv = CppBindCDataArray()
    swifttoscv.data = UnsafeMutableRawPointer(_swifttoscvData)
    swifttoscv.size = Int64(v.count)
    for i in 0..<v.count {
      let vVal = v[i]
      let swifttoscvVal = CInt(vVal)
      _swifttoscvData[i] = swifttoscvVal
    }
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_QueueIntUsage_getInvQueue(swifttoscv, &cppbindErr)
    
    swifttoscv.data.deallocate()
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
    var sctoswiftresult: QueueInt
    sctoswiftresult = QueueInt(result, true)
    return sctoswiftresult
  }

  public func getSavedQueue() -> QueueInt {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_QueueIntUsage_getSavedQueue(cself, &cppbindErr)
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
    var sctoswiftresult: QueueInt
    sctoswiftresult = QueueInt(result)
    return sctoswiftresult
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "cppbind::example::QueueIntUsage" }
}
