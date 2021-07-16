/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/14/2021-14:15.
 * Please do not change it manually.
 */

import Foundation
import CWrapper



/**
 * comments
 * 
 */
public class JsonExamples  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_JsonExamples(cself)
      }
    }
    
    /**
     * comments
     * 
     */
    public convenience init() {

        self.init(create_JsonExamples(), true)
    }
    
    /**
     * comments
     * 
     */
    public func setJson(j: String) -> Void {

        let swift_to_sc_j = strdup(j)!
        var err = ErrorObj()
        _func_JsonExamples_setJson(cself, swift_to_sc_j, &err);
        if (err.is_err) {
            let err_type = Int(err.err_type)
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
     * comments
     * 
     */
    public func getJson() -> String {

        var err = ErrorObj()
        let result = _func_JsonExamples_getJson(cself, &err);
        let sc_to_swift_result = String(cString: result!)
        defer {
          result!.deallocate()
        }
        if (err.is_err) {
            let err_type = Int(err.err_type)
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(err.err_ptr, true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        return sc_to_swift_result;
    }
    /**
     * comments
     * 
     */
    public func getSimpleJsonExample() -> String {

        var err = ErrorObj()
        let result = _func_JsonExamples_getSimpleJsonExample(cself, &err);
        let sc_to_swift_result = String(cString: result!)
        defer {
          result!.deallocate()
        }
        if (err.is_err) {
            let err_type = Int(err.err_type)
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(err.err_ptr, true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        return sc_to_swift_result;
    }
}