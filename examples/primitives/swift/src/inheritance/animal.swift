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

public protocol Animal  {

    
    var cself : CObject { get }
    
    
    
    
    func typeName() -> String
}
extension Animal {
    
    
    public func typeName() -> String {

        var err = ErrorObj()
        let result = _func_Animal_typeName(cself, &err)
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
}
public class AnimalImpl : Animal {
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_AnimalImpl(cself)
        cself.type?.deallocate()
      }
    }

    
    public convenience init() {

        self.init(create_Animal(), true)
    }
}

public protocol TerrestrialAnimal : Animal {

    
    
    
    
    func typeName() -> String
}
extension TerrestrialAnimal {
    
    
    public func typeName() -> String {

        var err = ErrorObj()
        let result = _func_TerrestrialAnimal_typeName(cself, &err)
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
}
public class TerrestrialAnimalImpl : TerrestrialAnimal {
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_TerrestrialAnimalImpl(cself)
        cself.type?.deallocate()
      }
    }

    
    public convenience init() {

        self.init(create_TerrestrialAnimal(), true)
    }
}

public class AquaticAnimal : Animal {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_AquaticAnimal(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init() {

        self.init(create_AquaticAnimal(), true)
    }
    
    
    public func typeName() -> String {

        var err = ErrorObj()
        let result = _func_AquaticAnimal_typeName(cself, &err)
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
}

public class Frog : AquaticAnimal, TerrestrialAnimal {
    
    
    public convenience init() {

        self.init(create_Frog(), true)
    }
    
    
    public override func typeName() -> String {

        var err = ErrorObj()
        let result = _func_Frog_typeName(cself, &err)
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
}

public class AnimalUsage  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_AnimalUsage(cself)
            cself.type?.deallocate()
        }
    }
    
    
    public convenience init() {

        self.init(create_AnimalUsage(), true)
    }
    
    
    public static func getAnimalTypeName(animal: Animal) -> String {

        let swift_to_sc_animal = animal.cself
        var err = ErrorObj()
        let result = _func_AnimalUsage_getAnimalTypeName(swift_to_sc_animal, &err)
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

    public static func getAquaticAnimalTypeName(animal: AquaticAnimal) -> String {

        let swift_to_sc_animal = animal.cself
        var err = ErrorObj()
        let result = _func_AnimalUsage_getAquaticAnimalTypeName(swift_to_sc_animal, &err)
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

    public func getAnimal() -> Animal {

        var err = ErrorObj()
        let result = _func_AnimalUsage_getAnimal(cself, &err)
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
      var sc_to_swift_result: Animal
        sc_to_swift_result = AnimalImpl(result)
      return sc_to_swift_result
    }

    public func getAquaticAnimal() -> AquaticAnimal {

        var err = ErrorObj()
        let result = _func_AnimalUsage_getAquaticAnimal(cself, &err)
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
      var sc_to_swift_result: AquaticAnimal
        sc_to_swift_result = AquaticAnimal(result)
      return sc_to_swift_result
    }

    public func getFrog() -> Frog {

        var err = ErrorObj()
        let result = _func_AnimalUsage_getFrog(cself, &err)
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
      var sc_to_swift_result: Frog
        sc_to_swift_result = Frog(result)
      return sc_to_swift_result
    }
}