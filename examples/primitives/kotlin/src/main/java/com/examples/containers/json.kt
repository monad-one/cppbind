/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/29/2021-08:52.
 * Please do not change it manually.
 */

package com.examples.containers

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*

/**
 * comments
 * 
 */
open class JsonExamples
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * comments
     * 
     */
    constructor(): this(construct_helper()) {
        //jSet_this(id, this)
    }
    
    /**
     * comments
     * 
     */
    fun setJson(j: String): Unit {
        val result = jSetjson(getObjId(), j)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getJson(): String {
        val result = jGetjson(getObjId())
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getSimpleJsonExample(): String {
        val result = jGetsimplejsonexample(getObjId())
        
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
    private external fun jSetjson(id: Long, j: String): Unit
    private external fun jGetjson(id: Long): String
    private external fun jGetsimplejsonexample(id: Long): String
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}