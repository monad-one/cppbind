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

public class Optionals  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Optionals(cself)
            cself.type?.deallocate()
        }
    }
    
    /**
     * constructor
     */
    public convenience init() {

        self.init(create_Optionals(), true)
    }
    
    
    public func optionalPtrWithNullptrDefault(task: Task? = nil) -> Task? {

        let swift_to_sc_task = CObject(type: task?.cself.type, ptr: task?.cself.ptr)
        var err = ErrorObj()
        let result = _func_Optionals_optionalPtrWithNullptrDefault(cself, swift_to_sc_task, &err)
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
      var sc_to_swift_result: Task? = nil
        if (result.ptr != nil) {
            sc_to_swift_result = Task(result)
        }
      return sc_to_swift_result
    }

    public func optionalPtrWithNullDefault(task: Task? = nil) -> Task? {

        let swift_to_sc_task = CObject(type: task?.cself.type, ptr: task?.cself.ptr)
        var err = ErrorObj()
        let result = _func_Optionals_optionalPtrWithNullDefault(cself, swift_to_sc_task, &err)
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
      var sc_to_swift_result: Task? = nil
        if (result.ptr != nil) {
            sc_to_swift_result = Task(result)
        }
      return sc_to_swift_result
    }

    public func optionalFDPtrWithNullptrDefault(project: Project? = nil) -> Project? {

        let swift_to_sc_project = CObject(type: project?.cself.type, ptr: project?.cself.ptr)
        var err = ErrorObj()
        let result = _func_Optionals_optionalFDPtrWithNullptrDefault(cself, swift_to_sc_project, &err)
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
      var sc_to_swift_result: Project? = nil
        if (result.ptr != nil) {
            sc_to_swift_result = Project(result)
        }
      return sc_to_swift_result
    }

    public func optionalSharedPtrWithNullptrDefault(person: Person? = nil) -> Person? {

        let swift_to_sc_person = CObject(type: person?.cself.type, ptr: person?.cself.ptr)
        var err = ErrorObj()
        let result = _func_Optionals_optionalSharedPtrWithNullptrDefault(cself, swift_to_sc_person, &err)
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
      var sc_to_swift_result: Person? = nil
            if (result.ptr != nil) {
                sc_to_swift_result = Person(result, true)
            }
      return sc_to_swift_result
    }

    public func optionalIntWithDefault(value: Int = 5) -> Int {

        let swift_to_sc_value = CInt(value)
        var err = ErrorObj()
        let result = _func_Optionals_optionalIntWithDefault(cself, swift_to_sc_value, &err)
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
      let sc_to_swift_result = Int(result)
      return sc_to_swift_result
    }

    public func optionalLongWithDefault(value: CLong = 7) -> CLong {

        
        var err = ErrorObj()
        let result = _func_Optionals_optionalLongWithDefault(cself, value, &err)
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
      
      return result
    }

    public func optionalDoubleWithDefault(value: Double = 9.0) -> Double {

        
        var err = ErrorObj()
        let result = _func_Optionals_optionalDoubleWithDefault(cself, value, &err)
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
      
      return result
    }

    public func optionalFloatWithDefault(value: Float = 11.0) -> Float {

        
        var err = ErrorObj()
        let result = _func_Optionals_optionalFloatWithDefault(cself, value, &err)
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
      
      return result
    }

    public func optionalBoolWithDefault(value: Bool = true) -> Bool {

        
        var err = ErrorObj()
        let result = _func_Optionals_optionalBoolWithDefault(cself, value, &err)
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
      
      return result
    }
    /**
     * @param[in] optionalStr string with default value
     */
    public func optionalStringWithDefault(optionalStr: String = "abc") -> String {

        let swift_to_sc_optionalStr = strdup(optionalStr)!
        var err = ErrorObj()
        let result = _func_Optionals_optionalStringWithDefault(cself, swift_to_sc_optionalStr, &err)
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
     * @param[in] optionalStr string with default value
     */
    public func optionalStringViewWithDefault(optionalStr: String = "abc") -> String {

        let swift_to_sc_optionalStr = strdup(optionalStr)!
        var err = ErrorObj()
        let result = _func_Optionals_optionalStringViewWithDefault(cself, swift_to_sc_optionalStr, &err)
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

    public func optionalCharPointerWithDefault(optionalStr: String = "def") -> String {

        let swift_to_sc_optionalStr = optionalStr.cString(using: String.Encoding.utf8)!
        var err = ErrorObj()
        let result = _func_Optionals_optionalCharPointerWithDefault(cself, swift_to_sc_optionalStr, &err)
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
      return sc_to_swift_result
    }

    public func optionalEnumWithDefault(c: Color = Color.Red) -> Color {

        let swift_to_sc_c = c.rawValue
        var err = ErrorObj()
        let result = _func_Optionals_optionalEnumWithDefault(cself, swift_to_sc_c, &err)
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
      let sc_to_swift_result_optional = Color(rawValue: result)
        if (sc_to_swift_result_optional == nil) {
            ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of Color enum.")
        }
        let sc_to_swift_result = sc_to_swift_result_optional!
      return sc_to_swift_result
    }

    public func optionalEnumWithDefaultAndFieldPrefix(c: ColorShade = ColorShade.ShadeLight) -> ColorShade {

        let swift_to_sc_c = c.rawValue
        var err = ErrorObj()
        let result = _func_Optionals_optionalEnumWithDefaultAndFieldPrefix(cself, swift_to_sc_c, &err)
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
      let sc_to_swift_result_optional = ColorShade(rawValue: result)
        if (sc_to_swift_result_optional == nil) {
            ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of ColorShade enum.")
        }
        let sc_to_swift_result = sc_to_swift_result_optional!
      return sc_to_swift_result
    }

    public func optionalEnumWithInternalDefault(c: ColorShade) -> ColorShade {

        let swift_to_sc_c = c.rawValue
        var err = ErrorObj()
        let result = _func_Optionals_optionalEnumWithInternalDefault(cself, swift_to_sc_c, &err)
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
      let sc_to_swift_result_optional = ColorShade(rawValue: result)
        if (sc_to_swift_result_optional == nil) {
            ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of ColorShade enum.")
        }
        let sc_to_swift_result = sc_to_swift_result_optional!
      return sc_to_swift_result
    }

    public func optionalRefWithDefaultComplexValue(task: Task) -> Task {

        let swift_to_sc_task = task.cself
        var err = ErrorObj()
        let result = _func_Optionals_optionalRefWithDefaultComplexValue(cself, swift_to_sc_task, &err)
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
      var sc_to_swift_result: Task
        sc_to_swift_result = Task(result)
      return sc_to_swift_result
    }

    public func optionalByValWithDefaultComplexValue(task: Task) -> Task {

        let swift_to_sc_task = task.cself
        var err = ErrorObj()
        let result = _func_Optionals_optionalByValWithDefaultComplexValue(cself, swift_to_sc_task, &err)
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
      var sc_to_swift_result: Task
        sc_to_swift_result = Task(result, true)
      return sc_to_swift_result
    }
}