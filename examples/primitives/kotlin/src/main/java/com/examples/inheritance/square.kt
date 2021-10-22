/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/22/2021-13:59.
 * Please do not change it manually.
 */

package com.examples.inheritance

import alias.*
import com.examples.exception_helpers.*
import exceptionUtils.*
import kotlin.system.exitProcess

class Square
internal constructor(_id: Long) : IRhombusFigure, IRectangle, AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(side: Double): Long {
            val id = jConstructor(side)
            return id
        }

        @JvmStatic
        private external fun jConstructor(side: Double): Long
    }
    
    protected var id = _id
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id
    }
    
    constructor(side: Double): this(construct_helper(side)) {
    }
    
    override val area: Double
        get() {
            val result = jArea(getObjId())
            
            return result
        }
    
    override fun perimeter(): Double {
        val result = jPerimeter(getObjId())
        
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
    private external fun jArea(id: Long): Double
    private external fun jPerimeter(id: Long): Double
    private external fun jFinalize(id: Long): Unit
}