/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/26/2021-15:37.
 * Please do not change it manually.
 */

package com.examples.exception_helpers

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*

open class StdException
internal constructor(_id: Long) : AutoCloseable, Exception() {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    open fun what(): String {
        val result = jWhat(id)
        
        return result
    }

    override fun close() {
        if (objId != 0L) {
            jFinalize(objId)
            objId = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jWhat(id: Long): String
    private external fun jFinalize(id: Long): Unit
}

open class StdBadCast
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
}

open class StdBadTypeId
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
}

open class StdBadAlloc
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
}

open class StdLogicError
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
}

open class StdDomainError
internal constructor(_id: Long) : StdLogicError(_id) {
    companion object {
        
    }
    
}

open class StdInvalidArgument
internal constructor(_id: Long) : StdLogicError(_id) {
    companion object {
        
    }
    
}

open class StdLengthError
internal constructor(_id: Long) : StdLogicError(_id) {
    companion object {
        
    }
    
}

open class StdOutOfRange
internal constructor(_id: Long) : StdLogicError(_id) {
    companion object {
        
    }
    
}

open class StdRuntimeError
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
}

open class StdRangeError
internal constructor(_id: Long) : StdRuntimeError(_id) {
    companion object {
        
    }
    
}

open class StdOverflowError
internal constructor(_id: Long) : StdRuntimeError(_id) {
    companion object {
        
    }
    
}

open class StdUnderflowError
internal constructor(_id: Long) : StdRuntimeError(_id) {
    companion object {
        
    }
    
}