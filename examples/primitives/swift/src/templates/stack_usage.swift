import Foundation

import CWrapper

/**
 */
public class StackUsage  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_StackUsage(cself)
      }
    }
    
    /**
     */
    public convenience init() {

        self.init(create_StackUsage(), true)
    }
    
    /**
     */
    public func firstItemOfSpecializedStack(p: StackProject) -> Project {

        let swift_to_sc_p = p.cself
        var err = ErrorObj()
        let result = _func_StackUsage_firstItemOfSpecializedStack(cself, swift_to_sc_p, &err);
        let sc_to_swift_result = Project(result)
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
        return sc_to_swift_result;
    }
    /**
     */
    public func firstItemOfTemplateStack(arg0: StackProject) -> Project {

        let swift_to_sc_arg0 = arg0.cself
        var err = ErrorObj()
        let result = _func_StackUsage_firstItemOfTemplateStackProject(cself, swift_to_sc_arg0, &err);
        let sc_to_swift_result = Project(result)
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
        return sc_to_swift_result;
    }
}