/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/07/2022-15:06.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Teacher {

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
    release_IegenExample_Teacher(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var err = IEGenCObject()
    self.init(create_IegenExample_Teacher(&err), true)
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

  public func addStudent(s: Student) -> Void {

    let swifttoscs = s.cself
    var err = IEGenCObject()
    _func_IegenExample_Teacher_addStudent(cself, swifttoscs, &err)
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

  public func students() -> Array<Student> {

    var err = IEGenCObject()
    let result = _func_IegenExample_Teacher_students(cself, &err)
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
    let _resultBuffer = UnsafeBufferPointer<IEGenCObject>(
      start: result.data.assumingMemoryBound(to: IEGenCObject.self),
      count: Int(result.size))
    var sctoswiftresult: [Student] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      var sctoswiftresultValue: Student
      sctoswiftresultValue = Student(resultValue, true)
      sctoswiftresult.append(sctoswiftresultValue)
    }
    return sctoswiftresult
  }

}
