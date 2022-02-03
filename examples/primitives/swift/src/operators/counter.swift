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
 * An example for with overloaded methods.
 */
public class Counter {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_Counter(cself, owner)
  }

  /**
   * Counter constructor.
   */
  public convenience init(count: Int) {
    let swifttosccount = CInt(count)
    var err = IEGenCErrorObj()
    self.init(create_Counter(swifttosccount, &err), true)
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

  /**
   * Getter for count.
   */
  public var count: Int {
    get {
      let result = _prop_get_Counter_count(cself)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }
  }

  /**
   * Plus operator
   */
  public static func +(cself: Counter, counter: Counter) -> Counter {
    let swifttosccounter = counter.cself
    var err = IEGenCErrorObj()
    let result = _func_Counter__add_(cself.cself, swifttosccounter, &err)
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
    var sctoswiftresult: Counter
    sctoswiftresult = Counter(result, true)
    return sctoswiftresult
  }

  public static func >(cself: Counter, counter: Counter) -> Bool {
    let swifttosccounter = counter.cself
    var err = IEGenCErrorObj()
    let result = _func_Counter__gt_(cself.cself, swifttosccounter, &err)
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
    return result
  }

  public static func +=(cself: Counter, counter: Counter) -> Counter {
    let swifttosccounter = counter.cself
    var err = IEGenCErrorObj()
    let result = _func_Counter__iadd_(cself.cself, swifttosccounter, &err)
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
    var sctoswiftresult: Counter
    sctoswiftresult = Counter(result)
    return sctoswiftresult
  }

}
