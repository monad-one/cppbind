import Foundation

import CWrapper

/**
 */
public protocol IParallelogram  {

    
    var cself : UnsafeMutableRawPointer { get }
    
    
    
    /**
     */
    var area: Double { get
    }
    /**
     */
    func perimeter() -> Double
}
extension IParallelogram {
    
    /**
     */
    public var area: Double {
          get {
            let result = _prop_get_Parallelogram_area(cself);
            
            return result
          }
          
    }
    /**
     */
    public func perimeter() -> Double {

        var err = ErrorObj()
        let result = _func_Parallelogram_perimeter(cself, &err);
        
        if (err.is_err) {
            let err_type = Int(err.err_type)
            switch(err_type) {
                case(1):
                    let exc_obj = Exceptions.StdException(err.err_ptr, true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        return result;
    }
}
public class Parallelogram : IParallelogram {
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Parallelogram(cself)
      }
    }

    
}