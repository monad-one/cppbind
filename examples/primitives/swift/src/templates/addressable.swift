/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/09/2022-07:13.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * Addressable is a base class for all the objects, that have abs path.
 * FIXME: swift.descendants is given manually since we have an issue with descendants list formation for templates (#410)
 */
public protocol AddressableRoot {
  var cself: IEGenCObject { get }

  func keepIEGenReference(_ object: Any)
  /**
   * comments
   * @brief Get object's abs path based on parent's abs path and object's name
   * @return the abs path of the object
   */
  func absPath() -> String
}

extension AddressableRoot {
  /**
   * comments
   * @brief Get object's abs path based on parent's abs path and object's name
   * @return the abs path of the object
   */
  public func absPath() -> String {

    var err = IEGenCObject()
    let result = _func_IegenExample_AddressableRoot_absPath(cself, &err)
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
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}

public class AddressableImplRoot: AddressableRoot {
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
    release_IegenExample_AddressableImplRoot(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /**
   * comments
   */
  public convenience init(parent: Root, name: String) {
    let swifttoscparent = parent.cself
    let swifttoscname = strdup(name)!
    var err = IEGenCObject()
    self.init(create_IegenExample_AddressableRoot(swifttoscparent, swifttoscname, &err), true)
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
