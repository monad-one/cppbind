/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/08/2021-09:10.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class DateTime: Date, Time {
  public convenience init(d: Int, mo: Int, y: Int, h: Int, mi: Int, s: Int) {
    let swifttoscd = CInt(d)
    let swifttoscmo = CInt(mo)
    let swifttoscy = CInt(y)
    let swifttosch = CInt(h)
    let swifttoscmi = CInt(mi)
    let swifttoscs = CInt(s)
    var err = ErrorObj()
    self.init(create_DateTime(swifttoscd, swifttoscmo, swifttoscy, swifttosch, swifttoscmi, swifttoscs, &err), true)
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

  public var datetime: String {
    get {
      let result = _prop_get_DateTime_datetime(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }
  }

  public override func value() -> String {

    var err = ErrorObj()
    let result = _func_DateTime_value(cself, &err)
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
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}
