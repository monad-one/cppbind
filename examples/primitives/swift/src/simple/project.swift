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

/**
 * Class holding project information.
 */
public class Project {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_Project(cself, owner)
  }

  /**
   * Project constructor.
   */
  public convenience init(title: String) {
    let swifttosctitle = strdup(title)!
    var err = IEGenCObject()
    self.init(create_Project(swifttosctitle, &err), true)
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

  /**
   * Get project´s title.
   */
  public var title: String {
    get {
      let result = _prop_get_Project_title(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }
  }

  /**
   * Add a task to project.
   */
  public func addTask(task: Task) -> Void {

    let swifttosctask = task.cself
    var err = IEGenCObject()
    _func_Project_addTask(cself, swifttosctask, &err)
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

  /**
   * Get project´s tasks.
   */
  public func tasks() -> Array<Task> {

    var err = IEGenCObject()
    let result = _func_Project_tasks(cself, &err)
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
    var sctoswiftresult: [Task] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      var sctoswiftresultValue: Task
      sctoswiftresultValue = Task(resultValue)
      sctoswiftresult.append(sctoswiftresultValue)
    }
    return sctoswiftresult
  }

}
