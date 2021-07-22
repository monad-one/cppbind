/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/22/2021-12:49.
 * Please do not change it manually.
 */

import Foundation
import CWrapper



public class Square : IRhombus, IRectangle {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Square(cself)
      }
    }
    
    
    public convenience init(side: Double) {

        
        self.init(create_Square(side), true)
    }
    

    public var area: Double {
          get {
            let result = _prop_get_Square_area(cself);
            
            return result
          }
          
    }
    
    public func perimeter() -> Double {

        var err = ErrorObj()
        let result = _func_Square_perimeter(cself, &err);
        
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(err.err_ptr, true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        return result;
    }
}