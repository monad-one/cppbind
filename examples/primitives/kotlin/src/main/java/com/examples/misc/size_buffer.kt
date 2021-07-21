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

package com.examples.misc

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*import java.awt.geom.Point2D

/**
 * comments
 * 
 */
open class SizeUsage
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
         */
        fun multiplyBy(size: Point2D.Double, n: Int): Point2D.Double {
            val width_size = size.getX()
            val height_size = size.getY()
            val kotlin_to_jdk_size = DoubleArray(2)
            kotlin_to_jdk_size.set(0, width_size)
            kotlin_to_jdk_size.set(1, height_size)
            val err = ErrorObj()
            val result = jMultiplyby(kotlin_to_jdk_size, n, err)
            if (err.typeId != 0) {
                when (err.typeId) {
                    1 -> {
                        val excObj = StdException(err.ptrId)
                        ExceptionHandler.handleUncaughtException(excObj.what())
                    }
                    else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
                }
            }
            val width_result = result[0]
            val height_result = result[1]
            val jdk_to_kotlin_result = Point2D.Double(width_result, height_result)
            return jdk_to_kotlin_result
        }
        @JvmStatic
        private external fun jMultiplyby(size: DoubleArray, n: Int, __err__obj__: ErrorObj): DoubleArray
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

/**
 * comments
 * 
 */
open class BufferUsage
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
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
    
    constructor(): this(construct_helper()) {
        //jSet_this(id, this)
    }
    
    fun usage1(b: BufferInt): String {
        val kotlin_to_jdk_b = b.getObjId()
        val err = ErrorObj()
        val result = jUsage1(getObjId(), kotlin_to_jdk_b, err)
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

    fun usage2(): BufferInt {
        val err = ErrorObj()
        val result = jUsage2(getObjId(), err)
        if (err.typeId != 0) {
            when (err.typeId) {
                1 -> {
                    val excObj = StdException(err.ptrId)
                    ExceptionHandler.handleUncaughtException(excObj.what())
                }
                else -> ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        val jdk_to_kotlin_result = BufferInt(result)
        return jdk_to_kotlin_result
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
    private external fun jUsage1(id: Long, b: Long, __err__obj__: ErrorObj): String
    private external fun jUsage2(id: Long, __err__obj__: ErrorObj): Long
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}