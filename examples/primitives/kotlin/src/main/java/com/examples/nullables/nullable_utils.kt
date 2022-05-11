/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 05/04/2022-08:43.
 * Please do not change it manually.
 */

package com.examples.nullables

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

private val INIT = run {
    System.loadLibrary("wrapper_jni");
}

open class NumberInt
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(val_: Int): Long {
            val id = jConstructor(val_)
            return id
        }

        @JvmStatic
        private external fun jConstructor(val_: Int): Long
        const val iegenCxxTypeName: String = "iegen::example::nullable::NumberInt"
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(val_: Int): this(IEGenObject(construct_helper(val_), true)) {
    }
    
    val value: Int
        get() {
            val result = jValue(id)
            
            return result
        }

    override fun close() {
        if (iegObj.owner && iegObj.id != 0L) {
            jFinalize(iegObj.id)
            iegObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jValue(id: Long): Int
    private external fun jFinalize(id: Long): Unit
}

open class NumberDouble
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(val_: Double): Long {
            val id = jConstructor(val_)
            return id
        }

        @JvmStatic
        private external fun jConstructor(val_: Double): Long
        const val iegenCxxTypeName: String = "iegen::example::nullable::NumberDouble"
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(val_: Double): this(IEGenObject(construct_helper(val_), true)) {
    }
    
    val value: Double
        get() {
            val result = jValue(id)
            
            return result
        }

    override fun close() {
        if (iegObj.owner && iegObj.id != 0L) {
            jFinalize(iegObj.id)
            iegObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jValue(id: Long): Double
    private external fun jFinalize(id: Long): Unit
}

/**
 * An example with nullable arguments.
 */
open class Utils
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(num: NumberDouble?): Long {
            val kotlintojdknum = num?.id ?: 0L
            val id = jConstructor(kotlintojdknum)
            return id
        }

        @JvmStatic
        private external fun jConstructor(num: Long): Long

        fun max(first: NumberDouble?, second: NumberDouble): NumberDouble? {
            val kotlintojdkfirst = first?.id ?: 0L
            val kotlintojdksecond = second.id
            val result = jMax(kotlintojdkfirst, kotlintojdksecond)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(IEGenObject(result))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jMax(first: Long, second: Long): Long

        fun max(first: NumberInt?, second: NumberInt?): NumberInt? {
            val kotlintojdkfirst = first?.id ?: 0L
            val kotlintojdksecond = second?.id ?: 0L
            val result = jMax_1(kotlintojdkfirst, kotlintojdksecond)
            val jdktokotlinresult = if (result == 0L) null else NumberInt(IEGenObject(result, true))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jMax_1(first: Long, second: Long): Long

        fun checkNonnullArg(number: NumberDouble): Unit {
            val kotlintojdknumber = number.id
            val result = jChecknonnullarg(kotlintojdknumber)
            
            return result
        }
        @JvmStatic
        private external fun jChecknonnullarg(number: Long): Unit

        fun checkNonnullReturn(): NumberDouble {
            val result = jChecknonnullreturn()
            val jdktokotlinresult = NumberDouble(IEGenObject(result))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jChecknonnullreturn(): Long
        const val iegenCxxTypeName: String = "iegen::example::nullable::Utils"
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(num: NumberDouble?): this(IEGenObject(construct_helper(num), true)) {
    }
    
    var nullable: NumberDouble?
        get() {
            val result = jNullable(id)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(IEGenObject(result))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value?.id ?: 0L
            jSetnullable(id, kotlintojdkvalue)
        }

    var nonNull: NumberDouble
        get() {
            val result = jNonnull(id)
            val jdktokotlinresult = NumberDouble(IEGenObject(result))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.id
            jSetnonnull(id, kotlintojdkvalue)
        }

    var numDouble: NumberDouble?
        get() {
            val result = jNumdouble(id)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(IEGenObject(result))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value?.id ?: 0L
            jSetnumdouble(id, kotlintojdkvalue)
        }
        

    var numInt: NumberInt
        get() {
            val result = jNumint(id)
            val jdktokotlinresult = NumberInt(IEGenObject(result, true))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.id
            jSetnumint(id, kotlintojdkvalue)
        }
        

    override fun close() {
        if (iegObj.owner && iegObj.id != 0L) {
            jFinalize(iegObj.id)
            iegObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jNullable(id: Long): Long
    private external fun jSetnullable(id: Long, value: Long): Unit
    private external fun jNonnull(id: Long): Long
    private external fun jSetnonnull(id: Long, value: Long): Unit
    private external fun jNumdouble(id: Long): Long
    private external fun jSetnumdouble(id: Long, value: Long): Unit
    private external fun jNumint(id: Long): Long
    private external fun jSetnumint(id: Long, value: Long): Unit
    private external fun jFinalize(id: Long): Unit
}

fun reverseString(s: String?): String? {
    val kotlintojdks = if (s != null) s!! else null
    val result = jReversestring(kotlintojdks)
    val jdktokotlinresult = if (result != null) result!! else null
    return jdktokotlinresult
}

private external fun jReversestring(s: String?): String?

private external fun jGettypebyid(id: Long): String
