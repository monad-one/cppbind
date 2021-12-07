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

public class Car {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_Car(cself)
    }
  }

  public convenience init(cost: Int) {
    let swifttosccost = CInt(cost)
    var err = ErrorObj()
    self.init(create_Car(swifttosccost, &err), true)
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
   * value getter
   */
  public var cost: Int {
    get {
      let result = _prop_get_Car_cost(cself)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }
  }

  public func setCostWithCarSharedPtr(sp: Car) -> Void {

    let swifttoscsp = sp.cself
    var err = ErrorObj()
    _func_Car_setCostWithCarSharedPtr(cself, swifttoscsp, &err)
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
  }

  public func setCostWithCar(sp: Car) -> Void {

    let swifttoscsp = sp.cself
    var err = ErrorObj()
    _func_Car_setCostWithCar(cself, swifttoscsp, &err)
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
  }

  /**
   * comments
   * 
   */
  public func setCostWithCarConstSharedPtr(sp: Car) -> Void {

    let swifttoscsp = sp.cself
    var err = ErrorObj()
    _func_Car_setCostWithCarConstSharedPtr(cself, swifttoscsp, &err)
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
  }

  /**
   * comments
   * 
   */
  public func makeConstSharedPtr(sp: Car) -> Car {

    let swifttoscsp = sp.cself
    var err = ErrorObj()
    let result = _func_Car_makeConstSharedPtr(cself, swifttoscsp, &err)
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
    let sctoswiftresult = Car(result, true)
    return sctoswiftresult
  }

  public func setCostWithCarRef(sp: Car) -> Void {

    let swifttoscsp = sp.cself
    var err = ErrorObj()
    _func_Car_setCostWithCarRef(cself, swifttoscsp, &err)
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
  }

  public func setCostWithCarPtr(sp: Car) -> Void {

    let swifttoscsp = sp.cself
    var err = ErrorObj()
    _func_Car_setCostWithCarPtr(cself, swifttoscsp, &err)
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
  }

  public func getNewCarSharedPtr() -> Car {

    var err = ErrorObj()
    let result = _func_Car_getNewCarSharedPtr(cself, &err)
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
    let sctoswiftresult = Car(result, true)
    return sctoswiftresult
  }

}

public class CarUsage {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_CarUsage(cself)
    }
  }

  public convenience init(car: Car) {
    let swifttosccar = car.cself
    var err = ErrorObj()
    self.init(create_CarUsage(swifttosccar, &err), true)
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
   * Iegen supports only by value return in case shared_ref is set
   */
  public func getCar() -> Car {

    var err = ErrorObj()
    let result = _func_CarUsage_getCar(cself, &err)
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
    let sctoswiftresult = Car(result, true)
    return sctoswiftresult
  }

}
