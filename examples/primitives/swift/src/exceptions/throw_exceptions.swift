/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/06/2021-18:25.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class ThrowExc  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_ThrowExc(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init(do_throw: Bool = false) throws {

        
        var err = ErrorObj()
        self.init(create_ThrowExc(do_throw, &err), true)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    throw StdInvalidArgument(CObject(type: nil, ptr: err.err_ptr), true)
                case(2):
                    let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
    }
    
    public var prop: String {
        get {
            let result = _prop_get_ThrowExc_prop(cself)
            let sc_to_swift_result = String(cString: result)
            defer {
              result.deallocate()
            }
            return sc_to_swift_result
        }
        
        
        set(value) {
            let swift_to_sc_value = strdup(value)!
            _prop_set_ThrowExc_prop(cself, swift_to_sc_value)
        }
        
    }
    
    public static func getByKey(m: Dictionary<Int, Int>, key: Int) throws -> Int {

        let _key_swift_to_sc_m = UnsafeMutablePointer<CInt>.allocate(capacity: m.count)
        let _val_swift_to_sc_m = UnsafeMutablePointer<CInt>.allocate(capacity: m.count)
        var swift_to_sc_m = CDataMap()
        swift_to_sc_m.keys = UnsafeMutableRawPointer(_key_swift_to_sc_m)
        swift_to_sc_m.values = UnsafeMutableRawPointer(_val_swift_to_sc_m)
        swift_to_sc_m.size = Int64(m.count)
        var _i_m = 0
        for (key_m, val_m) in m {
            let swift_to_sc_key_m = CInt(key_m)
            let swift_to_sc_val_m = CInt(val_m)
            _key_swift_to_sc_m[_i_m] = swift_to_sc_key_m
            _val_swift_to_sc_m[_i_m] = swift_to_sc_val_m
            _i_m += 1
        }
        let swift_to_sc_key = CInt(key)
        var err = ErrorObj()
        let result = _func_ThrowExc_getByKey(swift_to_sc_m, swift_to_sc_key, &err)
          
        swift_to_sc_m.keys.deallocate()
        swift_to_sc_m.values.deallocate()
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    throw StdOutOfRange(CObject(type: nil, ptr: err.err_ptr), true)
                case(2):
                    throw SystemError(CObject(type: nil, ptr: err.err_ptr), true)
                case(3):
                    let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      let sc_to_swift_result = Int(result)
      return sc_to_swift_result
    }
    /**
     * Throws exception with return value of type string.
     */
    public static func throwsWithReturnValueString() throws -> String {

        var err = ErrorObj()
        let result = _func_ThrowExc_throwsWithReturnValueString(&err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    throw StdInvalidArgument(CObject(type: nil, ptr: err.err_ptr), true)
                case(2):
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
     * Throws exception with return value of iegen type.
     */
    public static func throwsWithReturnValuePtr() throws -> Task {

        var err = ErrorObj()
        let result = _func_ThrowExc_throwsWithReturnValuePtr(&err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    throw StdInvalidArgument(CObject(type: nil, ptr: err.err_ptr), true)
                case(2):
                    let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      var sc_to_swift_result: Task
        sc_to_swift_result = Task(result)
      return sc_to_swift_result
    }
}