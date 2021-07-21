/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/21/2021-16:40.
 * Please do not change it manually.
 */

package com.examples.exception_helpers

import alias.*
import exceptionUtils.*



open class StdException
internal constructor(_id: Long) : Exception(), AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    open fun what(): String {
        val err = ErrorObj()
        val result = jWhat(getObjId(), err)
        if (err.typeId != 0) {
            when (err.typeId) {
                1 -> {
                    val excObj = StdException(err.ptrId)
                    ExceptionHandler.handleUncaughtException(excObj.what())
                }
                else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        
        return result
    }

    override fun close() {
        if (id != 0L) {
            jFinalize(id)
            id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jWhat(id: Long, __err__obj__: ErrorObj): String
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}

open class StdBadCast
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdBadTypeId
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdBadAlloc
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdLogicError
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdDomainError
internal constructor(_id: Long) : StdLogicError(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdInvalidArgument
internal constructor(_id: Long) : StdLogicError(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdLengthError
internal constructor(_id: Long) : StdLogicError(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdOutOfRange
internal constructor(_id: Long) : StdLogicError(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdRuntimeError
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdRangeError
internal constructor(_id: Long) : StdRuntimeError(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdOverflowError
internal constructor(_id: Long) : StdRuntimeError(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}

open class StdUnderflowError
internal constructor(_id: Long) : StdRuntimeError(_id) {
    companion object {
        
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
}