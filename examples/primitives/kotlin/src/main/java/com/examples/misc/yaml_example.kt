/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/19/2021-14:40.
 * Please do not change it manually.
 */

package com.examples.misc

import alias.*
import com.examples.exception_helpers.*
import exceptionUtils.*

open class WithExternalAPIComments
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(s: String): Long {
            val id = jConstructor(s)
            return id
        }

        @JvmStatic
        private external fun jConstructor(s: String): Long

        fun retInt(n: Int): Int {
            val result = jRetint(n)
            
            return result
        }
        @JvmStatic
        private external fun jRetint(n: Int): Int

        fun max(arg0: Int, arg1: Int): Int {
            val result = jMaxInt(arg0, arg1)
            
            return result
        }
        @JvmStatic
        private external fun jMaxInt(arg0: Int, arg1: Int): Int

        fun max(arg0: String, arg1: String): String {
            val result = jMaxString(arg0, arg1)
            
            return result
        }
        @JvmStatic
        private external fun jMaxString(arg0: String, arg1: String): String
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(s: String): this(construct_helper(s)) {
    }
    
    var str: String
        get() {
            val result = jStr(getObjId())
            
            return result
        }
        set(value) {
            
            jSetstr(getObjId(), value)
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
    private external fun jStr(id: Long): String
    private external fun jSetstr(id: Long, value: String): Unit
    private external fun jFinalize(id: Long): Unit
}

open class AdderInt
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        fun add(a: Int, b: Int): Int {
            val result = jAdd(a, b)
            
            return result
        }
        @JvmStatic
        private external fun jAdd(a: Int, b: Int): Int
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
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
    private external fun jFinalize(id: Long): Unit
}

open class AdderDouble
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        fun add(a: Double, b: Double): Double {
            val result = jAdd(a, b)
            
            return result
        }
        @JvmStatic
        private external fun jAdd(a: Double, b: Double): Double
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
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
    private external fun jFinalize(id: Long): Unit
}

enum class color(val value: Int) {
    RED(0),
    GREEN(1),
    BLUE(2);

    companion object {
        private val values = values();
        fun getByValue(value: Int) = values.firstOrNull { it.value == value }
    }
}