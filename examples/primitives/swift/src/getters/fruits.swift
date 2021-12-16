/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/29/2021-07:21.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public enum FruitType: CUnsignedInt {
  case Apple = 1
  case Pineapple = 2
}

public class Fruit {

  public let cself: CObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: CObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_Fruit(cself, owner)
  }

  public var type: FruitType {
    get {
      let result = _prop_get_Fruit_type(cself)
      let sctoswiftresultOptional = FruitType(rawValue: result)
      if (sctoswiftresultOptional == nil) {
        ExceptionHandler.handleUncaughtException(
        "Internal error: unresolved reference to non existing field of FruitType enum.")
      }
      let sctoswiftresult = sctoswiftresultOptional!
      return sctoswiftresult
    }
  }

}

public class Apple: Fruit {
  public convenience init() {
    var err = ErrorObj()
    self.init(create_Apple(&err), true)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public override var type: FruitType {
    get {
      let result = _prop_get_Apple_type(cself)
      let sctoswiftresultOptional = FruitType(rawValue: result)
      if (sctoswiftresultOptional == nil) {
        ExceptionHandler.handleUncaughtException(
        "Internal error: unresolved reference to non existing field of FruitType enum.")
      }
      let sctoswiftresult = sctoswiftresultOptional!
      return sctoswiftresult
    }
  }

}

public class Pineapple: Fruit {
  public convenience init() {
    var err = ErrorObj()
    self.init(create_Pineapple(&err), true)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public override var type: FruitType {
    get {
      let result = _prop_get_Pineapple_type(cself)
      let sctoswiftresultOptional = FruitType(rawValue: result)
      if (sctoswiftresultOptional == nil) {
        ExceptionHandler.handleUncaughtException(
        "Internal error: unresolved reference to non existing field of FruitType enum.")
      }
      let sctoswiftresult = sctoswiftresultOptional!
      return sctoswiftresult
    }
  }

}

/**
 * An example class containing template getters.
 */
public class Fruits {

  public let cself: CObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: CObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_Fruits(cself, owner)
  }

  public convenience init(fruits: Array<Fruit>) {
    let _swifttoscfruitsData = UnsafeMutablePointer<CObject>.allocate(capacity: fruits.count)
    var swifttoscfruits = CDataArray()
    swifttoscfruits.data = UnsafeMutableRawPointer(_swifttoscfruitsData)
    swifttoscfruits.size = Int64(fruits.count)
    for i in 0..<fruits.count {
      let fruitsVal = fruits[i]
      let swifttoscfruitsVal = fruitsVal.cself
      _swifttoscfruitsData[i] = swifttoscfruitsVal
    }
    var err = ErrorObj()
    self.init(create_Fruits(swifttoscfruits, &err), true)
    
    swifttoscfruits.data.deallocate()
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public var apples: Array<Apple> {
    get {
      let result = _prop_get_Fruits_fruitsApple(cself)
      let _resultBuffer = UnsafeBufferPointer<CObject>(
        start: result.data.assumingMemoryBound(to: CObject.self),
        count: Int(result.size))
      var sctoswiftresult: [Apple] = []
      defer {
        _resultBuffer.deallocate()
      }
      for i in 0..<Int(result.size) {
        let resultValue = _resultBuffer[i]
        var sctoswiftresultValue: Apple
        sctoswiftresultValue = Apple(resultValue)
        sctoswiftresult.append(sctoswiftresultValue)
      }
      return sctoswiftresult
    }
  }

  public var pineapple: Array<Pineapple> {
    get {
      let result = _prop_get_Fruits_fruitsPineapple(cself)
      let _resultBuffer = UnsafeBufferPointer<CObject>(
        start: result.data.assumingMemoryBound(to: CObject.self),
        count: Int(result.size))
      var sctoswiftresult: [Pineapple] = []
      defer {
        _resultBuffer.deallocate()
      }
      for i in 0..<Int(result.size) {
        let resultValue = _resultBuffer[i]
        var sctoswiftresultValue: Pineapple
        sctoswiftresultValue = Pineapple(resultValue)
        sctoswiftresult.append(sctoswiftresultValue)
      }
      return sctoswiftresult
    }
  }

  public var applesWithPineapples: Array<Fruit> {
    get {
      let result = _prop_get_Fruits_allFruitsApplePineapple(cself)
      let _resultBuffer = UnsafeBufferPointer<CObject>(
        start: result.data.assumingMemoryBound(to: CObject.self),
        count: Int(result.size))
      var sctoswiftresult: [Fruit] = []
      defer {
        _resultBuffer.deallocate()
      }
      for i in 0..<Int(result.size) {
        let resultValue = _resultBuffer[i]
        var sctoswiftresultValue: Fruit
        let resultValueIndex = String(cString: resultValue.type)
        switch(resultValueIndex) {
        case("iegen::example::Apple"):
          sctoswiftresultValue = Apple(resultValue)
        case("iegen::example::Pineapple"):
          sctoswiftresultValue = Pineapple(resultValue)
        default:
          sctoswiftresultValue = Fruit(resultValue)
        }
        sctoswiftresult.append(sctoswiftresultValue)
      }
      return sctoswiftresult
    }

    set(value) {
      let _swifttoscvalueData = UnsafeMutablePointer<CObject>.allocate(capacity: value.count)
      var swifttoscvalue = CDataArray()
      swifttoscvalue.data = UnsafeMutableRawPointer(_swifttoscvalueData)
      swifttoscvalue.size = Int64(value.count)
      for i in 0..<value.count {
        let valueVal = value[i]
        let swifttoscvalueVal = valueVal.cself
        _swifttoscvalueData[i] = swifttoscvalueVal
      }
      _prop_set_Fruits_allFruitsApplePineapple(cself, swifttoscvalue)
      
      swifttoscvalue.data.deallocate()
    }
  }

}
