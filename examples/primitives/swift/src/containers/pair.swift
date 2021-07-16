/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/14/2021-13:56.
 * Please do not change it manually.
 */

import Foundation
import CWrapper



/**
 * comments
 * 
 */
public class PairExamples  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_PairExamples(cself)
      }
    }
    
    /**
     * comments
     * 
     */
    public convenience init() {

        self.init(create_PairExamples(), true)
    }
    
    /**
     * comments
     * 
     */
    public func sumIntPairs(p1: (Int, Int), p2: (Int, Int)) -> (Int, Int) {

        let _first_swift_to_sc_p1 = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
        let _second_swift_to_sc_p1 = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
        defer {
          _first_swift_to_sc_p1.deallocate()
          _second_swift_to_sc_p1.deallocate()
        }
        var swift_to_sc_p1 = CDataPair()
        swift_to_sc_p1.first = UnsafeMutableRawPointer(_first_swift_to_sc_p1)
        swift_to_sc_p1.second = UnsafeMutableRawPointer(_second_swift_to_sc_p1)
        let first_p1 = p1.0
        let second_p1 = p1.1
        let swift_to_sc_first_p1 = CInt(first_p1)
        let swift_to_sc_second_p1 = CInt(second_p1)
        _first_swift_to_sc_p1[0] = swift_to_sc_first_p1
        _second_swift_to_sc_p1[0] = swift_to_sc_second_p1
        let _first_swift_to_sc_p2 = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
        let _second_swift_to_sc_p2 = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
        defer {
          _first_swift_to_sc_p2.deallocate()
          _second_swift_to_sc_p2.deallocate()
        }
        var swift_to_sc_p2 = CDataPair()
        swift_to_sc_p2.first = UnsafeMutableRawPointer(_first_swift_to_sc_p2)
        swift_to_sc_p2.second = UnsafeMutableRawPointer(_second_swift_to_sc_p2)
        let first_p2 = p2.0
        let second_p2 = p2.1
        let swift_to_sc_first_p2 = CInt(first_p2)
        let swift_to_sc_second_p2 = CInt(second_p2)
        _first_swift_to_sc_p2[0] = swift_to_sc_first_p2
        _second_swift_to_sc_p2[0] = swift_to_sc_second_p2
        var err = ErrorObj()
        let result = _func_PairExamples_sumIntPairs(cself, swift_to_sc_p1, swift_to_sc_p2, &err);
        let _tmp_pair_first_result_data = UnsafeBufferPointer<CInt>(start: result.first.assumingMemoryBound(to: CInt.self), count: 1)
        let _tmp_pair_second_result_data = UnsafeBufferPointer<CInt>(start: result.second.assumingMemoryBound(to: CInt.self), count: 1)
        defer {
          _tmp_pair_first_result_data.deallocate()
          _tmp_pair_second_result_data.deallocate()
        }
        let first_result = _tmp_pair_first_result_data[0];
        let second_result = _tmp_pair_second_result_data[0];
        let sc_to_swift_first_result = Int(first_result)
        let sc_to_swift_second_result = Int(second_result)
        let sc_to_swift_result: (Int, Int) = ( sc_to_swift_first_result, sc_to_swift_second_result )
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
    public func setNestedPair(p: ((String, String), (String, String))) -> Void {

        let _first_swift_to_sc_p = UnsafeMutablePointer<CDataPair>.allocate(capacity: 1)
        let _second_swift_to_sc_p = UnsafeMutablePointer<CDataPair>.allocate(capacity: 1)
        defer {
          _first_swift_to_sc_p.deallocate()
          _second_swift_to_sc_p.deallocate()
        }
        var swift_to_sc_p = CDataPair()
        swift_to_sc_p.first = UnsafeMutableRawPointer(_first_swift_to_sc_p)
        swift_to_sc_p.second = UnsafeMutableRawPointer(_second_swift_to_sc_p)
        let first_p = p.0
        let second_p = p.1
        let _first_swift_to_sc_first_p = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
            let _second_swift_to_sc_first_p = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
            defer {
              _first_swift_to_sc_first_p.deallocate()
              _second_swift_to_sc_first_p.deallocate()
            }
            var swift_to_sc_first_p = CDataPair()
            swift_to_sc_first_p.first = UnsafeMutableRawPointer(_first_swift_to_sc_first_p)
            swift_to_sc_first_p.second = UnsafeMutableRawPointer(_second_swift_to_sc_first_p)
            let first_first_p = first_p.0
            let second_first_p = first_p.1
            let swift_to_sc_first_first_p = strdup(first_first_p)!
            let swift_to_sc_second_first_p = strdup(second_first_p)!
            _first_swift_to_sc_first_p[0] = swift_to_sc_first_first_p
            _second_swift_to_sc_first_p[0] = swift_to_sc_second_first_p
        let _first_swift_to_sc_second_p = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
            let _second_swift_to_sc_second_p = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
            defer {
              _first_swift_to_sc_second_p.deallocate()
              _second_swift_to_sc_second_p.deallocate()
            }
            var swift_to_sc_second_p = CDataPair()
            swift_to_sc_second_p.first = UnsafeMutableRawPointer(_first_swift_to_sc_second_p)
            swift_to_sc_second_p.second = UnsafeMutableRawPointer(_second_swift_to_sc_second_p)
            let first_second_p = second_p.0
            let second_second_p = second_p.1
            let swift_to_sc_first_second_p = strdup(first_second_p)!
            let swift_to_sc_second_second_p = strdup(second_second_p)!
            _first_swift_to_sc_second_p[0] = swift_to_sc_first_second_p
            _second_swift_to_sc_second_p[0] = swift_to_sc_second_second_p
        _first_swift_to_sc_p[0] = swift_to_sc_first_p
        _second_swift_to_sc_p[0] = swift_to_sc_second_p
        var err = ErrorObj()
        _func_PairExamples_setNestedPair(cself, swift_to_sc_p, &err);
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
    public func getNestedPair() -> ((String, String), (String, String)) {

        var err = ErrorObj()
        let result = _func_PairExamples_getNestedPair(cself, &err);
        let _tmp_pair_first_result_data = UnsafeBufferPointer<CDataPair>(start: result.first.assumingMemoryBound(to: CDataPair.self), count: 1)
        let _tmp_pair_second_result_data = UnsafeBufferPointer<CDataPair>(start: result.second.assumingMemoryBound(to: CDataPair.self), count: 1)
        defer {
          _tmp_pair_first_result_data.deallocate()
          _tmp_pair_second_result_data.deallocate()
        }
        let first_result = _tmp_pair_first_result_data[0];
        let second_result = _tmp_pair_second_result_data[0];
        let _tmp_pair_first_first_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: first_result.first.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: 1)
            let _tmp_pair_second_first_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: first_result.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: 1)
            defer {
              _tmp_pair_first_first_result_data.deallocate()
              _tmp_pair_second_first_result_data.deallocate()
            }
            let first_first_result = _tmp_pair_first_first_result_data[0];
            let second_first_result = _tmp_pair_second_first_result_data[0];
            let sc_to_swift_first_first_result = String(cString: first_first_result)
                defer{
                  first_first_result.deallocate()
                }
            let sc_to_swift_second_first_result = String(cString: second_first_result)
                defer{
                  second_first_result.deallocate()
                }
            let sc_to_swift_first_result: (String, String) = ( sc_to_swift_first_first_result, sc_to_swift_second_first_result )
        let _tmp_pair_first_second_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: second_result.first.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: 1)
            let _tmp_pair_second_second_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: second_result.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: 1)
            defer {
              _tmp_pair_first_second_result_data.deallocate()
              _tmp_pair_second_second_result_data.deallocate()
            }
            let first_second_result = _tmp_pair_first_second_result_data[0];
            let second_second_result = _tmp_pair_second_second_result_data[0];
            let sc_to_swift_first_second_result = String(cString: first_second_result)
                defer{
                  first_second_result.deallocate()
                }
            let sc_to_swift_second_second_result = String(cString: second_second_result)
                defer{
                  second_second_result.deallocate()
                }
            let sc_to_swift_second_result: (String, String) = ( sc_to_swift_first_second_result, sc_to_swift_second_second_result )
        let sc_to_swift_result: ((String, String), (String, String)) = ( sc_to_swift_first_result, sc_to_swift_second_result )
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
    public func getStringPair() -> (String, String) {

        var err = ErrorObj()
        let result = _func_PairExamples_getStringPair(cself, &err);
        let _tmp_pair_first_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: result.first.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: 1)
        let _tmp_pair_second_result_data = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(start: result.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self), count: 1)
        defer {
          _tmp_pair_first_result_data.deallocate()
          _tmp_pair_second_result_data.deallocate()
        }
        let first_result = _tmp_pair_first_result_data[0];
        let second_result = _tmp_pair_second_result_data[0];
        let sc_to_swift_first_result = String(cString: first_result)
            defer{
              first_result.deallocate()
            }
        let sc_to_swift_second_result = String(cString: second_result)
            defer{
              second_result.deallocate()
            }
        let sc_to_swift_result: (String, String) = ( sc_to_swift_first_result, sc_to_swift_second_result )
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