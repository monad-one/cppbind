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

package com.examples.misc

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*

/**
 * comments
 * 
 */
open class Object
internal constructor(_id: Long) : AutoCloseable {
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
    
    /**
     * String representation for mainly debug porpoises
     * @return class name and object address
     */
    open override fun toString(): String {
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

    /**
     * Human readable class name
     * @return class name
     */
    open fun className(): String {
        val err = ErrorObj()
        val result = jClassname(getObjId(), err)
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

    /**
     * Compare on equality two objects
     * @param other is the second one
     * @return is equals two objects
     */
    fun equals(other: Object): Boolean {
        val kotlin_to_jdk_other = other.getObjId()
        val err = ErrorObj()
        val result = jEquals(getObjId(), kotlin_to_jdk_other, err)
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

    /**
     * Hash for object. Used in wrappers (java, obj-c, python) to define the hash function
     * @return hash of the object
     */
    open fun hash(): Long {
        val err = ErrorObj()
        val result = jHash(getObjId(), err)
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

    /**
     * Detailed string representation only for debug porpoises
     * @return object state as string
     */
    open fun debugInfo(): String {
        val err = ErrorObj()
        val result = jDebuginfo(getObjId(), err)
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

    /**
     * The object's size in bytes
     * @return bytes count
     */
    open fun bytesCount(): Long {
        val err = ErrorObj()
        val result = jBytescount(getObjId(), err)
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
    private external fun jClassname(id: Long, __err__obj__: ErrorObj): String
    private external fun jEquals(id: Long, other: Long, __err__obj__: ErrorObj): Boolean
    private external fun jHash(id: Long, __err__obj__: ErrorObj): Long
    private external fun jDebuginfo(id: Long, __err__obj__: ErrorObj): String
    private external fun jBytescount(id: Long, __err__obj__: ErrorObj): Long
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}