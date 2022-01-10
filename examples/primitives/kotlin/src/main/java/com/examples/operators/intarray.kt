/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/29/2021-14:10.
 * Please do not change it manually.
 */

package com.examples.operators

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*


/**
 * An example for with overloaded operators.
 */
interface IIntArray : AutoCloseable {
    val id: Long
    
    
    operator fun get(i: Int): Int {
        val result = IIntArrayHelper.jGet(id, i)
        
        return result
    }


    operator fun set(i: Int, value: Int){
        IIntArrayHelper.jSet(id, i, value)
    }

    operator fun get(i: String): Int {
        val result = IIntArrayHelper.jGet_1(id, i)
        
        return result
    }

    operator fun get(i: Double): Int {
        val result = IIntArrayHelper.jGet_2(id, i)
        
        return result
    }
}


class IIntArrayHelper {
    companion object {
        @JvmStatic
        external fun jGet(id: Long, i: Int): Int
        @JvmStatic
        external fun jSet(id: Long, i: Int,  value: Int)
        @JvmStatic
        external fun jGet_1(id: Long, i: String): Int
        @JvmStatic
        external fun jGet_2(id: Long, i: Double): Int
    }
}


open class IntArrayImpl
internal constructor(_id: Long, _owner: Boolean = false) : IIntArray {
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