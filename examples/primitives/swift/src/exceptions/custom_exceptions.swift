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

public class SimpleBaseException : Error {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_SimpleBaseException(cself)
    }
  }

  public convenience init(errNum: Int) {
    let swifttoscerrNum = CInt(errNum)
    var err = ErrorObj()
    self.init(create_SimpleBaseException(swifttoscerrNum, &err), true)
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

  public func errNum() -> Int {

    var err = ErrorObj()
    let result = _func_SimpleBaseException_errNum(cself, &err)
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

}

public class SimpleChildException: SimpleBaseException {
  /**
   * comments
   * 
   */
  public convenience init(errNum: Int) {
    let swifttoscerrNum = CInt(errNum)
    var err = ErrorObj()
    self.init(create_SimpleChildException(swifttoscerrNum, &err), true)
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

  /**
   * comments
   * 
   */
  public override func errNum() -> Int {

    var err = ErrorObj()
    let result = _func_SimpleChildException_errNum(cself, &err)
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

}
