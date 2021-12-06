/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/06/2021-17:49.
 * Please do not change it manually.
 */

import CWrapper
import Foundation
/**
 * Structure to describe user.
 */
public class UserInfo  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_UserInfo(cself)
            cself.type?.deallocate()
        }
    }
    
    /**
     * Creates user
     */
    public convenience init(user_name: String, user_age: UInt) {

        let swift_to_sc_user_name = strdup(user_name)!
        let swift_to_sc_user_age = CUnsignedInt(user_age)
        var err = ErrorObj()
        self.init(create_UserInfo(swift_to_sc_user_name, swift_to_sc_user_age, &err), true)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
    }
    
    /**
     * Age of user.
     */
    public var age: UInt {
        get {
            let result = _prop_get_UserInfo_age(cself)
            let sc_to_swift_result = UInt(result)
            return sc_to_swift_result
        }
    }

    /**
     * Name of user.
     */
    public var name: String {
        get {
            let result = _prop_get_UserInfo_name(cself)
            let sc_to_swift_result = String(cString: result)
            defer {
              result.deallocate()
            }
            return sc_to_swift_result
        }
    }

    /**
     * Some wishes of the user.
     */
    public var want_a_drink: Bool {
        get {
            let result = _prop_get_UserInfo_want_a_drink(cself)
            
            return result
        }
        
        set(value) {
            
            _prop_set_UserInfo_want_a_drink(cself, value)
        }
        
    }
    
}
/**
 * Host class.
 */
public class Host  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Host(cself)
            cself.type?.deallocate()
        }
    }
    
    /**
     * Creates host
     */
    public convenience init() {

        var err = ErrorObj()
        self.init(create_Host(&err), true)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
    }
    
    /**
     * Greeting function.
     */
    public func hello(user: UserInfo) -> String {

        let swift_to_sc_user = user.cself
        var err = ErrorObj()
        let result = _func_Host_hello(cself, swift_to_sc_user, &err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      let sc_to_swift_result = String(cString: result)
        defer {
          result.deallocate()
        }
      return sc_to_swift_result
    }
    /**
     * Welcome function.
     */
    public func welcome(user: UserInfo) -> String {

        let swift_to_sc_user = user.cself
        var err = ErrorObj()
        let result = _func_Host_welcome(cself, swift_to_sc_user, &err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      let sc_to_swift_result = String(cString: result)
        defer {
          result.deallocate()
        }
      return sc_to_swift_result
    }
}