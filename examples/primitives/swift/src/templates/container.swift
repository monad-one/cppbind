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
 * An example interface which descendant types are templates. Used for an example of downcast in target language.
 */
public protocol Container {
  var cself: IEGenCObject { get }

}

extension Container {
}

public class ContainerImpl: Container {
  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_ContainerImpl(cself, owner)
  }

}

/**
 * An example of usage for a type which descendants are template types.
 * Used for an example of downcast in target language.
 */
public class ContainerHolder {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_ContainerHolder(cself, owner)
  }

  public convenience init(container: Container) {
    let swifttosccontainer = container.cself
    var err = IEGenCErrorObj()
    self.init(create_ContainerHolder(swifttosccontainer, &err), true)
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

  public var container: Container {
    get {
      let result = _prop_get_ContainerHolder_container(cself)
      var sctoswiftresult: Container
      let resultIndex = String(cString: result.type)
      switch(resultIndex) {
      case("iegen::example::Stack<iegen::example::Project>"):
        sctoswiftresult = StackPrj(result)
      case("iegen::example::Stack<iegen::example::Task>"):
        sctoswiftresult = StackTask(result)
      case("iegen::example::Stack<iegen::example::Number<int>>"):
        sctoswiftresult = StackNumInt(result)
      default:
        sctoswiftresult = ContainerImpl(result)
      }
      return sctoswiftresult
    }
  }

}
