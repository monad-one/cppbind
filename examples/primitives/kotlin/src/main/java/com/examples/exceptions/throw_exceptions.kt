/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/22/2021-09:52.
 * Please do not change it manually.
 */

package com.examples.exceptions

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*
import com.examples.simple.Task

val INIT = run {
    System.loadLibrary("wrapper_jni");
}

/**
 * An example of a global function throwing an exception.
 */
fun throwExc(do_throw: Boolean = false): Unit {
    val result = jThrowexc(do_throw)
    
    return result
}

open class ThrowExc
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(do_throw: Boolean): Long {
            val id = jConstructor(do_throw)
            return id
        }

        @JvmStatic
        private external fun jConstructor(do_throw: Boolean): Long

        fun getByKey(m: Map<Int, Int>, key: Int): Int {
            
            val tmp_key_kotlintojdkm = IntArray(m.size) 
            val tmp_val_kotlintojdkm = IntArray(m.size) 
            val kotlintojdkm = Pair<IntArray, IntArray>(tmp_key_kotlintojdkm, tmp_val_kotlintojdkm)
            var index_m = 0
            for ((key_m, value_m) in m) {
                
                
                tmp_key_kotlintojdkm[index_m] = key_m
                tmp_val_kotlintojdkm[index_m] = value_m
                ++index_m
            }
            val result = jGetbykey(kotlintojdkm, key)
            
            return result
        }
        @JvmStatic
        private external fun jGetbykey(m: Pair<IntArray, IntArray>, key: Int): Int

        /**
         * Throws exception with return value of type string.
         */
        fun throwsWithReturnValueString(): String {
            val result = jThrowswithreturnvaluestring()
            
            return result
        }
        @JvmStatic
        private external fun jThrowswithreturnvaluestring(): String

        /**
         * Throws exception with return value of iegen type.
         */
        fun throwsWithReturnValuePtr(): Task {
            val result = jThrowswithreturnvalueptr()
            val jdktokotlinresult = Task(result)
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jThrowswithreturnvalueptr(): Long
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(do_throw: Boolean = false): this(construct_helper(do_throw)) {
    }
    
    var prop: String
        get() {
            val result = jProp(id)
            
            return result
        }
        set(value) {
            
            jSetprop(id, value)
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
        // temporary fix until kotlin ownership will be supported
        // github issues:
        // https://github.com/PicsArt/iegen/issues/349
        // https://github.com/PicsArt/iegen/issues/348
        // close()
    }

    ///// External wrapper functions ////////////
    private external fun jProp(id: Long): String
    private external fun jSetprop(id: Long, value: String): Unit
    private external fun jFinalize(id: Long): Unit
}

private external fun jThrowexc(do_throw: Boolean): Unit
