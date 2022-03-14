/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/10/2022-11:43.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * Structure to describe user.
 */
public class UserInfo {

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
    release_UserInfo(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /**
   * Creates user
   */
  public convenience init(userName: String, userAge: UInt) {
    let swifttoscuserName = strdup(userName)!
    let swifttoscuserAge = CUnsignedInt(userAge)
    var err = IEGenCObject()
    self.init(create_UserInfo(swifttoscuserName, swifttoscuserAge, &err), true)
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

  /**
   * Age of user.
   */
  public var age: UInt {
    let result = _prop_get_UserInfo_age(cself)
    let sctoswiftresult = UInt(result)
    return sctoswiftresult
  }

  /**
   * Name of user.
   */
  public var name: String {
    let result = _prop_get_UserInfo_name(cself)
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  /**
   * Some wishes of the user.
   */
  public var want_a_drink: Bool {
    get {
      let result = _prop_get_UserInfo_want_a_drink(cself)
      return result
    }

    set(value) {
      _prop_set_UserInfo_want_a_drink(cself, value)
    }
  }

}

/**
 * Host class.
 */
public class Host {

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
    release_Host(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /**
   * Creates host
   */
  public convenience init() {
    var err = IEGenCObject()
    self.init(create_Host(&err), true)
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

  /**
   * Greeting function.
   */
  public func hello(user: UserInfo) -> String {

    let swifttoscuser = user.cself
    var err = IEGenCObject()
    let result = _func_Host_hello(cself, swifttoscuser, &err)
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

  /**
   * Welcome function.
   */
  public func welcome(user: UserInfo) -> String {

    let swifttoscuser = user.cself
    var err = IEGenCObject()
    let result = _func_Host_welcome(cself, swifttoscuser, &err)
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

}
