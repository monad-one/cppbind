/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/05/2021-13:00.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Integer  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Integer(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init(n: Int) {

        let swift_to_sc_n = CInt(n)
        self.init(create_Integer(swift_to_sc_n), true)
    }
    /**
     * value getter
     */
    public var value: Int {
        get {
            let result = _prop_get_Integer_value(cself)
            let sc_to_swift_result = Int(result)
            return sc_to_swift_result
        }
        
    }
    
}

public class MiscExc  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_MiscExc(cself)
            cself.type?.deallocate()
        }
    }
    
    
    
    
    public static func returnInteger(do_throw: Bool) throws -> Integer {

        
        var err = ErrorObj()
        let result = _func_MiscExc_returnInteger(do_throw, &err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    throw StdOutOfRange(CObject(type: nil, ptr: err.err_ptr), true)
                case(2):
                    let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      var sc_to_swift_result: Integer
        sc_to_swift_result = Integer(result)
      return sc_to_swift_result
    }

    public static func raiseErrorByType(err_type: String) throws -> Void {

        let swift_to_sc_err_type = strdup(err_type)!
        var err = ErrorObj()
        _func_MiscExc_raiseErrorByType(swift_to_sc_err_type, &err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    throw StdRuntimeError(CObject(type: nil, ptr: err.err_ptr), true)
                case(2):
                    throw FileError(CObject(type: nil, ptr: err.err_ptr), true)
                case(3):
                    throw SystemError(CObject(type: nil, ptr: err.err_ptr), true)
                case(4):
                    throw SimpleChildException(CObject(type: nil, ptr: err.err_ptr), true)
                case(5):
                    throw SimpleBaseException(CObject(type: nil, ptr: err.err_ptr), true)
                case(6):
                    throw StdException(CObject(type: nil, ptr: err.err_ptr), true)
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
    }
}