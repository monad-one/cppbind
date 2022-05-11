/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 05/05/2022-13:20.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class StdException : Error {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_Std_StdException(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: IEGenCObject, _self: StdException) {
    fatalError("A dummy internal initializer should not be called.")
  }

  public func what() -> String {

    var iegenErr = IEGenCObject()
    let result = _func_Std_StdException_what(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

  class var iegenCxxTypeName : String { return "std::exception" }

  class func iegenConstructObject(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> StdException {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case(FileError.iegenCxxTypeName):
      return FileError(iegenObj, owner)
    case(StdDomainError.iegenCxxTypeName):
      return StdDomainError(iegenObj, owner)
    case(StdInvalidArgument.iegenCxxTypeName):
      return StdInvalidArgument(iegenObj, owner)
    case(StdLengthError.iegenCxxTypeName):
      return StdLengthError(iegenObj, owner)
    case(StdOutOfRange.iegenCxxTypeName):
      return StdOutOfRange(iegenObj, owner)
    case(StdOverflowError.iegenCxxTypeName):
      return StdOverflowError(iegenObj, owner)
    case(StdRangeError.iegenCxxTypeName):
      return StdRangeError(iegenObj, owner)
    case(StdUnderflowError.iegenCxxTypeName):
      return StdUnderflowError(iegenObj, owner)
    case(SystemError.iegenCxxTypeName):
      return SystemError(iegenObj, owner)
    case(StdBadAlloc.iegenCxxTypeName):
      return StdBadAlloc(iegenObj, owner)
    case(StdBadCast.iegenCxxTypeName):
      return StdBadCast(iegenObj, owner)
    case(StdBadTypeId.iegenCxxTypeName):
      return StdBadTypeId(iegenObj, owner)
    case(StdLogicError.iegenCxxTypeName):
      return StdLogicError(iegenObj, owner)
    case(StdRuntimeError.iegenCxxTypeName):
      return StdRuntimeError(iegenObj, owner)
    default:
      return StdException(iegenObj, owner)
    }
  }
}

public class StdLogicError: StdException {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: IEGenCObject, _self: StdLogicError) {
    fatalError("A dummy internal initializer should not be called.")
  }

  override class var iegenCxxTypeName : String { return "std::logic_error" }

  override class func iegenConstructObject(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> StdLogicError {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case(StdDomainError.iegenCxxTypeName):
      return StdDomainError(iegenObj, owner)
    case(StdInvalidArgument.iegenCxxTypeName):
      return StdInvalidArgument(iegenObj, owner)
    case(StdLengthError.iegenCxxTypeName):
      return StdLengthError(iegenObj, owner)
    case(StdOutOfRange.iegenCxxTypeName):
      return StdOutOfRange(iegenObj, owner)
    default:
      return StdLogicError(iegenObj, owner)
    }
  }
}

public class StdRuntimeError: StdException {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: IEGenCObject, _self: StdRuntimeError) {
    fatalError("A dummy internal initializer should not be called.")
  }

  override class var iegenCxxTypeName : String { return "std::runtime_error" }

  override class func iegenConstructObject(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> StdRuntimeError {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case(StdOverflowError.iegenCxxTypeName):
      return StdOverflowError(iegenObj, owner)
    case(StdRangeError.iegenCxxTypeName):
      return StdRangeError(iegenObj, owner)
    case(StdUnderflowError.iegenCxxTypeName):
      return StdUnderflowError(iegenObj, owner)
    default:
      return StdRuntimeError(iegenObj, owner)
    }
  }
}

public class StdDomainError: StdLogicError {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::domain_error" }
}

public class StdInvalidArgument: StdLogicError {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::invalid_argument" }
}

public class StdLengthError: StdLogicError {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::length_error" }
}

public class StdOutOfRange: StdLogicError {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::out_of_range" }
}

public class StdRangeError: StdRuntimeError {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::range_error" }
}

public class StdOverflowError: StdRuntimeError {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::overflow_error" }
}

public class StdUnderflowError: StdRuntimeError {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::underflow_error" }
}

public class StdBadAlloc: StdException {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::bad_alloc" }
}

public class StdBadCast: StdException {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::bad_cast" }
}

public class StdBadTypeId: StdException {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  override class var iegenCxxTypeName : String { return "std::bad_typeid" }
}
