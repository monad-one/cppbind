/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-11:38.
 * Please do not change it manually.
 */

package com.examples.shared_ptr

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*


interface ISignShared : AutoCloseable {
    val id: Long
    fun keepIEGenReference(ref: Any)
    
    
    open fun typeName(): String {
        val result = ISignSharedHelper.jTypename(id)
        
        return result
    }
}


class ISignSharedHelper {
    companion object {
        @JvmStatic
        external fun jTypename(id: Long): String
    }
}


open class SignSharedImpl
internal constructor(_id: Long, _owner: Boolean = false) : ISignShared {
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
    }

    protected var objId = _id
    protected val owner = _owner
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }

    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(construct_helper(), true) {
    }

    override fun close() {
        if (owner && objId != 0L) {
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
    private external fun jFinalize(id: Long): Unit
}

open class TextShared
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
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
    }
    
    protected var objId = _id
    protected val owner = _owner
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }

    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(construct_helper(), true) {
    }
    
    open fun typeName(): String {
        val result = jTypename(id)
        
        return result
    }

    override fun close() {
        if (owner && objId != 0L) {
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
    private external fun jTypename(id: Long): String
    private external fun jFinalize(id: Long): Unit
}

open class DigitShared
internal constructor(_id: Long, _owner: Boolean = false) : ISignShared, TextShared(_id, _owner) {
    companion object {
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(construct_helper(), true) {
    }
    
    open override fun typeName(): String {
        val result = jTypename(id)
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jTypename(id: Long): String
}

open class SymbolUsageShared
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
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

        protected fun construct_helper(d: DigitShared): Long {
            val kotlintojdkd = d.id
            val id = jConstructor_1(kotlintojdkd)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(d: Long): Long
    }
    
    protected var objId = _id
    protected val owner = _owner
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }

    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(construct_helper(), true) {
    }

    constructor(d: DigitShared): this(construct_helper(d), true) {
    }
    
    fun getTextType(t: TextShared): String {
        val kotlintojdkt = t.id
        val result = jGettexttype(id, kotlintojdkt)
        
        return result
    }

    fun getSignType(s: ISignShared): String {
        val kotlintojdks = s.id
        val result = jGetsigntype(id, kotlintojdks)
        
        return result
    }

    fun getTextId(t: TextShared): Int {
        val kotlintojdkt = t.id
        val result = jGettextid(id, kotlintojdkt)
        
        return result
    }

    fun getSignId(s: ISignShared): Int {
        val kotlintojdks = s.id
        val result = jGetsignid(id, kotlintojdks)
        
        return result
    }

    fun getTextPtr(): TextShared {
        val result = jGettextptr(id)
        
            val jdktokotlinresult : TextShared
            val resultType = jGettypebyid(result)
            when (resultType) {
                "iegen::example::DigitShared" -> jdktokotlinresult = DigitShared(result, true)
                else -> jdktokotlinresult = TextShared(result, true)
            }
        return jdktokotlinresult
    }

    fun getSignPtr(): ISignShared {
        val result = jGetsignptr(id)
        
            val jdktokotlinresult : ISignShared
            val resultType = jGettypebyid(result)
            when (resultType) {
                "iegen::example::DigitShared" -> jdktokotlinresult = DigitShared(result, true)
                else -> jdktokotlinresult = SignSharedImpl(result, true)
            }
        return jdktokotlinresult
    }

    override fun close() {
        if (owner && objId != 0L) {
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
    private external fun jGettexttype(id: Long, t: Long): String
    private external fun jGetsigntype(id: Long, s: Long): String
    private external fun jGettextid(id: Long, t: Long): Int
    private external fun jGetsignid(id: Long, s: Long): Int
    private external fun jGettextptr(id: Long): Long
    private external fun jGetsignptr(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String