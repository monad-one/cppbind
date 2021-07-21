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

package com.examples.operators

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*

/**
 * An example for with overloaded methods.
 */
open class Counter
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * Counter constructor.
         */
        protected fun construct_helper(count: Int): Long {
            val id = jConstructor(count)
            return id
        }

        @JvmStatic
        private external fun jConstructor(count: Int): Long




    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * Counter constructor.
     */
    constructor(count: Int): this(construct_helper(count)) {
        //jSet_this(id, this)
    }
    
    /**
     * Getter for count.
     */
    val count: Int
        get() {
            val result = jCount(getObjId())
            
            return result
        }
    
    /**
     * Plus operator
     */
    operator fun plus(counter: Counter): Counter {
        val kotlin_to_jdk_counter = counter.getObjId()
        val err = ErrorObj()
        val result = jPlus(getObjId(), kotlin_to_jdk_counter, err)
        if (err.typeId != 0) {
            when (err.typeId) {
                1 -> {
                    val excObj = StdException(err.ptrId)
                    ExceptionHandler.handleUncaughtException(excObj.what())
                }
                else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        val jdk_to_kotlin_result = Counter(result)
        return jdk_to_kotlin_result
    }

    /**
     * Comparison operator for kotlin
     */
    operator fun compareTo(counter: Counter): Int {
        val kotlin_to_jdk_counter = counter.getObjId()
        val err = ErrorObj()
        val result = jCompareto(getObjId(), kotlin_to_jdk_counter, err)
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

    fun gt(counter: Counter): Boolean {
        val kotlin_to_jdk_counter = counter.getObjId()
        val err = ErrorObj()
        val result = jGt(getObjId(), kotlin_to_jdk_counter, err)
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

    fun add(counter: Counter): Counter {
        val kotlin_to_jdk_counter = counter.getObjId()
        val err = ErrorObj()
        val result = jAdd(getObjId(), kotlin_to_jdk_counter, err)
        if (err.typeId != 0) {
            when (err.typeId) {
                1 -> {
                    val excObj = StdException(err.ptrId)
                    ExceptionHandler.handleUncaughtException(excObj.what())
                }
                else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        val jdk_to_kotlin_result = Counter(result)
        return jdk_to_kotlin_result
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
    private external fun jCount(id: Long): Int
    private external fun jPlus(id: Long, counter: Long, __err__obj__: ErrorObj): Long
    private external fun jCompareto(id: Long, counter: Long, __err__obj__: ErrorObj): Int
    private external fun jGt(id: Long, counter: Long, __err__obj__: ErrorObj): Boolean
    private external fun jAdd(id: Long, counter: Long, __err__obj__: ErrorObj): Long
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}