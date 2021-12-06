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
 * A global function example.
 */
public func concat(str1: String, str2: String) -> String {
    let swift_to_sc_str1 = strdup(str1)!
    let swift_to_sc_str2 = strdup(str2)!
    var err = ErrorObj()
    let result = _func__concat(swift_to_sc_str1, swift_to_sc_str2, &err)
    let err_type = Int(err.err_type)
    if (err_type != 0) {
        switch(err_type) {
            case(1):
                let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                ExceptionHandler.handleUncaughtException(exc_obj.what())
            default:
                print("Unknown type")
        }
    }
    let sc_to_swift_result = String(cString: result)
    defer {
      result.deallocate()
    }
    return sc_to_swift_result
}

/**
 * A global template function example.
 */
public func max(arg0: Int, arg1: Int) -> Int {
    let swift_to_sc_arg0 = CInt(arg0)
    let swift_to_sc_arg1 = CInt(arg1)
    var err = ErrorObj()
    let result = _func__maxInt(swift_to_sc_arg0, swift_to_sc_arg1, &err)
    let err_type = Int(err.err_type)
    if (err_type != 0) {
        switch(err_type) {
            case(1):
                let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                ExceptionHandler.handleUncaughtException(exc_obj.what())
            default:
                print("Unknown type")
        }
    }
    let sc_to_swift_result = Int(result)
    return sc_to_swift_result
}

/**
 * A global template function example.
 */
public func max(arg0: String, arg1: String) -> String {
    let swift_to_sc_arg0 = strdup(arg0)!
    let swift_to_sc_arg1 = strdup(arg1)!
    var err = ErrorObj()
    let result = _func__maxString(swift_to_sc_arg0, swift_to_sc_arg1, &err)
    let err_type = Int(err.err_type)
    if (err_type != 0) {
        switch(err_type) {
            case(1):
                let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                ExceptionHandler.handleUncaughtException(exc_obj.what())
            default:
                print("Unknown type")
        }
    }
    let sc_to_swift_result = String(cString: result)
    defer {
      result.deallocate()
    }
    return sc_to_swift_result
}

/**
 * A global template function example.
 */
public func makePair(arg0: Project, arg1: Project) -> (Project, Project) {
    let swift_to_sc_arg0 = arg0.cself
    let swift_to_sc_arg1 = arg1.cself
    var err = ErrorObj()
    let result = _func_IegenExample_makePairProjectProject(swift_to_sc_arg0, swift_to_sc_arg1, &err)
    let err_type = Int(err.err_type)
    if (err_type != 0) {
        switch(err_type) {
            case(1):
                let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                ExceptionHandler.handleUncaughtException(exc_obj.what())
            default:
                print("Unknown type")
        }
    }
    let _tmp_pair_first_result_data = UnsafeBufferPointer<CObject>(start: result.first.assumingMemoryBound(to: CObject.self), count: 1)
    let _tmp_pair_second_result_data = UnsafeBufferPointer<CObject>(start: result.second.assumingMemoryBound(to: CObject.self), count: 1)
    defer {
      _tmp_pair_first_result_data.deallocate()
      _tmp_pair_second_result_data.deallocate()
    }
    let first_result = _tmp_pair_first_result_data[0]
    let second_result = _tmp_pair_second_result_data[0]
    var sc_to_swift_first_result: Project
    sc_to_swift_first_result = Project(first_result)
    var sc_to_swift_second_result: Project
    sc_to_swift_second_result = Project(second_result)
    let sc_to_swift_result: (Project, Project) = (sc_to_swift_first_result, sc_to_swift_second_result)
    return sc_to_swift_result
}

/**
 * A global template function example.
 */
public func makePair(arg0: Root, arg1: Project) -> (Root, Project) {
    let swift_to_sc_arg0 = arg0.cself
    let swift_to_sc_arg1 = arg1.cself
    var err = ErrorObj()
    let result = _func_IegenExample_makePairRootProject(swift_to_sc_arg0, swift_to_sc_arg1, &err)
    let err_type = Int(err.err_type)
    if (err_type != 0) {
        switch(err_type) {
            case(1):
                let exc_obj = StdException(CObject(type: nil, ptr: err.err_ptr), true)
                ExceptionHandler.handleUncaughtException(exc_obj.what())
            default:
                print("Unknown type")
        }
    }
    let _tmp_pair_first_result_data = UnsafeBufferPointer<CObject>(start: result.first.assumingMemoryBound(to: CObject.self), count: 1)
    let _tmp_pair_second_result_data = UnsafeBufferPointer<CObject>(start: result.second.assumingMemoryBound(to: CObject.self), count: 1)
    defer {
      _tmp_pair_first_result_data.deallocate()
      _tmp_pair_second_result_data.deallocate()
    }
    let first_result = _tmp_pair_first_result_data[0]
    let second_result = _tmp_pair_second_result_data[0]
    var sc_to_swift_first_result: Root
    sc_to_swift_first_result = Root(first_result)
    var sc_to_swift_second_result: Project
    sc_to_swift_second_result = Project(second_result)
    let sc_to_swift_result: (Root, Project) = (sc_to_swift_first_result, sc_to_swift_second_result)
    return sc_to_swift_result
}