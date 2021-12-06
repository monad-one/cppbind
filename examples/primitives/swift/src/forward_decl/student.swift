/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/06/2021-06:54.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Student  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Student(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init(st_name: String) {

        let swift_to_sc_st_name = strdup(st_name)!
        self.init(create_Student(swift_to_sc_st_name), true)
    }

    public convenience init(teachers: Array<Teacher>) {

        let _data_swift_to_sc_teachers = UnsafeMutablePointer<CObject>.allocate(capacity: teachers.count)
        var swift_to_sc_teachers = CDataArray()
        swift_to_sc_teachers.data = UnsafeMutableRawPointer(_data_swift_to_sc_teachers)
        swift_to_sc_teachers.size = Int64(teachers.count)
        for _i in 0..<teachers.count {
            let value_teachers = teachers[_i]
            let swift_to_sc_value_teachers = value_teachers.cself
            _data_swift_to_sc_teachers[_i] = swift_to_sc_value_teachers
        }
        self.init(create_Student_1(swift_to_sc_teachers), true)
        
        swift_to_sc_teachers.data.deallocate()
    }
    

    public var name: String {
        get {
            let result = _prop_get_Student_name(cself)
            let sc_to_swift_result = String(cString: result)
            defer {
              result.deallocate()
            }
            return sc_to_swift_result
        }
        
        set(value) {
            let swift_to_sc_value = strdup(value)!
            _prop_set_Student_name(cself, swift_to_sc_value)
        }
        
    }
    
    public func addTeacher(t: Teacher) -> Void {

        let swift_to_sc_t = t.cself
        var err = ErrorObj()
        _func_Student_addTeacher(cself, swift_to_sc_t, &err)
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

    public func teachers() -> Array<Teacher> {

        var err = ErrorObj()
        let result = _func_Student_teachers(cself, &err)
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
      let _tmp_result_data = UnsafeBufferPointer<CObject>(start: result.data.assumingMemoryBound(to: CObject.self), count: Int(result.size))
        var sc_to_swift_result: [Teacher] = []
        defer {
          _tmp_result_data.deallocate()
        }
        for _i in 0..<Int(result.size) {
            let value_result = _tmp_result_data[_i]
            var sc_to_swift_value_result: Teacher
            sc_to_swift_value_result = Teacher(value_result)
            sc_to_swift_result.append(sc_to_swift_value_result)
        }
      return sc_to_swift_result
    }
}