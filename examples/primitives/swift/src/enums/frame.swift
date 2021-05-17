import Foundation

import CWrapper

/**
 * Class Frame.
 */
public class Frame  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Frame(cself)
      }
    }
    
    /**
     */
    public convenience init() {

        self.init(create_Frame(), true)
    }
    
    /**
     */
    public var backgroundColor: Color {
          get {
            let result = _prop_get_Frame_backgroundColor(cself);
            let sc_to_swift_result = Color(rawValue: result)!
            return sc_to_swift_result
          }
          
          
          set(value) {
            let swift_to_sc_value = value.rawValue
            _prop_set_Frame_backgroundColor(cself, swift_to_sc_value)
          }
          
    }
    
}