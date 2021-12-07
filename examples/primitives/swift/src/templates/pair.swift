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

public class PairEmployee {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_PairEmployee(cself)
    }
  }

  public convenience init(first: String, second: Employee) {
    let swifttoscfirst = strdup(first)!
    let swifttoscsecond = second.cself
    var err = ErrorObj()
    self.init(create_PairEmployee(swifttoscfirst, swifttoscsecond, &err), true)
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

  public var first: String {
    get {
      let result = _prop_get_PairEmployee_first(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }
  }

  public var second: Employee {
    get {
      let result = _prop_get_PairEmployee_second(cself)
      let sctoswiftresult = Employee(result, true)
      return sctoswiftresult
    }
  }

}

public class PairStudent {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_PairStudent(cself)
    }
  }

  public convenience init(first: String, second: Student) {
    let swifttoscfirst = strdup(first)!
    let swifttoscsecond = second.cself
    var err = ErrorObj()
    self.init(create_PairStudent(swifttoscfirst, swifttoscsecond, &err), true)
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

  public var first: String {
    get {
      let result = _prop_get_PairStudent_first(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }
  }

  public var second: Student {
    get {
      let result = _prop_get_PairStudent_second(cself)
      let sctoswiftresult = Student(result, true)
      return sctoswiftresult
    }
  }

}
