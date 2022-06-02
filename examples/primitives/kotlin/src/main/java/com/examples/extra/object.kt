/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/01/2022-07:54.
 * Please do not change it manually.
 */

package com.examples.extra

import com.examples.cppbind.alias.*
import com.examples.cppbind.exceptionUtils.*
import com.examples.cppbind.exception_helpers.*

/**
 * comments
 * 
 */
open class Object
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        const val cppbindCxxTypeName: String = "cppbind::Object"

        public fun cppbindConstructObject(id: Long, owner: Boolean = false): Object {
            val idType = jGettypebyid(id)
            when (idType) {
                ObjectUsage.cppbindCxxTypeName -> return ObjectUsage(CppBindObject(id, owner))
                else -> return Object(CppBindObject(id, owner))
            }
        }
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    /**
     * String representation for user readability
     * @return result of toReprString by default
     */
    open override fun toString(): String {
        val result = jTostring(id)
        
        return result
    }

    /**
     * Human readable class name
     * @return class name
     */
    open fun className(): String {
        val result = jClassname(id)
        
        return result
    }

    /**
     * Compare on equality two objects
     * @param other is the second one
     * @return is equals two objects
     */
    fun equals(other: Object): Boolean {
        val kotlintojdkother = other.id
        val result = jEquals(id, kotlintojdkother, other)
        
        return result
    }

    /**
     * Hash for object. Used in wrappers (java, obj-c, python) to define the hash function
     * @return hash of the object
     */
    open fun hash(): Long {
        val result = jHash(id)
        
        return result
    }

    /**
     * Detailed string representation only for debug porpoises
     * @return object state as string
     */
    open fun debugInfo(): String {
        val result = jDebuginfo(id)
        
        return result
    }

    /**
     * The object's size in bytes
     * @return bytes count
     */
    open fun bytesCount(): Long {
        val result = jBytescount(id)
        
        return result
    }

    override fun close() {
        if (cppbindObj.owner && cppbindObj.id != 0L) {
            jFinalize(cppbindObj.id)
            cppbindObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jTostring(id: Long): String
    private external fun jClassname(id: Long): String
    private external fun jEquals(id: Long, other: Long, vararg extraObjs: Any?): Boolean
    private external fun jHash(id: Long): Long
    private external fun jDebuginfo(id: Long): String
    private external fun jBytescount(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String
