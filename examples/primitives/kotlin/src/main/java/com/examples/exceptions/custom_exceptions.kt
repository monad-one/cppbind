/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/02/2021-09:25.
 * Please do not change it manually.
 */

package com.examples.exceptions

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*

open class SimpleBaseException
internal constructor(_id: Long) : AutoCloseable, Exception() {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(err_num: Int): Long {
            val id = jConstructor(err_num)
            return id
        }

        @JvmStatic
        private external fun jConstructor(err_num: Int): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(err_num: Int): this(construct_helper(err_num)) {
        //jSet_this(id, this)
    }
    
    open fun errNum(): Int {
        val result = jErrnum(getObjId())
        
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
    private external fun jErrnum(id: Long): Int
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}

open class SimpleChildException
internal constructor(_id: Long) : SimpleBaseException(_id) {
    companion object {
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(err_num: Int): Long {
            val id = jConstructor(err_num)
            return id
        }

        @JvmStatic
        private external fun jConstructor(err_num: Int): Long
    }
    
    
    /**
     * comments
     * 
     */
    constructor(err_num: Int): this(construct_helper(err_num)) {
        //jSet_this(id, this)
    }
    
    /**
     * comments
     * 
     */
    open override fun errNum(): Int {
        val result = jErrnum(getObjId())
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jErrnum(id: Long): Int
}