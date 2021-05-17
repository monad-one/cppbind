import Foundation

import CWrapper

/**
 * Class holding task information.
 */
public class Task  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Task(cself)
      }
    }
    
    /**
     * Task Constructor.
     */
    public convenience init(title: String) {

        let swift_to_sc_title = strdup(title)!
        self.init(create_Task(swift_to_sc_title), true)
    }
    
    /**
     * Get objects title.
     */
    public var title: String {
          get {
            let result = _prop_get_Task_title(cself);
            let sc_to_swift_result = String(cString: result)
            defer{
              result.deallocate()
            }
            return sc_to_swift_result
          }
          
    }
    
}