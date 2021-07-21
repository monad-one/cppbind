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

package com.examples.simple

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*

open class Path
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(_value: String): Long {
            val id = jConstructor(_value)
            return id
        }

        @JvmStatic
        private external fun jConstructor(_value: String): Long

    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(_value: String): this(construct_helper(_value)) {
        //jSet_this(id, this)
    }
    
    val value: String
        get() {
            val result = jValue(getObjId())
            
            return result
        }
    
    override fun toString(): String {
        val err = ErrorObj()
        val result = jTostring(getObjId(), err)
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
    private external fun jTostring(id: Long, __err__obj__: ErrorObj): String
    private external fun jValue(id: Long): String
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}