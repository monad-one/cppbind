/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/31/2022-08:51.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * This class contains a private string field and getter/setter methods for it.
 */
public class Person {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_Person(cself, owner)
  }

  public convenience init(name: String, email: String, age: Int) {
    let swifttoscname = strdup(name)!
    let swifttoscemail = strdup(email)!
    let swifttoscage = CInt(age)
    var err = IEGenCErrorObj()
    self.init(create_Person(swifttoscname, swifttoscemail, swifttoscage, &err), true)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(IEGenCObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public var name: String {
    get {
      let result = _prop_get_Person_name(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = strdup(value)!
      _prop_set_Person_name(cself, swifttoscvalue)
    }
  }

  public var email: String {
    get {
      let result = _prop_get_Person_email(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }
  }

  public var age: Int {
    get {
      let result = _prop_get_Person_age(cself)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = CInt(value)
      _prop_set_Person_age(cself, swifttoscvalue)
    }
  }

}
