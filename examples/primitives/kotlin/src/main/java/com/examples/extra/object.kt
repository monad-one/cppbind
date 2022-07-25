/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 07/22/2022-13:29.
 * Please do not change it manually.
 */

package com.examples.extra

import com.examples.cppbind.*
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
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::Object"

        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
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

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    
    open val cppbindObjId: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }

    /**
     * An internal property returning underlying C++ object id.
     * It is intended to be used by the generated code.
     */
    internal val cxxId: Long by lazy {
        jGetcxxid(cppbindObj.id)
    }

    /**
     * An internal property returning underlying C++ type name.
     * It is intended to be used by the generated code.
     */
    internal val cxxTypeName: String by lazy {
        jGettypebyid(cppbindObj.id)
    }
    
    /**
     * String representation for user readability
     * @return result of toReprString by default
     */
    override fun toString(): String {
        return jTostring(cppbindObjId)
    }

    /**
     * Human readable class name
     * @return class name
     */
    open fun className(): String {
        val result = jClassname(cppbindObjId)
        
        return result
    }

    /**
     * Compare on equality two objects
     * @param other is the second one
     * @return is equals two objects
     */
    override fun equals(other: Any?): Boolean {
        other as Object
        return jEquals(cppbindObjId, other.cppbindObjId, other)
    }

    /**
     * Hash for object. Used in wrappers (java, obj-c, python) to define the hash function
     * @return hash of the object
     */
    override fun hashCode(): Int {
        return jHash(cppbindObjId).hashCode()
    }

    /**
     * Detailed string representation only for debug porpoises
     * @return object state as string
     */
    open fun debugInfo(): String {
        val result = jDebuginfo(cppbindObjId)
        
        return result
    }

    /**
     * The object's size in bytes
     * @return bytes count
     */
    open fun bytesCount(): Long {
        val result = jBytescount(cppbindObjId)
        
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
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String
