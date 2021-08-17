/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/12/2021-13:32.
 * Please do not change it manually.
 */

import Foundation
import CWrapper


/**
 * comments
 * 
 */
public class Object  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Object(cself)
        }
    }
    
    
    
    /**
     * String representation for user readability
     * @return result of toReprString by default
     */
    public func toString() -> String {

        var err = ErrorObj()
        let result = _func_Object_toString(cself, &err);
        let sc_to_swift_result = String(cString: result)
        defer{
          result.deallocate()
        }
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
        return sc_to_swift_result;
    }
    /**
     * Human readable class name
     * @return class name
     */
    public func className() -> String {

        var err = ErrorObj()
        let result = _func_Object_className(cself, &err);
        let sc_to_swift_result = String(cString: result)
        defer{
          result.deallocate()
        }
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
        return sc_to_swift_result;
    }
    /**
     * Compare on equality two objects
     * @param other is the second one
     * @return is equals two objects
     */
    public func equals(other: Object) -> Bool {

        let swift_to_sc_other = other.cself
        var err = ErrorObj()
        let result = _func_Object_equals(cself, swift_to_sc_other, &err);
        
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
        return result;
    }
    /**
     * Hash for object. Used in wrappers (java, obj-c, python) to define the hash function
     * @return hash of the object
     */
    public func hash() -> CUnsignedLong {

        var err = ErrorObj()
        let result = _func_Object_hash(cself, &err);
        
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
        return result;
    }
    /**
     * Detailed string representation only for debug porpoises
     * @return object state as string
     */
    public func debugInfo() -> String {

        var err = ErrorObj()
        let result = _func_Object_debugInfo(cself, &err);
        let sc_to_swift_result = String(cString: result)
        defer{
          result.deallocate()
        }
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
        return sc_to_swift_result;
    }
    /**
     * The object's size in bytes
     * @return bytes count
     */
    public func bytesCount() -> CUnsignedLong {

        var err = ErrorObj()
        let result = _func_Object_bytesCount(cself, &err);
        
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
        return result;
    }
}