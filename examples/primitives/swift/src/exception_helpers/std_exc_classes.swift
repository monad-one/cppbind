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

public class StdException : Error {

  public let cself: CObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: CObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_StdException(cself, owner)
  }

  public func what() -> String {

    var err = ErrorObj()
    let result = _func_StdException_what(cself, &err)
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

}

public class StdLogicError: StdException {
}

public class StdRuntimeError: StdException {
}

public class StdDomainError: StdLogicError {
}

public class StdInvalidArgument: StdLogicError {
}

public class StdLengthError: StdLogicError {
}

public class StdOutOfRange: StdLogicError {
}

public class StdRangeError: StdRuntimeError {
}

public class StdOverflowError: StdRuntimeError {
}

public class StdUnderflowError: StdRuntimeError {
}

public class StdBadAlloc: StdException {
}

public class StdBadCast: StdException {
}

public class StdBadTypeId: StdException {
}
