/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/08/2021-06:29.
 * Please do not change it manually.
 */

import Foundation
import CWrapper



public class NestedExamples  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_NestedExamples(cself)
        }
    }
    
    /**
     * comments
     * 
     */
    public convenience init() {

        self.init(create_NestedExamples(), true)
    }
    
    
    public func setNestedIntVector(v: Array<Array<Int>>) -> Void {

        let _data_swift_to_sc_v = UnsafeMutablePointer<CDataArray>.allocate(capacity: v.count)
        defer {
          for _i in 0..<v.count {
            _data_swift_to_sc_v[_i].data.deallocate()
          }

          _data_swift_to_sc_v.deallocate()
        }
        var swift_to_sc_v = CDataArray()
        swift_to_sc_v.data = UnsafeMutableRawPointer(_data_swift_to_sc_v)
        swift_to_sc_v.size = Int64(v.count)
        for _i in 0..<v.count {
          let value_v = v[_i]
          let _data_swift_to_sc_value_v = UnsafeMutablePointer<CInt>.allocate(capacity: value_v.count)
//             defer {
//               _data_swift_to_sc_value_v.deallocate()
//             }
            var swift_to_sc_value_v = CDataArray()
            swift_to_sc_value_v.data = UnsafeMutableRawPointer(_data_swift_to_sc_value_v)
            swift_to_sc_value_v.size = Int64(value_v.count)
            for _i in 0..<value_v.count {
              let value_value_v = value_v[_i]
              let swift_to_sc_value_value_v = CInt(value_value_v)
              _data_swift_to_sc_value_v[_i] = swift_to_sc_value_value_v
            }
          _data_swift_to_sc_v[_i] = swift_to_sc_value_v
        }
        var err = ErrorObj()
        _func_NestedExamples_setNestedIntVector(cself, swift_to_sc_v, &err)
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

    public func getNestedIntVector() -> Array<Array<Int>> {

        var err = ErrorObj()
        let result = _func_NestedExamples_getNestedIntVector(cself, &err)
        let _tmp_result_data = UnsafeBufferPointer<CDataArray>(start: result.data.assumingMemoryBound(to: CDataArray.self), count: Int(result.size))
        var sc_to_swift_result: [Array<Int>] = [] 
        defer {
          _tmp_result_data.deallocate()
        }
        for _i in 0..<Int(result.size) {
          let value_result = _tmp_result_data[_i]
          let _tmp_value_result_data = UnsafeBufferPointer<CInt>(start: value_result.data.assumingMemoryBound(to: CInt.self), count: Int(value_result.size))
            var sc_to_swift_value_result: [Int] = [] 
            defer {
              _tmp_value_result_data.deallocate()
            }
            for _i in 0..<Int(value_result.size) {
              let value_value_result = _tmp_value_result_data[_i]
              let sc_to_swift_value_value_result = Int(value_value_result)
              sc_to_swift_value_result.append(sc_to_swift_value_value_result)
            }
          sc_to_swift_result.append(sc_to_swift_value_result)
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
        return sc_to_swift_result
    }

    public func setNestedIntMap(m: Dictionary<Int, Dictionary<Int, Int>>) -> Void {

        let _key_swift_to_sc_m = UnsafeMutablePointer<CInt>.allocate(capacity: m.count)
        let _val_swift_to_sc_m = UnsafeMutablePointer<CDataMap>.allocate(capacity: m.count)
        defer {
           for _i in 0..<m.count {
               _val_swift_to_sc_m[_i].keys.deallocate()
               _val_swift_to_sc_m[_i].values.deallocate()
           }

          _key_swift_to_sc_m.deallocate()
          _val_swift_to_sc_m.deallocate()
        } 
        var swift_to_sc_m = CDataMap()
        swift_to_sc_m.keys = UnsafeMutableRawPointer(_key_swift_to_sc_m)
        swift_to_sc_m.values = UnsafeMutableRawPointer(_val_swift_to_sc_m)
        swift_to_sc_m.size = Int64(m.count)
        var _i_m = 0
        for (key_m, val_m) in m {
            let swift_to_sc_key_m = CInt(key_m)
            let _key_swift_to_sc_val_m = UnsafeMutablePointer<CInt>.allocate(capacity: val_m.count)
            let _val_swift_to_sc_val_m = UnsafeMutablePointer<CInt>.allocate(capacity: val_m.count)
//             defer {
//               _key_swift_to_sc_val_m.deallocate()
//               _val_swift_to_sc_val_m.deallocate()
//             }
            var swift_to_sc_val_m = CDataMap()
            swift_to_sc_val_m.keys = UnsafeMutableRawPointer(_key_swift_to_sc_val_m)
            swift_to_sc_val_m.values = UnsafeMutableRawPointer(_val_swift_to_sc_val_m)
            swift_to_sc_val_m.size = Int64(val_m.count)
            var _i_val_m = 0
            for (key_val_m, val_val_m) in val_m {
                let swift_to_sc_key_val_m = CInt(key_val_m)
                let swift_to_sc_val_val_m = CInt(val_val_m)
                _key_swift_to_sc_val_m[_i_val_m] = swift_to_sc_key_val_m
                _val_swift_to_sc_val_m[_i_val_m] = swift_to_sc_val_val_m
                _i_val_m += 1
            }
            _key_swift_to_sc_m[_i_m] = swift_to_sc_key_m
            _val_swift_to_sc_m[_i_m] = swift_to_sc_val_m
            _i_m += 1
        }
        var err = ErrorObj()
        _func_NestedExamples_setNestedIntMap(cself, swift_to_sc_m, &err)
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

    public func getNestedIntMap() -> Dictionary<Int, Dictionary<Int, Int>> {

        var err = ErrorObj()
        let result = _func_NestedExamples_getNestedIntMap(cself, &err)
        let _tmp_k_result_data = UnsafeBufferPointer<CInt>(start: result.keys.assumingMemoryBound(to: CInt.self), count: Int(result.size))
        let _tmp_v_result_data = UnsafeBufferPointer<CDataMap>(start: result.values.assumingMemoryBound(to: CDataMap.self), count: Int(result.size))
        var sc_to_swift_result: [Int:Dictionary<Int, Int>] = [:] 
        defer {
          _tmp_k_result_data.deallocate()
          _tmp_v_result_data.deallocate()
        } 
        for _i_result in 0..<Int(result.size) {
          let key_result = _tmp_k_result_data[_i_result]
          let value_result = _tmp_v_result_data[_i_result]
          do {
            let sc_to_swift_key_result = Int(key_result)
            let _tmp_k_value_result_data = UnsafeBufferPointer<CInt>(start: value_result.keys.assumingMemoryBound(to: CInt.self), count: Int(value_result.size))
            let _tmp_v_value_result_data = UnsafeBufferPointer<CInt>(start: value_result.values.assumingMemoryBound(to: CInt.self), count: Int(value_result.size))
            var sc_to_swift_value_result: [Int:Int] = [:] 
            defer {
              _tmp_k_value_result_data.deallocate()
              _tmp_v_value_result_data.deallocate()
            } 
            for _i_value_result in 0..<Int(value_result.size) {
              let key_value_result = _tmp_k_value_result_data[_i_value_result]
              let value_value_result = _tmp_v_value_result_data[_i_value_result]
              do {
                let sc_to_swift_key_value_result = Int(key_value_result)
                let sc_to_swift_value_value_result = Int(value_value_result)
                sc_to_swift_value_result[sc_to_swift_key_value_result] = sc_to_swift_value_value_result
              }
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
        return sc_to_swift_result
    }

    public func mixedExampleWithManyArgs(v1: Array<Array<Int>>, v2: Array<Array<Int>>, m1: Dictionary<Int, Dictionary<Int, Int>>, m2: Dictionary<Int, Dictionary<Int, Int>>) -> Void {

        let _data_swift_to_sc_v1 = UnsafeMutablePointer<CDataArray>.allocate(capacity: v1.count)
        defer {
          _data_swift_to_sc_v1.deallocate()
        }
        var swift_to_sc_v1 = CDataArray()
        swift_to_sc_v1.data = UnsafeMutableRawPointer(_data_swift_to_sc_v1)
        swift_to_sc_v1.size = Int64(v1.count)
        for _i in 0..<v1.count {
          let value_v1 = v1[_i]
          let _data_swift_to_sc_value_v1 = UnsafeMutablePointer<CInt>.allocate(capacity: value_v1.count)
            defer {
              _data_swift_to_sc_value_v1.deallocate()
            }
            var swift_to_sc_value_v1 = CDataArray()
            swift_to_sc_value_v1.data = UnsafeMutableRawPointer(_data_swift_to_sc_value_v1)
            swift_to_sc_value_v1.size = Int64(value_v1.count)
            for _i in 0..<value_v1.count {
              let value_value_v1 = value_v1[_i]
              let swift_to_sc_value_value_v1 = CInt(value_value_v1)
              _data_swift_to_sc_value_v1[_i] = swift_to_sc_value_value_v1
            }
          _data_swift_to_sc_v1[_i] = swift_to_sc_value_v1
        }
        let _data_swift_to_sc_v2 = UnsafeMutablePointer<CDataArray>.allocate(capacity: v2.count)
        defer {
          _data_swift_to_sc_v2.deallocate()
        }
        var swift_to_sc_v2 = CDataArray()
        swift_to_sc_v2.data = UnsafeMutableRawPointer(_data_swift_to_sc_v2)
        swift_to_sc_v2.size = Int64(v2.count)
        for _i in 0..<v2.count {
          let value_v2 = v2[_i]
          let _data_swift_to_sc_value_v2 = UnsafeMutablePointer<CInt>.allocate(capacity: value_v2.count)
            defer {
              _data_swift_to_sc_value_v2.deallocate()
            }
            var swift_to_sc_value_v2 = CDataArray()
            swift_to_sc_value_v2.data = UnsafeMutableRawPointer(_data_swift_to_sc_value_v2)
            swift_to_sc_value_v2.size = Int64(value_v2.count)
            for _i in 0..<value_v2.count {
              let value_value_v2 = value_v2[_i]
              let swift_to_sc_value_value_v2 = CInt(value_value_v2)
              _data_swift_to_sc_value_v2[_i] = swift_to_sc_value_value_v2
            }
          _data_swift_to_sc_v2[_i] = swift_to_sc_value_v2
        }
        let _key_swift_to_sc_m1 = UnsafeMutablePointer<CInt>.allocate(capacity: m1.count)
        let _val_swift_to_sc_m1 = UnsafeMutablePointer<CDataMap>.allocate(capacity: m1.count)
        defer {
          _key_swift_to_sc_m1.deallocate()
          _val_swift_to_sc_m1.deallocate()
        } 
        var swift_to_sc_m1 = CDataMap()
        swift_to_sc_m1.keys = UnsafeMutableRawPointer(_key_swift_to_sc_m1)
        swift_to_sc_m1.values = UnsafeMutableRawPointer(_val_swift_to_sc_m1)
        swift_to_sc_m1.size = Int64(m1.count)
        var _i_m1 = 0
        for (key_m1, val_m1) in m1 {
            let swift_to_sc_key_m1 = CInt(key_m1)
            let _key_swift_to_sc_val_m1 = UnsafeMutablePointer<CInt>.allocate(capacity: val_m1.count)
            let _val_swift_to_sc_val_m1 = UnsafeMutablePointer<CInt>.allocate(capacity: val_m1.count)
            defer {
              _key_swift_to_sc_val_m1.deallocate()
              _val_swift_to_sc_val_m1.deallocate()
            } 
            var swift_to_sc_val_m1 = CDataMap()
            swift_to_sc_val_m1.keys = UnsafeMutableRawPointer(_key_swift_to_sc_val_m1)
            swift_to_sc_val_m1.values = UnsafeMutableRawPointer(_val_swift_to_sc_val_m1)
            swift_to_sc_val_m1.size = Int64(val_m1.count)
            var _i_val_m1 = 0
            for (key_val_m1, val_val_m1) in val_m1 {
                let swift_to_sc_key_val_m1 = CInt(key_val_m1)
                let swift_to_sc_val_val_m1 = CInt(val_val_m1)
                _key_swift_to_sc_val_m1[_i_val_m1] = swift_to_sc_key_val_m1
                _val_swift_to_sc_val_m1[_i_val_m1] = swift_to_sc_val_val_m1
                _i_val_m1 += 1
            }
            _key_swift_to_sc_m1[_i_m1] = swift_to_sc_key_m1
            _val_swift_to_sc_m1[_i_m1] = swift_to_sc_val_m1
            _i_m1 += 1
        }
        let _key_swift_to_sc_m2 = UnsafeMutablePointer<CInt>.allocate(capacity: m2.count)
        let _val_swift_to_sc_m2 = UnsafeMutablePointer<CDataMap>.allocate(capacity: m2.count)
        defer {
          _key_swift_to_sc_m2.deallocate()
          _val_swift_to_sc_m2.deallocate()
        } 
        var swift_to_sc_m2 = CDataMap()
        swift_to_sc_m2.keys = UnsafeMutableRawPointer(_key_swift_to_sc_m2)
        swift_to_sc_m2.values = UnsafeMutableRawPointer(_val_swift_to_sc_m2)
        swift_to_sc_m2.size = Int64(m2.count)
        var _i_m2 = 0
        for (key_m2, val_m2) in m2 {
            let swift_to_sc_key_m2 = CInt(key_m2)
            let _key_swift_to_sc_val_m2 = UnsafeMutablePointer<CInt>.allocate(capacity: val_m2.count)
            let _val_swift_to_sc_val_m2 = UnsafeMutablePointer<CInt>.allocate(capacity: val_m2.count)
            defer {
              _key_swift_to_sc_val_m2.deallocate()
              _val_swift_to_sc_val_m2.deallocate()
            } 
            var swift_to_sc_val_m2 = CDataMap()
            swift_to_sc_val_m2.keys = UnsafeMutableRawPointer(_key_swift_to_sc_val_m2)
            swift_to_sc_val_m2.values = UnsafeMutableRawPointer(_val_swift_to_sc_val_m2)
            swift_to_sc_val_m2.size = Int64(val_m2.count)
            var _i_val_m2 = 0
            for (key_val_m2, val_val_m2) in val_m2 {
                let swift_to_sc_key_val_m2 = CInt(key_val_m2)
                let swift_to_sc_val_val_m2 = CInt(val_val_m2)
                _key_swift_to_sc_val_m2[_i_val_m2] = swift_to_sc_key_val_m2
                _val_swift_to_sc_val_m2[_i_val_m2] = swift_to_sc_val_val_m2
                _i_val_m2 += 1
            }
            _key_swift_to_sc_m2[_i_m2] = swift_to_sc_key_m2
            _val_swift_to_sc_m2[_i_m2] = swift_to_sc_val_m2
            _i_m2 += 1
        }
        var err = ErrorObj()
        _func_NestedExamples_mixedExampleWithManyArgs(cself, swift_to_sc_v1, swift_to_sc_v2, swift_to_sc_m1, swift_to_sc_m2, &err)
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

    public func setVectorOfIntMaps(v: Array<Dictionary<Int, Int>>) -> Void {

        let _data_swift_to_sc_v = UnsafeMutablePointer<CDataMap>.allocate(capacity: v.count)
        defer {
           for _i in 0..<v.count {
               _data_swift_to_sc_v[_i].keys.deallocate()
               _data_swift_to_sc_v[_i].values.deallocate()
           }

          _data_swift_to_sc_v.deallocate()
        }
        var swift_to_sc_v = CDataArray()
        swift_to_sc_v.data = UnsafeMutableRawPointer(_data_swift_to_sc_v)
        swift_to_sc_v.size = Int64(v.count)
        for _i in 0..<v.count {
          let value_v = v[_i]
          let _key_swift_to_sc_value_v = UnsafeMutablePointer<CInt>.allocate(capacity: value_v.count)
            let _val_swift_to_sc_value_v = UnsafeMutablePointer<CInt>.allocate(capacity: value_v.count)
//             defer {
//               _key_swift_to_sc_value_v.deallocate()
//               _val_swift_to_sc_value_v.deallocate()
//             }
            var swift_to_sc_value_v = CDataMap()
            swift_to_sc_value_v.keys = UnsafeMutableRawPointer(_key_swift_to_sc_value_v)
            swift_to_sc_value_v.values = UnsafeMutableRawPointer(_val_swift_to_sc_value_v)
            swift_to_sc_value_v.size = Int64(value_v.count)
            var _i_value_v = 0
            for (key_value_v, val_value_v) in value_v {
                let swift_to_sc_key_value_v = CInt(key_value_v)
                let swift_to_sc_val_value_v = CInt(val_value_v)
                _key_swift_to_sc_value_v[_i_value_v] = swift_to_sc_key_value_v
                _val_swift_to_sc_value_v[_i_value_v] = swift_to_sc_val_value_v
                _i_value_v += 1
            }
          _data_swift_to_sc_v[_i] = swift_to_sc_value_v
        }
        var err = ErrorObj()
        _func_NestedExamples_setVectorOfIntMaps(cself, swift_to_sc_v, &err)
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

    public func getVectorOfIntMaps() -> Array<Dictionary<Int, Int>> {

        var err = ErrorObj()
        let result = _func_NestedExamples_getVectorOfIntMaps(cself, &err)
        let _tmp_result_data = UnsafeBufferPointer<CDataMap>(start: result.data.assumingMemoryBound(to: CDataMap.self), count: Int(result.size))
        var sc_to_swift_result: [Dictionary<Int, Int>] = [] 
        defer {
          _tmp_result_data.deallocate()
        }
        for _i in 0..<Int(result.size) {
          let value_result = _tmp_result_data[_i]
          let _tmp_k_value_result_data = UnsafeBufferPointer<CInt>(start: value_result.keys.assumingMemoryBound(to: CInt.self), count: Int(value_result.size))
            let _tmp_v_value_result_data = UnsafeBufferPointer<CInt>(start: value_result.values.assumingMemoryBound(to: CInt.self), count: Int(value_result.size))
            var sc_to_swift_value_result: [Int:Int] = [:] 
            defer {
              _tmp_k_value_result_data.deallocate()
              _tmp_v_value_result_data.deallocate()
            } 
            for _i_value_result in 0..<Int(value_result.size) {
              let key_value_result = _tmp_k_value_result_data[_i_value_result]
              let value_value_result = _tmp_v_value_result_data[_i_value_result]
              do {
                let sc_to_swift_key_value_result = Int(key_value_result)
                let sc_to_swift_value_value_result = Int(value_value_result)
                sc_to_swift_value_result[sc_to_swift_key_value_result] = sc_to_swift_value_value_result
              }
            }
          sc_to_swift_result.append(sc_to_swift_value_result)
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
        return sc_to_swift_result
    }

    public func setMapOfIntVectors(m: Dictionary<Int, Array<Int>>) -> Void {

        let _key_swift_to_sc_m = UnsafeMutablePointer<CInt>.allocate(capacity: m.count)
        let _val_swift_to_sc_m = UnsafeMutablePointer<CDataArray>.allocate(capacity: m.count)
        defer {
           for _i in 0..<m.count {
               _val_swift_to_sc_m[_i].data.deallocate()
           }

          _key_swift_to_sc_m.deallocate()
          _val_swift_to_sc_m.deallocate()
        } 
        var swift_to_sc_m = CDataMap()
        swift_to_sc_m.keys = UnsafeMutableRawPointer(_key_swift_to_sc_m)
        swift_to_sc_m.values = UnsafeMutableRawPointer(_val_swift_to_sc_m)
        swift_to_sc_m.size = Int64(m.count)
        var _i_m = 0
        for (key_m, val_m) in m {
            let swift_to_sc_key_m = CInt(key_m)
            let _data_swift_to_sc_val_m = UnsafeMutablePointer<CInt>.allocate(capacity: val_m.count)
//             defer {
//               _data_swift_to_sc_val_m.deallocate()
//             }
            var swift_to_sc_val_m = CDataArray()
            swift_to_sc_val_m.data = UnsafeMutableRawPointer(_data_swift_to_sc_val_m)
            swift_to_sc_val_m.size = Int64(val_m.count)
            for _i in 0..<val_m.count {
              let value_val_m = val_m[_i]
              let swift_to_sc_value_val_m = CInt(value_val_m)
              _data_swift_to_sc_val_m[_i] = swift_to_sc_value_val_m
            }
            _key_swift_to_sc_m[_i_m] = swift_to_sc_key_m
            _val_swift_to_sc_m[_i_m] = swift_to_sc_val_m
            _i_m += 1
        }
        var err = ErrorObj()
        _func_NestedExamples_setMapOfIntVectors(cself, swift_to_sc_m, &err)
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

    public func getMapOfIntVectors() -> Dictionary<Int, Array<Int>> {

        var err = ErrorObj()
        let result = _func_NestedExamples_getMapOfIntVectors(cself, &err)
        let _tmp_k_result_data = UnsafeBufferPointer<CInt>(start: result.keys.assumingMemoryBound(to: CInt.self), count: Int(result.size))
        let _tmp_v_result_data = UnsafeBufferPointer<CDataArray>(start: result.values.assumingMemoryBound(to: CDataArray.self), count: Int(result.size))
        var sc_to_swift_result: [Int:Array<Int>] = [:] 
        defer {
          _tmp_k_result_data.deallocate()
          _tmp_v_result_data.deallocate()
        } 
        for _i_result in 0..<Int(result.size) {
          let key_result = _tmp_k_result_data[_i_result]
          let value_result = _tmp_v_result_data[_i_result]
          do {
            let sc_to_swift_key_result = Int(key_result)
            let _tmp_value_result_data = UnsafeBufferPointer<CInt>(start: value_result.data.assumingMemoryBound(to: CInt.self), count: Int(value_result.size))
            var sc_to_swift_value_result: [Int] = [] 
            defer {
              _tmp_value_result_data.deallocate()
            }
            for _i in 0..<Int(value_result.size) {
              let value_value_result = _tmp_value_result_data[_i]
              let sc_to_swift_value_value_result = Int(value_value_result)
              sc_to_swift_value_result.append(sc_to_swift_value_value_result)
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
        return sc_to_swift_result
    }
}