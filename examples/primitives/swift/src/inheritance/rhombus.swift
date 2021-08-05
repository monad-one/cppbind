/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/05/2021-12:28.
 * Please do not change it manually.
 */

import Foundation
import CWrapper



public protocol RhombusFigure : Parallelogram {

    
    
    
    
}
extension RhombusFigure {
    
    
}
public class RhombusFigureImpl : RhombusFigure {
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_RhombusFigureImpl(cself)
      }
    }

    
    public convenience init(diagonal1: Double, diagonal2: Double) {

        
        
        self.init(create_RhombusFigure(diagonal1, diagonal2), true)
    }
}