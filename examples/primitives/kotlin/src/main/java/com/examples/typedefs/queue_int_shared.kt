/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/08/2022-15:51.
 * Please do not change it manually.
 */

package com.examples.typedefs

import com.examples.cppbind.*
import com.examples.cppbind.exception_helpers.*

open class QueueIntShared
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::QueueIntShared"
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
    
    constructor(): this(CppBindObject(constructHelper(), true)) {
    }
    
    fun push_back(element: Int): Unit {
        val result = jPush_back(cppbindObjId, element)
        
        return result
    }

    fun get_size(): Int {
        val result = jGet_size(cppbindObjId)
        
        return result
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
    }

    /**
     * CppBind generated equals method comparing the underlying C++ object ids.
     */
    override fun equals(other: Any?): Boolean {
        other as QueueIntShared
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x%x: %s>".format(cxxId, cxxTypeName)
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
    private external fun jPush_back(id: Long, element: Int, vararg extraObjs: Any?): Unit
    private external fun jGet_size(id: Long): Int
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

open class QueueIntSharedUsage
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(q: QueueIntShared): Long {
            val kotlintojdkq = q.cppbindObjId
            val id = jConstructor(kotlintojdkq, q)
            return id
        }

        @JvmStatic
        private external fun jConstructor(q: Long, vararg extraObjs: Any?): Long

        fun getSize(q: QueueIntShared): Int {
            val kotlintojdkq = q.cppbindObjId
            val result = jGetsize(kotlintojdkq, q)
            
            return result
        }
        @JvmStatic
        private external fun jGetsize(q: Long, vararg extraObjs: Any?): Int

        fun getLastElement(q: QueueIntShared): Int {
            val kotlintojdkq = q.cppbindObjId
            val result = jGetlastelement(kotlintojdkq, q)
            
            return result
        }
        @JvmStatic
        private external fun jGetlastelement(q: Long, vararg extraObjs: Any?): Int

        fun getFirstElement(q: QueueIntShared): Int {
            val kotlintojdkq = q.cppbindObjId
            val result = jGetfirstelement(kotlintojdkq, q)
            
            return result
        }
        @JvmStatic
        private external fun jGetfirstelement(q: Long, vararg extraObjs: Any?): Int

        fun getInvQueue(v: List<Int>): QueueIntShared {
            val kotlintojdkv = IntArray(v.size) 
            var indexV = 0
            for (valueV in v) {
                
                kotlintojdkv[indexV] = valueV
                ++indexV
            }
            val result = jGetinvqueue(kotlintojdkv, v)
            val jdktokotlinresult = QueueIntShared(CppBindObject(result, true))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jGetinvqueue(v: IntArray, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::QueueIntSharedUsage"
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
    
    constructor(q: QueueIntShared): this(CppBindObject(constructHelper(q), true)) {
    }
    
    val saved_queue: QueueIntShared
        get() {
            val result = jSaved_queue(cppbindObjId)
            val jdktokotlinresult = QueueIntShared(CppBindObject(result, true))
            return jdktokotlinresult
        }
    
    fun getSavedQueue(): QueueIntShared {
        val result = jGetsavedqueue(cppbindObjId)
        val jdktokotlinresult = QueueIntShared(CppBindObject(result, true))
        return jdktokotlinresult
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
    }

    /**
     * CppBind generated equals method comparing the underlying C++ object ids.
     */
    override fun equals(other: Any?): Boolean {
        other as QueueIntSharedUsage
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x%x: %s>".format(cxxId, cxxTypeName)
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
    private external fun jGetsavedqueue(id: Long): Long
    private external fun jSaved_queue(id: Long): Long
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String
