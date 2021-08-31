/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/31/2021-12:59.
 * Please do not change it manually.
 */

import Foundation
import CWrapper



public class SystemError : StdException {
    
    /**
     * comments
     * 
     */
    public convenience init(message: String) {

        let swift_to_sc_message = strdup(message)!
        self.init(create_SystemError(swift_to_sc_message), true)
    }
    
    /**
     * comments
     * 
     */
    public override func what() -> String {

        var err = ErrorObj()
        let result = _func_SystemError_what(cself, &err)
        let sc_to_swift_result = String(cString: result)
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
        return sc_to_swift_result
    }
}

public class FileError : SystemError {
    
    
    public convenience init(message: String) {

        let swift_to_sc_message = strdup(message)!
        self.init(create_FileError(swift_to_sc_message), true)
    }
    
    /**
     * comments
     * 
     */
    public override func what() -> String {

        var err = ErrorObj()
        let result = _func_FileError_what(cself, &err)
        let sc_to_swift_result = String(cString: result)
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
        return sc_to_swift_result
    }
}