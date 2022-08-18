/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/14/2022-10:58.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/// comments
/// 
public class PairExamples {

  /// An internal property to keep a reference to the original C++ object.
  /// It is intended to be used by the generated code.
  public let cself: CppBindCObject

  /// An internal property to keep track whether Swift is responsible for deallocating the underlying C++ object or not.
  /// It is intended to be used by the generated code.
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_CppbindExample_PairExamples(cself, owner)
  }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  /// comments
  /// 
  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_PairExamples(&cppbindErr), true)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public var complexPairObj: (MapItem, Array<MapItem>) {
    get {
      var cppbindErr = CppBindCObject()
      let result = _prop_get_CppbindExample_PairExamples_complexPairObj(cself, &cppbindErr)
      if cppbindErr.type != nil {
        let errorType = String(cString: cppbindErr.type!)
        switch errorType {
        case ("std::exception"):
          let excObj = StdException(cppbindErr, true)
          ExceptionHandler.handleUncaughtException(excObj.what())
        default:
          cppbindErr.type.deallocate()
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
        }
      }
      let _resultFirstData = UnsafeBufferPointer<CppBindCObject>(
        start: result.first.assumingMemoryBound(to: CppBindCObject.self),
        count: 1)
      let _resultSecondData = UnsafeBufferPointer<CppBindCDataArray>(
        start: result.second.assumingMemoryBound(to: CppBindCDataArray.self),
        count: 1)
      defer {
        _resultFirstData.deallocate()
        _resultSecondData.deallocate()
      }
      let resultFirst = _resultFirstData[0]
      let resultSecond = _resultSecondData[0]
      var sctoswiftresultFirst: MapItem
      sctoswiftresultFirst = MapItem(resultFirst, true)
      let _resultSecondBuffer = UnsafeBufferPointer<CppBindCObject>(
        start: resultSecond.data.assumingMemoryBound(to: CppBindCObject.self),
        count: Int(resultSecond.size))
      var sctoswiftresultSecond: [MapItem] = []
      defer {
        _resultSecondBuffer.deallocate()
      }
      for i in 0..<Int(resultSecond.size) {
        let resultSecondValue = _resultSecondBuffer[i]
        var sctoswiftresultSecondValue: MapItem
        sctoswiftresultSecondValue = MapItem(resultSecondValue, true)
        sctoswiftresultSecond.append(sctoswiftresultSecondValue)
      }
      let sctoswiftresult: (MapItem, Array<MapItem>) = (sctoswiftresultFirst, sctoswiftresultSecond)
      return sctoswiftresult
    }

    set(value) {
      let _swifttoscvalueFirst = UnsafeMutablePointer<CppBindCObject>.allocate(capacity: 1)
      let _swifttoscvalueSecond = UnsafeMutablePointer<CppBindCDataArray>.allocate(capacity: 1)
      var swifttoscvalue = CppBindCDataPair()
      swifttoscvalue.first = UnsafeMutableRawPointer(_swifttoscvalueFirst)
      swifttoscvalue.second = UnsafeMutableRawPointer(_swifttoscvalueSecond)
      let valueFirst = value.0
      let valueSecond = value.1
      let swifttoscvalueFirst = valueFirst.cself
      let _swifttoscvalueSecondData = UnsafeMutablePointer<CppBindCObject>.allocate(capacity: valueSecond.count)
      var swifttoscvalueSecond = CppBindCDataArray()
      swifttoscvalueSecond.data = UnsafeMutableRawPointer(_swifttoscvalueSecondData)
      swifttoscvalueSecond.size = Int64(valueSecond.count)
      for i in 0..<valueSecond.count {
        let valueSecondVal = valueSecond[i]
        let swifttoscvalueSecondVal = valueSecondVal.cself
        _swifttoscvalueSecondData[i] = swifttoscvalueSecondVal
      }
      _swifttoscvalueFirst[0] = swifttoscvalueFirst
      _swifttoscvalueSecond[0] = swifttoscvalueSecond
      var cppbindErr = CppBindCObject()
      _prop_set_CppbindExample_PairExamples_complexPairObj(cself, swifttoscvalue, &cppbindErr)
      
      let swifttoscvalueSecondItem = swifttoscvalue.second.assumingMemoryBound(to: CppBindCDataArray.self)[0]

      swifttoscvalueSecondItem.data.deallocate()
      swifttoscvalue.first.deallocate()
      swifttoscvalue.second.deallocate()
      if cppbindErr.type != nil {
        let errorType = String(cString: cppbindErr.type!)
        switch errorType {
        case ("std::exception"):
          let excObj = StdException(cppbindErr, true)
          ExceptionHandler.handleUncaughtException(excObj.what())
        default:
          cppbindErr.type.deallocate()
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
        }
      }
    }
  }

  /// comments
  /// 
  public func sumIntPairs(p1: (Int, Int), p2: (Int, Int)) -> (Int, Int) {

    let _swifttoscp1First = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
    let _swifttoscp1Second = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
    var swifttoscp1 = CppBindCDataPair()
    swifttoscp1.first = UnsafeMutableRawPointer(_swifttoscp1First)
    swifttoscp1.second = UnsafeMutableRawPointer(_swifttoscp1Second)
    let p1First = p1.0
    let p1Second = p1.1
    let swifttoscp1First = CInt(p1First)
    let swifttoscp1Second = CInt(p1Second)
    _swifttoscp1First[0] = swifttoscp1First
    _swifttoscp1Second[0] = swifttoscp1Second
    let _swifttoscp2First = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
    let _swifttoscp2Second = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
    var swifttoscp2 = CppBindCDataPair()
    swifttoscp2.first = UnsafeMutableRawPointer(_swifttoscp2First)
    swifttoscp2.second = UnsafeMutableRawPointer(_swifttoscp2Second)
    let p2First = p2.0
    let p2Second = p2.1
    let swifttoscp2First = CInt(p2First)
    let swifttoscp2Second = CInt(p2Second)
    _swifttoscp2First[0] = swifttoscp2First
    _swifttoscp2Second[0] = swifttoscp2Second
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_PairExamples_sumIntPairs(cself, swifttoscp1, swifttoscp2, &cppbindErr)
    
    swifttoscp1.first.deallocate()
    swifttoscp1.second.deallocate()
    
    swifttoscp2.first.deallocate()
    swifttoscp2.second.deallocate()
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultFirstData = UnsafeBufferPointer<CInt>(
      start: result.first.assumingMemoryBound(to: CInt.self),
      count: 1)
    let _resultSecondData = UnsafeBufferPointer<CInt>(
      start: result.second.assumingMemoryBound(to: CInt.self),
      count: 1)
    defer {
      _resultFirstData.deallocate()
      _resultSecondData.deallocate()
    }
    let resultFirst = _resultFirstData[0]
    let resultSecond = _resultSecondData[0]
    let sctoswiftresultFirst = Int(resultFirst)
    let sctoswiftresultSecond = Int(resultSecond)
    let sctoswiftresult: (Int, Int) = (sctoswiftresultFirst, sctoswiftresultSecond)
    return sctoswiftresult
  }

  /// comments
  /// 
  public func setNestedPair(p: ((String, String), (String, String))) -> Void {

    let _swifttoscpFirst = UnsafeMutablePointer<CppBindCDataPair>.allocate(capacity: 1)
    let _swifttoscpSecond = UnsafeMutablePointer<CppBindCDataPair>.allocate(capacity: 1)
    var swifttoscp = CppBindCDataPair()
    swifttoscp.first = UnsafeMutableRawPointer(_swifttoscpFirst)
    swifttoscp.second = UnsafeMutableRawPointer(_swifttoscpSecond)
    let pFirst = p.0
    let pSecond = p.1
    let _swifttoscpFirstFirst = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
    let _swifttoscpFirstSecond = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
    var swifttoscpFirst = CppBindCDataPair()
    swifttoscpFirst.first = UnsafeMutableRawPointer(_swifttoscpFirstFirst)
    swifttoscpFirst.second = UnsafeMutableRawPointer(_swifttoscpFirstSecond)
    let pFirstFirst = pFirst.0
    let pFirstSecond = pFirst.1
    let swifttoscpFirstFirst = strdup(pFirstFirst)!
    let swifttoscpFirstSecond = strdup(pFirstSecond)!
    _swifttoscpFirstFirst[0] = swifttoscpFirstFirst
    _swifttoscpFirstSecond[0] = swifttoscpFirstSecond
    let _swifttoscpSecondFirst = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
    let _swifttoscpSecondSecond = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
    var swifttoscpSecond = CppBindCDataPair()
    swifttoscpSecond.first = UnsafeMutableRawPointer(_swifttoscpSecondFirst)
    swifttoscpSecond.second = UnsafeMutableRawPointer(_swifttoscpSecondSecond)
    let pSecondFirst = pSecond.0
    let pSecondSecond = pSecond.1
    let swifttoscpSecondFirst = strdup(pSecondFirst)!
    let swifttoscpSecondSecond = strdup(pSecondSecond)!
    _swifttoscpSecondFirst[0] = swifttoscpSecondFirst
    _swifttoscpSecondSecond[0] = swifttoscpSecondSecond
    _swifttoscpFirst[0] = swifttoscpFirst
    _swifttoscpSecond[0] = swifttoscpSecond
    var cppbindErr = CppBindCObject()
    _func_CppbindExample_PairExamples_setNestedPair(cself, swifttoscp, &cppbindErr)
    
    let swifttoscpFirstItem = swifttoscp.first.assumingMemoryBound(to: CppBindCDataPair.self)[0]

    swifttoscpFirstItem.first.deallocate()
    swifttoscpFirstItem.second.deallocate()
    let swifttoscpSecondItem = swifttoscp.second.assumingMemoryBound(to: CppBindCDataPair.self)[0]

    swifttoscpSecondItem.first.deallocate()
    swifttoscpSecondItem.second.deallocate()
    swifttoscp.first.deallocate()
    swifttoscp.second.deallocate()
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /// comments
  /// 
  public func getNestedPair() -> ((String, String), (String, String)) {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_PairExamples_getNestedPair(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultFirstData = UnsafeBufferPointer<CppBindCDataPair>(
      start: result.first.assumingMemoryBound(to: CppBindCDataPair.self),
      count: 1)
    let _resultSecondData = UnsafeBufferPointer<CppBindCDataPair>(
      start: result.second.assumingMemoryBound(to: CppBindCDataPair.self),
      count: 1)
    defer {
      _resultFirstData.deallocate()
      _resultSecondData.deallocate()
    }
    let resultFirst = _resultFirstData[0]
    let resultSecond = _resultSecondData[0]
    let _resultFirstFirstData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: resultFirst.first.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: 1)
    let _resultFirstSecondData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: resultFirst.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: 1)
    defer {
      _resultFirstFirstData.deallocate()
      _resultFirstSecondData.deallocate()
    }
    let resultFirstFirst = _resultFirstFirstData[0]
    let resultFirstSecond = _resultFirstSecondData[0]
    let sctoswiftresultFirstFirst = String(cString: resultFirstFirst)
    defer {
      resultFirstFirst.deallocate()
    }
    let sctoswiftresultFirstSecond = String(cString: resultFirstSecond)
    defer {
      resultFirstSecond.deallocate()
    }
    let sctoswiftresultFirst: (String, String) = (sctoswiftresultFirstFirst, sctoswiftresultFirstSecond)
    let _resultSecondFirstData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: resultSecond.first.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: 1)
    let _resultSecondSecondData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: resultSecond.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: 1)
    defer {
      _resultSecondFirstData.deallocate()
      _resultSecondSecondData.deallocate()
    }
    let resultSecondFirst = _resultSecondFirstData[0]
    let resultSecondSecond = _resultSecondSecondData[0]
    let sctoswiftresultSecondFirst = String(cString: resultSecondFirst)
    defer {
      resultSecondFirst.deallocate()
    }
    let sctoswiftresultSecondSecond = String(cString: resultSecondSecond)
    defer {
      resultSecondSecond.deallocate()
    }
    let sctoswiftresultSecond: (String, String) = (sctoswiftresultSecondFirst, sctoswiftresultSecondSecond)
    let sctoswiftresult: ((String, String), (String, String)) = (sctoswiftresultFirst, sctoswiftresultSecond)
    return sctoswiftresult
  }

  /// comments
  /// 
  public func getStringPair() -> (String, String) {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_PairExamples_getStringPair(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultFirstData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: result.first.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: 1)
    let _resultSecondData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: result.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: 1)
    defer {
      _resultFirstData.deallocate()
      _resultSecondData.deallocate()
    }
    let resultFirst = _resultFirstData[0]
    let resultSecond = _resultSecondData[0]
    let sctoswiftresultFirst = String(cString: resultFirst)
    defer {
      resultFirst.deallocate()
    }
    let sctoswiftresultSecond = String(cString: resultSecond)
    defer {
      resultSecond.deallocate()
    }
    let sctoswiftresult: (String, String) = (sctoswiftresultFirst, sctoswiftresultSecond)
    return sctoswiftresult
  }

  public func setNestedVectorOfPairs(v: Array<Array<(Int, String)>>) -> Void {

    let _swifttoscvData = UnsafeMutablePointer<CppBindCDataArray>.allocate(capacity: v.count)
    var swifttoscv = CppBindCDataArray()
    swifttoscv.data = UnsafeMutableRawPointer(_swifttoscvData)
    swifttoscv.size = Int64(v.count)
    for i in 0..<v.count {
      let vVal = v[i]
      let _swifttoscvValData = UnsafeMutablePointer<CppBindCDataPair>.allocate(capacity: vVal.count)
      var swifttoscvVal = CppBindCDataArray()
      swifttoscvVal.data = UnsafeMutableRawPointer(_swifttoscvValData)
      swifttoscvVal.size = Int64(vVal.count)
      for i in 0..<vVal.count {
        let vValVal = vVal[i]
        let _swifttoscvValValFirst = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
        let _swifttoscvValValSecond = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
        var swifttoscvValVal = CppBindCDataPair()
        swifttoscvValVal.first = UnsafeMutableRawPointer(_swifttoscvValValFirst)
        swifttoscvValVal.second = UnsafeMutableRawPointer(_swifttoscvValValSecond)
        let vValValFirst = vValVal.0
        let vValValSecond = vValVal.1
        let swifttoscvValValFirst = CInt(vValValFirst)
        let swifttoscvValValSecond = strdup(vValValSecond)!
        _swifttoscvValValFirst[0] = swifttoscvValValFirst
        _swifttoscvValValSecond[0] = swifttoscvValValSecond
        _swifttoscvValData[i] = swifttoscvValVal
      }
      _swifttoscvData[i] = swifttoscvVal
    }
    var cppbindErr = CppBindCObject()
    _func_CppbindExample_PairExamples_setNestedVectorOfPairs(cself, swifttoscv, &cppbindErr)
    
    let swifttoscvData = swifttoscv.data.assumingMemoryBound(to: CppBindCDataArray.self)
    for i in 0..<Int(swifttoscv.size) {
      let swifttoscvItem = swifttoscvData[i]
      
      let swifttoscvItemData = swifttoscvItem.data.assumingMemoryBound(to: CppBindCDataPair.self)
      for i in 0..<Int(swifttoscvItem.size) {
        let swifttoscvItemItem = swifttoscvItemData[i]
        
        swifttoscvItemItem.first.deallocate()
        swifttoscvItemItem.second.deallocate()
      }
      swifttoscvItem.data.deallocate()
    }
    swifttoscv.data.deallocate()
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func getNestedVectorOfPairs() -> Array<Array<(Int, String)>> {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_PairExamples_getNestedVectorOfPairs(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultBuffer = UnsafeBufferPointer<CppBindCDataArray>(
      start: result.data.assumingMemoryBound(to: CppBindCDataArray.self),
      count: Int(result.size))
    var sctoswiftresult: [Array<(Int, String)>] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      let _resultValueBuffer = UnsafeBufferPointer<CppBindCDataPair>(
        start: resultValue.data.assumingMemoryBound(to: CppBindCDataPair.self),
        count: Int(resultValue.size))
      var sctoswiftresultValue: [(Int, String)] = []
      defer {
        _resultValueBuffer.deallocate()
      }
      for i in 0..<Int(resultValue.size) {
        let resultValueValue = _resultValueBuffer[i]
        let _resultValueValueFirstData = UnsafeBufferPointer<CInt>(
          start: resultValueValue.first.assumingMemoryBound(to: CInt.self),
          count: 1)
        let _resultValueValueSecondData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
          start: resultValueValue.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
          count: 1)
        defer {
          _resultValueValueFirstData.deallocate()
          _resultValueValueSecondData.deallocate()
        }
        let resultValueValueFirst = _resultValueValueFirstData[0]
        let resultValueValueSecond = _resultValueValueSecondData[0]
        let sctoswiftresultValueValueFirst = Int(resultValueValueFirst)
        let sctoswiftresultValueValueSecond = String(cString: resultValueValueSecond)
        defer {
          resultValueValueSecond.deallocate()
        }
        let sctoswiftresultValueValue: (Int, String) = (sctoswiftresultValueValueFirst, sctoswiftresultValueValueSecond)
        sctoswiftresultValue.append(sctoswiftresultValueValue)
      }
      sctoswiftresult.append(sctoswiftresultValue)
    }
    return sctoswiftresult
  }

  public func sumPairItems(p: (CLong, CLong)) -> CLong {

    let _swifttoscpFirst = UnsafeMutablePointer<CLong>.allocate(capacity: 1)
    let _swifttoscpSecond = UnsafeMutablePointer<CLong>.allocate(capacity: 1)
    var swifttoscp = CppBindCDataPair()
    swifttoscp.first = UnsafeMutableRawPointer(_swifttoscpFirst)
    swifttoscp.second = UnsafeMutableRawPointer(_swifttoscpSecond)
    let pFirst = p.0
    let pSecond = p.1


    _swifttoscpFirst[0] = pFirst
    _swifttoscpSecond[0] = pSecond
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_PairExamples_sumPairItems(cself, swifttoscp, &cppbindErr)
    
    swifttoscp.first.deallocate()
    swifttoscp.second.deallocate()
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "cppbind::example::PairExamples" }
}
