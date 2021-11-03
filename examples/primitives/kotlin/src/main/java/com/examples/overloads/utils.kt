/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/26/2021-15:47.
 * Please do not change it manually.
 */

package com.examples.overloads

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*

/**
 * An example with overloaded methods.
 */
open class Utils
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long

        /**
         * Sum two ints.
         */
        fun sum(first: Int, second: Int): Int {
            val result = jSum(first, second)
            
            return result
        }
        @JvmStatic
        private external fun jSum(first: Int, second: Int): Int

        /**
         * Sum two floats.
         */
        fun sum(first: Float, second: Float): Float {
            val result = jSum_1(first, second)
            
            return result
        }
        @JvmStatic
        private external fun jSum_1(first: Float, second: Float): Float
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(construct_helper()) {
    }
    
    /**
     * Concatenate with two strings.
     */
    fun concatenate(first: String, second: String): String {
        val result = jConcatenate(id, first, second)
        
        return result
    }

    /**
     * Concatenate with three strings.
     */
    fun concatenate(first: String, second: String, third: String): String {
        val result = jConcatenate_1(id, first, second, third)
        
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
    private external fun jConcatenate(id: Long, first: String, second: String): String
    private external fun jConcatenate_1(id: Long, first: String, second: String, third: String): String
    private external fun jFinalize(id: Long): Unit
}