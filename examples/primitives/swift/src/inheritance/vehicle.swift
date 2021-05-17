import Foundation

import CWrapper

/**
 */
public class Vehicle  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Vehicle(cself)
      }
    }
    
    /**
     */
    public convenience init(numberOfSeats: Int) {

        let swift_to_sc_numberOfSeats = CInt(numberOfSeats)
        self.init(create_Vehicle(swift_to_sc_numberOfSeats), true)
    }
    
    /**
     */
    public var numberOfSeats: Int {
          get {
            let result = _prop_get_Vehicle_numberOfSeats(cself);
            let sc_to_swift_result = Int(result)
            return sc_to_swift_result
          }
          
    }
    
}