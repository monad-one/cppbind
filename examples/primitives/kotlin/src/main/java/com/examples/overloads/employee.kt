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

package com.examples.overloads

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*

open class Employee
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(name: String): Long {
            val id = jConstructor(name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(name: String): Long

        protected fun construct_helper(age: Int, email: String): Long {
            val id = jConstructor_1(age, email)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(age: Int, email: String): Long


    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(name: String): this(construct_helper(name)) {
        //jSet_this(id, this)
    }

    constructor(age: Int, email: String): this(construct_helper(age, email)) {
        //jSet_this(id, this)
    }
    
    val name: String
        get() {
            val result = jName(getObjId())
            
            return result
        }

    val email: String
        get() {
            val result = jEmail(getObjId())
            
            return result
        }

    val age: Int
        get() {
            val result = jAge(getObjId())
            
            return result
        }
    
    fun setData(name: String, age: Int, email: String): Unit {
        val err = ErrorObj()
        val result = jSetdata(getObjId(), name, age, email, err)
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

    fun setData(age: Int): Unit {
        val err = ErrorObj()
        val result = jSetdata_1(getObjId(), age, err)
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
    private external fun jSetdata(id: Long, name: String, age: Int, email: String, __err__obj__: ErrorObj): Unit
    private external fun jSetdata_1(id: Long, age: Int, __err__obj__: ErrorObj): Unit
    private external fun jName(id: Long): String
    private external fun jEmail(id: Long): String
    private external fun jAge(id: Long): Int
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}