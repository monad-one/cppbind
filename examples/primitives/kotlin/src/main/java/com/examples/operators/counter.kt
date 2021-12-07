/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-17:14.
 * Please do not change it manually.
 */

package com.examples.operators

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*

/**
 * An example for with overloaded methods.
 */
open class Counter
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
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
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    /**
     * Counter constructor.
     */
    constructor(count: Int): this(construct_helper(count)) {
    }
    
    /**
     * Getter for count.
     */
    val count: Int
        get() {
            val result = jCount(id)
            
            return result
        }
    
    /**
     * Plus operator
     */
    operator fun plus(counter: Counter): Counter {
        val kotlintojdkcounter = counter.id
        val result = jPlus(id, kotlintojdkcounter)
        val jdktokotlinresult = Counter(result)
        return jdktokotlinresult
    }

    /**
     * Comparison operator for kotlin
     */
    operator fun compareTo(counter: Counter): Int {
        val kotlintojdkcounter = counter.id
        val result = jCompareto(id, kotlintojdkcounter)
        
        return result
    }

    fun gt(counter: Counter): Boolean {
        val kotlintojdkcounter = counter.id
        val result = jGt(id, kotlintojdkcounter)
        
        return result
    }

    fun add(counter: Counter): Counter {
        val kotlintojdkcounter = counter.id
        val result = jAdd(id, kotlintojdkcounter)
        val jdktokotlinresult = Counter(result)
        return jdktokotlinresult
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
    private external fun jCount(id: Long): Int
    private external fun jPlus(id: Long, counter: Long): Long
    private external fun jCompareto(id: Long, counter: Long): Int
    private external fun jGt(id: Long, counter: Long): Boolean
    private external fun jAdd(id: Long, counter: Long): Long
    private external fun jFinalize(id: Long): Unit
}