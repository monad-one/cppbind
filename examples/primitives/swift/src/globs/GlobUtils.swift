/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/09/2022-07:52.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * A global function example.
 */
public func mul(first: Int, second: Int) -> Int {
  let swifttoscfirst = CInt(first)
  let swifttoscsecond = CInt(second)
  var cppbindErr = CppBindCObject()
  let result = _func__mul(swifttoscfirst, swifttoscsecond, &cppbindErr)
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
  let sctoswiftresult = Int(result)
  return sctoswiftresult
}

/**
 * A global function example.
 */
public func mul(first: Int, second: Int, third: Int) -> Int {
  let swifttoscfirst = CInt(first)
  let swifttoscsecond = CInt(second)
  let swifttoscthird = CInt(third)
  var cppbindErr = CppBindCObject()
  let result = _func__mulThree(swifttoscfirst, swifttoscsecond, swifttoscthird, &cppbindErr)
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
  let sctoswiftresult = Int(result)
  return sctoswiftresult
}

/**
 * A global function example.
 */
public func concat(str1: String, str2: String) -> String {
  let swifttoscstr1 = strdup(str1)!
  let swifttoscstr2 = strdup(str2)!
  var cppbindErr = CppBindCObject()
  let result = _func__concat(swifttoscstr1, swifttoscstr2, &cppbindErr)
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
  let sctoswiftresult = String(cString: result)
  defer {
    result.deallocate()
  }
  return sctoswiftresult
}

/**
 * A global overloaded function example.
 */
public func concat(str1: String, str2: String, str3: String) -> String {
  let swifttoscstr1 = strdup(str1)!
  let swifttoscstr2 = strdup(str2)!
  let swifttoscstr3 = strdup(str3)!
  var cppbindErr = CppBindCObject()
  let result = _func__concat1(swifttoscstr1, swifttoscstr2, swifttoscstr3, &cppbindErr)
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
  let sctoswiftresult = String(cString: result)
  defer {
    result.deallocate()
  }
  return sctoswiftresult
}

/**
 * A global template function example.
 */
public func max(a: Int, b: Int) -> Int {
  let swifttosca = CInt(a)
  let swifttoscb = CInt(b)
  var cppbindErr = CppBindCObject()
  let result = _func__maxInt(swifttosca, swifttoscb, &cppbindErr)
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
  let sctoswiftresult = Int(result)
  return sctoswiftresult
}

/**
 * A global template function example.
 */
public func max(a: String, b: String) -> String {
  let swifttosca = strdup(a)!
  let swifttoscb = strdup(b)!
  var cppbindErr = CppBindCObject()
  let result = _func__maxString(swifttosca, swifttoscb, &cppbindErr)
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
  let sctoswiftresult = String(cString: result)
  defer {
    result.deallocate()
  }
  return sctoswiftresult
}

/**
 * A global template function example in namespace.
 */
public func makePair(a: Project, b: Project) -> (Project, Project) {
  let swifttosca = a.cself
  let swifttoscb = b.cself
  var cppbindErr = CppBindCObject()
  let result = _func_CppbindExample_makePairProjectProject(swifttosca, swifttoscb, &cppbindErr)
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
  let _resultSecondData = UnsafeBufferPointer<CppBindCObject>(
    start: result.second.assumingMemoryBound(to: CppBindCObject.self),
    count: 1)
  defer {
    _resultFirstData.deallocate()
    _resultSecondData.deallocate()
  }
  let resultFirst = _resultFirstData[0]
  let resultSecond = _resultSecondData[0]
  var sctoswiftresultFirst: Project
  sctoswiftresultFirst = Project(resultFirst)
  var sctoswiftresultSecond: Project
  sctoswiftresultSecond = Project(resultSecond)
  let sctoswiftresult: (Project, Project) = (sctoswiftresultFirst, sctoswiftresultSecond)
  return sctoswiftresult
}

/**
 * A global template function example in namespace.
 */
public func makePair(a: Root, b: Project) -> (Root, Project) {
  let swifttosca = a.cself
  let swifttoscb = b.cself
  var cppbindErr = CppBindCObject()
  let result = _func_CppbindExample_makePairRootProject(swifttosca, swifttoscb, &cppbindErr)
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
  let _resultSecondData = UnsafeBufferPointer<CppBindCObject>(
    start: result.second.assumingMemoryBound(to: CppBindCObject.self),
    count: 1)
  defer {
    _resultFirstData.deallocate()
    _resultSecondData.deallocate()
  }
  let resultFirst = _resultFirstData[0]
  let resultSecond = _resultSecondData[0]
  var sctoswiftresultFirst: Root
  sctoswiftresultFirst = Root(resultFirst)
  var sctoswiftresultSecond: Project
  sctoswiftresultSecond = Project(resultSecond)
  let sctoswiftresult: (Root, Project) = (sctoswiftresultFirst, sctoswiftresultSecond)
  return sctoswiftresult
}

/**
 * A global function with pointer default value and nullable return value.
 */
public func optionalFDPtr(project: Project? = nil) -> Project? {
  let swifttoscproject = project?.cself ?? CppBindCObject(type: nil, ptr: nil)
  var cppbindErr = CppBindCObject()
  let result = _func__optionalFDPtr(swifttoscproject, &cppbindErr)
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
  var sctoswiftresult: Project? = nil
  if (result.ptr != nil) {
    sctoswiftresult = Project(result)
  }
  return sctoswiftresult
}

/**
 * A global function with no return value.
 */
public func doNothing() -> Void {
  var cppbindErr = CppBindCObject()
  _func__doNothing(&cppbindErr)
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
