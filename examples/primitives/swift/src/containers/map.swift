/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/16/2021-14:25.
 * Please do not change it manually.
 */

import CWrapper
import Foundation
/**
 * comments
 * 
 */
public class MapItem  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_MapItem(cself)
        }
    }
    
    /**
     * comments
     * 
     */
    public convenience init(_value: Int) {

        let swift_to_sc__value = CInt(_value)
        self.init(create_MapItem(swift_to_sc__value), true)
    }
    
    /**
     * comments
     * 
     */
    public var value: Int {
        get {
            let result = _prop_get_MapItem_value(cself);
            let sc_to_swift_result = Int(result)
            return sc_to_swift_result
        }
        
        set(value) {
            let swift_to_sc_value = CInt(value)
            _prop_set_MapItem_value(cself, swift_to_sc_value)
        }
        
    }
    
}
/**
 * comments
 * 
 */
public class MapExamples  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_MapExamples(cself)
        }
    }
    
    /**
     * comments
     * 
     */
    public convenience init() {

        self.init(create_MapExamples(), true)
    }
    
    /**
     * comments
     * 
     */
    public func addStringPair(info: (String, String)) -> Void {

        let _first_swift_to_sc_info = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
        let _second_swift_to_sc_info = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
        defer {
          _first_swift_to_sc_info.deallocate()
          _second_swift_to_sc_info.deallocate()
        }
        var swift_to_sc_info = CDataPair()
        swift_to_sc_info.first = UnsafeMutableRawPointer(_first_swift_to_sc_info)
        swift_to_sc_info.second = UnsafeMutableRawPointer(_second_swift_to_sc_info)
        let first_info = info.0
        let second_info = info.1
        let swift_to_sc_first_info = strdup(first_info)!
        let swift_to_sc_second_info = strdup(second_info)!
        _first_swift_to_sc_info[0] = swift_to_sc_first_info
        _second_swift_to_sc_info[0] = swift_to_sc_second_info
        var err = ErrorObj()
        _func_MapExamples_addStringPair(cself, swift_to_sc_info, &err);
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
    /**
     * comments
     * 
     */
    public func addIntMap(info: Dictionary<Int, Int>) -> Void {

        let _key_swift_to_sc_info = UnsafeMutablePointer<CInt>.allocate(capacity: info.count)
        let _val_swift_to_sc_info = UnsafeMutablePointer<CInt>.allocate(capacity: info.count)
        defer {
          _key_swift_to_sc_info.deallocate()
          _val_swift_to_sc_info.deallocate()
        }
        var swift_to_sc_info = CDataMap()
        swift_to_sc_info.keys = UnsafeMutableRawPointer(_key_swift_to_sc_info)
        swift_to_sc_info.values = UnsafeMutableRawPointer(_val_swift_to_sc_info)
        swift_to_sc_info.size = Int64(info.count)
        var _i_info = 0
        for (key_info, val_info) in info {
            let swift_to_sc_key_info = CInt(key_info)
            let swift_to_sc_val_info = CInt(val_info)
            _key_swift_to_sc_info[_i_info] = swift_to_sc_key_info
            _val_swift_to_sc_info[_i_info] = swift_to_sc_val_info
            _i_info += 1
        }
        var err = ErrorObj()
        _func_MapExamples_addIntMap(cself, swift_to_sc_info, &err);
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
    /**
     * comments
     * 
     */
    public func addStringMap(info: Dictionary<String, String>) -> Void {

        let _key_swift_to_sc_info = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: info.count)
        let _val_swift_to_sc_info = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: info.count)
        defer {
          _key_swift_to_sc_info.deallocate()
          _val_swift_to_sc_info.deallocate()
        }
        var swift_to_sc_info = CDataMap()
        swift_to_sc_info.keys = UnsafeMutableRawPointer(_key_swift_to_sc_info)
        swift_to_sc_info.values = UnsafeMutableRawPointer(_val_swift_to_sc_info)
        swift_to_sc_info.size = Int64(info.count)
        var _i_info = 0
        for (key_info, val_info) in info {
            let swift_to_sc_key_info = strdup(key_info)!
            let swift_to_sc_val_info = strdup(val_info)!
            _key_swift_to_sc_info[_i_info] = swift_to_sc_key_info
            _val_swift_to_sc_info[_i_info] = swift_to_sc_val_info
            _i_info += 1
        }
        var err = ErrorObj()
        _func_MapExamples_addStringMap(cself, swift_to_sc_info, &err);
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
    /**
     * comments
     * 
     */
    public func getStringMap() -> Dictionary<String, String> {

        var err = ErrorObj()
        let result = _func_MapExamples_getStringMap(cself, &err);
        let _tmp_k_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: result.keys.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: Int(result.size))
        let _tmp_v_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: result.values.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: Int(result.size))
        var sc_to_swift_result: [String:String] = [:]
        defer {
          _tmp_k_result_data.deallocate()
          _tmp_v_result_data.deallocate()
        }
        for _i_result in 0..<Int(result.size) {
          let key_result = _tmp_k_result_data[_i_result];
          let value_result = _tmp_v_result_data[_i_result];
          do {
            let sc_to_swift_key_result = String(cString: key_result)
            defer{
              key_result.deallocate()
            }
            let sc_to_swift_value_result = String(cString: value_result)
            defer{
              value_result.deallocate()
            }
            sc_to_swift_result[sc_to_swift_key_result] = sc_to_swift_value_result
          }
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
     * comments
     * 
     */
    public func getIntMap() -> Dictionary<Int, Int> {

        var err = ErrorObj()
        let result = _func_MapExamples_getIntMap(cself, &err);
        let _tmp_k_result_data = UnsafeBufferPointer<CInt>(start: result.keys.assumingMemoryBound(to: CInt.self), count: Int(result.size))
        let _tmp_v_result_data = UnsafeBufferPointer<CInt>(start: result.values.assumingMemoryBound(to: CInt.self), count: Int(result.size))
        var sc_to_swift_result: [Int:Int] = [:]
        defer {
          _tmp_k_result_data.deallocate()
          _tmp_v_result_data.deallocate()
        }
        for _i_result in 0..<Int(result.size) {
          let key_result = _tmp_k_result_data[_i_result];
          let value_result = _tmp_v_result_data[_i_result];
          do {
            let sc_to_swift_key_result = Int(key_result)
            let sc_to_swift_value_result = Int(value_result)
            sc_to_swift_result[sc_to_swift_key_result] = sc_to_swift_value_result
          }
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
     * comments
     * 
     */
    public func addMixedMap(info: Dictionary<String, MapItem>) -> Void {

        let _key_swift_to_sc_info = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: info.count)
        let _val_swift_to_sc_info = UnsafeMutablePointer<UnsafeMutableRawPointer>.allocate(capacity: info.count)
        defer {
          _key_swift_to_sc_info.deallocate()
          _val_swift_to_sc_info.deallocate()
        }
        var swift_to_sc_info = CDataMap()
        swift_to_sc_info.keys = UnsafeMutableRawPointer(_key_swift_to_sc_info)
        swift_to_sc_info.values = UnsafeMutableRawPointer(_val_swift_to_sc_info)
        swift_to_sc_info.size = Int64(info.count)
        var _i_info = 0
        for (key_info, val_info) in info {
            let swift_to_sc_key_info = strdup(key_info)!
            let swift_to_sc_val_info = val_info.cself
            _key_swift_to_sc_info[_i_info] = swift_to_sc_key_info
            _val_swift_to_sc_info[_i_info] = swift_to_sc_val_info
            _i_info += 1
        }
        var err = ErrorObj()
        _func_MapExamples_addMixedMap(cself, swift_to_sc_info, &err);
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
    /**
     * comments
     * 
     */
    public func getMixedMap() -> Dictionary<String, MapItem> {

        var err = ErrorObj()
        let result = _func_MapExamples_getMixedMap(cself, &err);
        let _tmp_k_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: result.keys.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: Int(result.size))
        let _tmp_v_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.values.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: Int(result.size))
        var sc_to_swift_result: [String:MapItem] = [:]
        defer {
          _tmp_k_result_data.deallocate()
          _tmp_v_result_data.deallocate()
        }
        for _i_result in 0..<Int(result.size) {
          let key_result = _tmp_k_result_data[_i_result];
          let value_result = _tmp_v_result_data[_i_result];
          do {
            let sc_to_swift_key_result = String(cString: key_result)
            defer{
              key_result.deallocate()
            }
            let sc_to_swift_value_result = MapItem(value_result, true)
            sc_to_swift_result[sc_to_swift_key_result] = sc_to_swift_value_result
          }
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
}