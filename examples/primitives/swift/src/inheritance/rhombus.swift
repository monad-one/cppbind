/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/04/2022-14:10.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public protocol RhombusFigure: Parallelogram {
}

extension RhombusFigure {
}

public class RhombusFigureImpl: RhombusFigure {
  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_RhombusFigureImpl(cself, owner)
  }

  public convenience init(diagonal1: Double, diagonal2: Double) {
    var err = IEGenCObject()
    self.init(create_RhombusFigure(diagonal1, diagonal2, &err), true)
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

}
