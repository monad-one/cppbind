/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/17/2022-14:44.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * comments
 * 
 */
public class SizeUsage {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_SizeUsage(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /**
   * comments
   * 
   */
  public static func multiplyBy(size: (Float, Float), n: Int) -> (Float, Float) {

    let swifttoscsizeFirst = UnsafeMutablePointer<Float>.allocate(capacity: 1)
    let swifttoscsizeSecond = UnsafeMutablePointer<Float>.allocate(capacity: 1)
    defer {
      swifttoscsizeFirst.deallocate()
      swifttoscsizeSecond.deallocate()
    }
    var swifttoscsize = IEGenCDataPair()
    swifttoscsize.first = UnsafeMutableRawPointer(swifttoscsizeFirst)
    swifttoscsize.second = UnsafeMutableRawPointer(swifttoscsizeSecond)
    swifttoscsizeFirst[0] = size.0
    swifttoscsizeSecond[0] = size.1
    let swifttoscn = CInt(n)
    var err = IEGenCObject()
    let result = _func_SizeUsage_multiplyBy(swifttoscsize, swifttoscn, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let resultFirstData = UnsafeBufferPointer<Float>(start: result.first.assumingMemoryBound(to: Float.self), count: 1)
    let resultSecondData = UnsafeBufferPointer<Float>(start: result.second.assumingMemoryBound(to: Float.self), count: 1)
    defer {
      resultFirstData.deallocate()
      resultSecondData.deallocate()
    }
    let sctoswiftresultFirst = resultFirstData[0]
    let sctoswiftresultSecond = resultSecondData[0]
    let sctoswiftresult: (Float, Float) = (sctoswiftresultFirst, sctoswiftresultSecond)
    return sctoswiftresult
  }

  /**
   * comments
   * 
   */
  public static func doubleSizeF(resolution: (Float, Float)) -> (Float, Float) {

    let swifttoscresolutionFirst = UnsafeMutablePointer<Float>.allocate(capacity: 1)
    let swifttoscresolutionSecond = UnsafeMutablePointer<Float>.allocate(capacity: 1)
    defer {
      swifttoscresolutionFirst.deallocate()
      swifttoscresolutionSecond.deallocate()
    }
    var swifttoscresolution = IEGenCDataPair()
    swifttoscresolution.first = UnsafeMutableRawPointer(swifttoscresolutionFirst)
    swifttoscresolution.second = UnsafeMutableRawPointer(swifttoscresolutionSecond)
    swifttoscresolutionFirst[0] = resolution.0
    swifttoscresolutionSecond[0] = resolution.1
    var err = IEGenCObject()
    let result = _func_SizeUsage_doubleSizeF(swifttoscresolution, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let resultFirstData = UnsafeBufferPointer<Float>(start: result.first.assumingMemoryBound(to: Float.self), count: 1)
    let resultSecondData = UnsafeBufferPointer<Float>(start: result.second.assumingMemoryBound(to: Float.self), count: 1)
    defer {
      resultFirstData.deallocate()
      resultSecondData.deallocate()
    }
    let sctoswiftresultFirst = resultFirstData[0]
    let sctoswiftresultSecond = resultSecondData[0]
    let sctoswiftresult: (Float, Float) = (sctoswiftresultFirst, sctoswiftresultSecond)
    return sctoswiftresult
  }

}
