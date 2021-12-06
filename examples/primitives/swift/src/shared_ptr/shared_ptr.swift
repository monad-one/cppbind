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

public class Car  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Car(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init(cost: Int) {

        let swift_to_sc_cost = CInt(cost)
        self.init(create_Car(swift_to_sc_cost), true)
    }
    /**
     * value getter
     */
    public var cost: Int {
        get {
            let result = _prop_get_Car_cost(cself)
            let sc_to_swift_result = Int(result)
            return sc_to_swift_result
        }
        
    }
    
    public func setCostWithCarSharedPtr(sp: Car) -> Void {

        let swift_to_sc_sp = sp.cself
        var err = ErrorObj()
        _func_Car_setCostWithCarSharedPtr(cself, swift_to_sc_sp, &err)
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

    public func setCostWithCar(sp: Car) -> Void {

        let swift_to_sc_sp = sp.cself
        var err = ErrorObj()
        _func_Car_setCostWithCar(cself, swift_to_sc_sp, &err)
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
     * comments
     * 
     */
    public func setCostWithCarConstSharedPtr(sp: Car) -> Void {

        let swift_to_sc_sp = sp.cself
        var err = ErrorObj()
        _func_Car_setCostWithCarConstSharedPtr(cself, swift_to_sc_sp, &err)
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
     * comments
     * 
     */
    public func makeConstSharedPtr(sp: Car) -> Car {

        let swift_to_sc_sp = sp.cself
        var err = ErrorObj()
        let result = _func_Car_makeConstSharedPtr(cself, swift_to_sc_sp, &err)
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
      var sc_to_swift_result: Car
            sc_to_swift_result = Car(result, true)
      return sc_to_swift_result
    }

    public func setCostWithCarRef(sp: Car) -> Void {

        let swift_to_sc_sp = sp.cself
        var err = ErrorObj()
        _func_Car_setCostWithCarRef(cself, swift_to_sc_sp, &err)
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

    public func setCostWithCarPtr(sp: Car) -> Void {

        let swift_to_sc_sp = sp.cself
        var err = ErrorObj()
        _func_Car_setCostWithCarPtr(cself, swift_to_sc_sp, &err)
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

    public func getNewCarSharedPtr() -> Car {

        var err = ErrorObj()
        let result = _func_Car_getNewCarSharedPtr(cself, &err)
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
      var sc_to_swift_result: Car
            sc_to_swift_result = Car(result, true)
      return sc_to_swift_result
    }
}

public class CarUsage  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_CarUsage(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init(car: Car) {

        let swift_to_sc_car = car.cself
        self.init(create_CarUsage(swift_to_sc_car), true)
    }
    
    /**
     * Iegen supports only by value return in case shared_ref is set
     */
    public func getCar() -> Car {

        var err = ErrorObj()
        let result = _func_CarUsage_getCar(cself, &err)
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
      var sc_to_swift_result: Car
        sc_to_swift_result = Car(result, true)
      return sc_to_swift_result
    }
}