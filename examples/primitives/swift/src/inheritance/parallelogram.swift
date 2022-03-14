/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/09/2022-07:12.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public protocol Parallelogram {
  var cself: IEGenCObject { get }

  func keepIEGenReference(_ object: Any)
  var area: Double { get }
  func perimeter() -> Double
  func equals(p: Parallelogram) -> Bool
}

extension Parallelogram {
  public var area: Double {
    var err = IEGenCObject()
    let result = _prop_get_IegenExample_Parallelogram_area(cself, &err)
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

  public func perimeter() -> Double {

    var err = IEGenCObject()
    let result = _func_IegenExample_Parallelogram_perimeter(cself, &err)
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

  public func equals(p: Parallelogram) -> Bool {

    let swifttoscp = p.cself
    var err = IEGenCObject()
    let result = _func_IegenExample_Parallelogram_equals(cself, swifttoscp, &err)
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

}

public class ParallelogramImpl: Parallelogram {
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
    release_IegenExample_ParallelogramImpl(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

}
