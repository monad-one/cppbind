/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/21/2021-16:40.
 * Please do not change it manually.
 */

package com.examples.exceptions

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*

/**
 * comments
 * 
 */
open class SystemError
internal constructor(_id: Long) : StdException(_id) {
    companion object {
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(message: String): Long {
            val id = jConstructor(message)
            return id
        }

        @JvmStatic
        private external fun jConstructor(message: String): Long

    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * comments
     * 
     */
    constructor(message: String): this(construct_helper(message)) {
        //jSet_this(id, this)
    }
    
    /**
     * comments
     * 
     */
    open override fun what(): String {
        val err = ErrorObj()
        val result = jWhat(getObjId(), err)
        if (err.typeId != 0) {
            when (err.typeId) {
                1 -> {
                    val excObj = StdException(err.ptrId)
                    ExceptionHandler.handleUncaughtException(excObj.what())
                }
                else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jWhat(id: Long, __err__obj__: ErrorObj): String
}

/**
 * comments
 * 
 */
open class FileError
internal constructor(_id: Long) : SystemError(_id) {
    companion object {
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(message: String): Long {
            val id = jConstructor(message)
            return id
        }

        @JvmStatic
        private external fun jConstructor(message: String): Long

    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * comments
     * 
     */
    constructor(message: String): this(construct_helper(message)) {
        //jSet_this(id, this)
    }
    
    /**
     * comments
     * 
     */
    open override fun what(): String {
        val err = ErrorObj()
        val result = jWhat(getObjId(), err)
        if (err.typeId != 0) {
            when (err.typeId) {
                1 -> {
                    val excObj = StdException(err.ptrId)
                    ExceptionHandler.handleUncaughtException(excObj.what())
                }
                else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jWhat(id: Long, __err__obj__: ErrorObj): String
}

/**
 * comments
 * 
 */
open class SimpleBaseException
internal constructor(_id: Long) : AutoCloseable, Exception() {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
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
    constructor(err_num: Int): this(construct_helper(err_num)) {
        //jSet_this(id, this)
    }
    
    /**
     * comments
     * 
     */
    open fun errNum(): Int {
        val err = ErrorObj()
        val result = jErrnum(getObjId(), err)
        if (err.typeId != 0) {
            when (err.typeId) {
                1 -> {
                    val excObj = StdException(err.ptrId)
                    ExceptionHandler.handleUncaughtException(excObj.what())
                }
                else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        
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
    private external fun jErrnum(id: Long, __err__obj__: ErrorObj): Int
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * comments
 * 
 */
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
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
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
        val err = ErrorObj()
        val result = jErrnum(getObjId(), err)
        if (err.typeId != 0) {
            when (err.typeId) {
                1 -> {
                    val excObj = StdException(err.ptrId)
                    ExceptionHandler.handleUncaughtException(excObj.what())
                }
                else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jErrnum(id: Long, __err__obj__: ErrorObj): Int
}

/**
 * comments
 * 
 */
open class Integer
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(n: Int): Long {
            val id = jConstructor(n)
            return id
        }

        @JvmStatic
        private external fun jConstructor(n: Int): Long
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
    constructor(n: Int): this(construct_helper(n)) {
        //jSet_this(id, this)
    }
    
    /**
     * value getter
     */
    val value: Int
        get() {
            val result = jValue(getObjId())
            
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
    private external fun jValue(id: Long): Int
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * comments
 * 
 */
open class Exc
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
         */
        fun getByKey(m: Map<Int, Int>, k: Int): Int {
            
            val tmp_key_kotlin_to_jdk_m = IntArray(m.size) 
            val tmp_val_kotlin_to_jdk_m = IntArray(m.size) 
            val kotlin_to_jdk_m = Pair<IntArray, IntArray>(tmp_key_kotlin_to_jdk_m, tmp_val_kotlin_to_jdk_m)
            var index = 0
            for ((key, value) in m) {
                
                
                tmp_key_kotlin_to_jdk_m[index] = key
                tmp_val_kotlin_to_jdk_m[index] = value
                ++index
            }
            val err = ErrorObj()
            val result = jGetbykey(kotlin_to_jdk_m, k, err)
            if (err.typeId != 0) {
                when (err.typeId) {
                    1 -> {
                        throw StdOutOfRange(err.ptrId)
                    }
                    2 -> {
                        throw StdInvalidArgument(err.ptrId)
                    }
                    3 -> {
                        throw StdLengthError(err.ptrId)
                    }
                    4 -> {
                        throw SystemError(err.ptrId)
                    }
                    5 -> {
                        val excObj = StdException(err.ptrId)
                        ExceptionHandler.handleUncaughtException(excObj.what())
                    }
                    else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
                }
            }
            
            return result
        }
        @JvmStatic
        private external fun jGetbykey(m: Pair<IntArray, IntArray>, k: Int, __err__obj__: ErrorObj): Int

        /**
         * comments
         * 
         */
        fun noop(): Unit {
            val err = ErrorObj()
            val result = jNoop(err)
            if (err.typeId != 0) {
                when (err.typeId) {
                    1 -> {
                        val excObj = StdException(err.ptrId)
                        ExceptionHandler.handleUncaughtException(excObj.what())
                    }
                    else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
                }
            }
            
            return result
        }
        @JvmStatic
        private external fun jNoop(__err__obj__: ErrorObj): Unit

        /**
         * comments
         * 
         */
        fun returnInteger(do_throw: Boolean): Integer {
            val err = ErrorObj()
            val result = jReturninteger(do_throw, err)
            if (err.typeId != 0) {
                when (err.typeId) {
                    1 -> {
                        throw StdOutOfRange(err.ptrId)
                    }
                    2 -> {
                        val excObj = StdException(err.ptrId)
                        ExceptionHandler.handleUncaughtException(excObj.what())
                    }
                    else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
                }
            }
            val jdk_to_kotlin_result = Integer(result)
            return jdk_to_kotlin_result
        }
        @JvmStatic
        private external fun jReturninteger(do_throw: Boolean, __err__obj__: ErrorObj): Long

        /**
         * comments
         * 
         */
        fun raiseErrorByType(err_type: String): Unit {
            val err = ErrorObj()
            val result = jRaiseerrorbytype(err_type, err)
            if (err.typeId != 0) {
                when (err.typeId) {
                    1 -> {
                        throw StdRuntimeError(err.ptrId)
                    }
                    2 -> {
                        throw FileError(err.ptrId)
                    }
                    3 -> {
                        throw SystemError(err.ptrId)
                    }
                    4 -> {
                        throw SimpleChildException(err.ptrId)
                    }
                    5 -> {
                        throw SimpleBaseException(err.ptrId)
                    }
                    6 -> {
                        throw StdException(err.ptrId)
                    }
                    else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
                }
            }
            
            return result
        }
        @JvmStatic
        private external fun jRaiseerrorbytype(err_type: String, __err__obj__: ErrorObj): Unit
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

    ///// External wrapper functions ////////////
    



    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}