/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/17/2021-05:35.
 * Please do not change it manually.
 */

import Foundation
import CWrapper



public class Employee  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Employee(cself)
        }
    }
    
    
    public convenience init(name: String) {

        let swift_to_sc_name = strdup(name)!
        self.init(create_Employee(swift_to_sc_name), true)
    }

    public convenience init(age: Int, email: String = "") {

        let swift_to_sc_age = CInt(age)
        let swift_to_sc_email = strdup(email)!
        self.init(create_Employee_1(swift_to_sc_age, swift_to_sc_email), true)
    }
    

    public var name: String {
        get {
            let result = _prop_get_Employee_name(cself);
            let sc_to_swift_result = String(cString: result)
            defer{
              result.deallocate()
            }
            return sc_to_swift_result
        }
        
    }


    public var email: String {
        get {
            let result = _prop_get_Employee_email(cself);
            let sc_to_swift_result = String(cString: result)
            defer{
              result.deallocate()
            }
            return sc_to_swift_result
        }
        
    }


    public var age: Int {
        get {
            let result = _prop_get_Employee_age(cself);
            let sc_to_swift_result = Int(result)
            return sc_to_swift_result
        }
        
    }
    
    public func setData(name: String, age: Int, email: String = "") -> Void {

        let swift_to_sc_name = strdup(name)!
        let swift_to_sc_age = CInt(age)
        let swift_to_sc_email = strdup(email)!
        var err = ErrorObj()
        _func_Employee_setData(cself, swift_to_sc_name, swift_to_sc_age, swift_to_sc_email, &err);
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

    public func setData(age: Int) -> Void {

        let swift_to_sc_age = CInt(age)
        var err = ErrorObj()
        _func_Employee_setData_1(cself, swift_to_sc_age, &err);
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
}