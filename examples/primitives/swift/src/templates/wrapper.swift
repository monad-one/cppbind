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
/**
 * comments
 * 
 */
public class WrapperPairStrings  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_WrapperPairStrings(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init(value: (String, String)) {

        let _first_swift_to_sc_value = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
        let _second_swift_to_sc_value = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
        defer {
          _first_swift_to_sc_value.deallocate()
          _second_swift_to_sc_value.deallocate()
        }
        var swift_to_sc_value = CDataPair()
        swift_to_sc_value.first = UnsafeMutableRawPointer(_first_swift_to_sc_value)
        swift_to_sc_value.second = UnsafeMutableRawPointer(_second_swift_to_sc_value)
        let first_value = value.0
        let second_value = value.1
        let swift_to_sc_first_value = strdup(first_value)!
        let swift_to_sc_second_value = strdup(second_value)!
        _first_swift_to_sc_value[0] = swift_to_sc_first_value
        _second_swift_to_sc_value[0] = swift_to_sc_second_value
        self.init(create_WrapperPairStrings(swift_to_sc_value), true)
    }
    
    public var value: (String, String) {
        get {
            let result = _prop_get_WrapperPairStrings_value(cself)
            let _tmp_pair_first_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: result.first.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: 1)
            let _tmp_pair_second_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: result.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: 1)
            defer {
              _tmp_pair_first_result_data.deallocate()
              _tmp_pair_second_result_data.deallocate()
            }
            let first_result = _tmp_pair_first_result_data[0]
            let second_result = _tmp_pair_second_result_data[0]
            let sc_to_swift_first_result = String(cString: first_result)
            defer {
              first_result.deallocate()
            }
            let sc_to_swift_second_result = String(cString: second_result)
            defer {
              second_result.deallocate()
            }
            let sc_to_swift_result: (String, String) = (sc_to_swift_first_result, sc_to_swift_second_result)
            return sc_to_swift_result
        }
        
        
        set(value) {
            let _first_swift_to_sc_value = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
            let _second_swift_to_sc_value = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
            defer {
              _first_swift_to_sc_value.deallocate()
              _second_swift_to_sc_value.deallocate()
            }
            var swift_to_sc_value = CDataPair()
            swift_to_sc_value.first = UnsafeMutableRawPointer(_first_swift_to_sc_value)
            swift_to_sc_value.second = UnsafeMutableRawPointer(_second_swift_to_sc_value)
            let first_value = value.0
            let second_value = value.1
            let swift_to_sc_first_value = strdup(first_value)!
            let swift_to_sc_second_value = strdup(second_value)!
            _first_swift_to_sc_value[0] = swift_to_sc_first_value
            _second_swift_to_sc_value[0] = swift_to_sc_second_value
            _prop_set_WrapperPairStrings_value(cself, swift_to_sc_value)
        }
        
    }
    
}
/**
 * comments
 * 
 */
public class WrapperPairIntInt  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_WrapperPairIntInt(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init(value: (Int, Int)) {

        let _first_swift_to_sc_value = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
        let _second_swift_to_sc_value = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
        defer {
          _first_swift_to_sc_value.deallocate()
          _second_swift_to_sc_value.deallocate()
        }
        var swift_to_sc_value = CDataPair()
        swift_to_sc_value.first = UnsafeMutableRawPointer(_first_swift_to_sc_value)
        swift_to_sc_value.second = UnsafeMutableRawPointer(_second_swift_to_sc_value)
        let first_value = value.0
        let second_value = value.1
        let swift_to_sc_first_value = CInt(first_value)
        let swift_to_sc_second_value = CInt(second_value)
        _first_swift_to_sc_value[0] = swift_to_sc_first_value
        _second_swift_to_sc_value[0] = swift_to_sc_second_value
        self.init(create_WrapperPairIntInt(swift_to_sc_value), true)
    }
    
    public var value: (Int, Int) {
        get {
            let result = _prop_get_WrapperPairIntInt_value(cself)
            let _tmp_pair_first_result_data = UnsafeBufferPointer<CInt>(start: result.first.assumingMemoryBound(to: CInt.self), count: 1)
            let _tmp_pair_second_result_data = UnsafeBufferPointer<CInt>(start: result.second.assumingMemoryBound(to: CInt.self), count: 1)
            defer {
              _tmp_pair_first_result_data.deallocate()
              _tmp_pair_second_result_data.deallocate()
            }
            let first_result = _tmp_pair_first_result_data[0]
            let second_result = _tmp_pair_second_result_data[0]
            let sc_to_swift_first_result = Int(first_result)
            let sc_to_swift_second_result = Int(second_result)
            let sc_to_swift_result: (Int, Int) = (sc_to_swift_first_result, sc_to_swift_second_result)
            return sc_to_swift_result
        }
        
        
        set(value) {
            let _first_swift_to_sc_value = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
            let _second_swift_to_sc_value = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
            defer {
              _first_swift_to_sc_value.deallocate()
              _second_swift_to_sc_value.deallocate()
            }
            var swift_to_sc_value = CDataPair()
            swift_to_sc_value.first = UnsafeMutableRawPointer(_first_swift_to_sc_value)
            swift_to_sc_value.second = UnsafeMutableRawPointer(_second_swift_to_sc_value)
            let first_value = value.0
            let second_value = value.1
            let swift_to_sc_first_value = CInt(first_value)
            let swift_to_sc_second_value = CInt(second_value)
            _first_swift_to_sc_value[0] = swift_to_sc_first_value
            _second_swift_to_sc_value[0] = swift_to_sc_second_value
            _prop_set_WrapperPairIntInt_value(cself, swift_to_sc_value)
        }
        
    }
    
}
/**
 * comments
 * 
 */
public class WrapperString  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_WrapperString(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init(value: String) {

        let swift_to_sc_value = strdup(value)!
        self.init(create_WrapperString(swift_to_sc_value), true)
    }
    
    public var value: String {
        get {
            let result = _prop_get_WrapperString_value(cself)
            let sc_to_swift_result = String(cString: result)
            defer {
              result.deallocate()
            }
            return sc_to_swift_result
        }
        
        
        set(value) {
            let swift_to_sc_value = strdup(value)!
            _prop_set_WrapperString_value(cself, swift_to_sc_value)
        }
        
    }
    
}