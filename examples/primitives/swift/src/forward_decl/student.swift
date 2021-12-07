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

public class Student {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_Student(cself)
    }
  }

  public convenience init(stName: String) {
    let swifttoscstName = strdup(stName)!
    var err = ErrorObj()
    self.init(create_Student(swifttoscstName, &err), true)
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

  public convenience init(teachers: Array<Teacher>) {
    let _swifttoscteachersData = UnsafeMutablePointer<UnsafeMutableRawPointer>.allocate(capacity: teachers.count)
    var swifttoscteachers = CDataArray()
    swifttoscteachers.data = UnsafeMutableRawPointer(_swifttoscteachersData)
    swifttoscteachers.size = Int64(teachers.count)
    for i in 0..<teachers.count {
      let teachersVal = teachers[i]
      let swifttoscteachersVal = teachersVal.cself
      _swifttoscteachersData[i] = swifttoscteachersVal
    }
    var err = ErrorObj()
    self.init(create_Student_1(swifttoscteachers, &err), true)
    
    swifttoscteachers.data.deallocate()
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

  public var name: String {
    get {
      let result = _prop_get_Student_name(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = strdup(value)!
      _prop_set_Student_name(cself, swifttoscvalue)
    }
  }

  public func addTeacher(t: Teacher) -> Void {

    let swifttosct = t.cself
    var err = ErrorObj()
    _func_Student_addTeacher(cself, swifttosct, &err)
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

  public func teachers() -> Array<Teacher> {

    var err = ErrorObj()
    let result = _func_Student_teachers(cself, &err)
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
    let _resultBuffer = UnsafeBufferPointer<UnsafeMutableRawPointer>(
      start: result.data.assumingMemoryBound(to: UnsafeMutableRawPointer.self),
      count: Int(result.size))
    var sctoswiftresult: [Teacher] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      let sctoswiftresultValue = Teacher(resultValue)
      sctoswiftresult.append(sctoswiftresultValue)
    }
    return sctoswiftresult
  }

}
