/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/26/2021-15:47.
 * Please do not change it manually.
 */

package com.examples.inheritance

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*


interface IRectangle : IParallelogram {
    
    open override val area: Double
        get() {
            val result = IRectangleHelper.jArea(id)
            
            return result
        }

    val length: Double
        get() {
            val result = IRectangleHelper.jLength(id)
            
            return result
        }

    val width: Double
        get() {
            val result = IRectangleHelper.jWidth(id)
            
            return result
        }
    
}


class IRectangleHelper {
    companion object {
        @JvmStatic
        external fun jArea(id: Long): Double
        @JvmStatic
        external fun jLength(id: Long): Double
        @JvmStatic
        external fun jWidth(id: Long): Double
    }
}


open class RectangleImpl
internal constructor(_id: Long) : IRectangle {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(length: Double, width: Double): Long {
            val id = jConstructor(length, width)
            return id
        }

        @JvmStatic
        private external fun jConstructor(length: Double, width: Double): Long
    }

    protected var objId = _id
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(length: Double, width: Double): this(construct_helper(length, width)) {
    }

    override fun close() {
        if (objId != 0L) {
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