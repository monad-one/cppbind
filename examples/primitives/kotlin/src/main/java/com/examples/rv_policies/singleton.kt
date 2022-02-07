/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/01/2022-13:50.
 * Please do not change it manually.
 */

package com.examples.rv_policies

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class Singleton
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        fun getInstance(): Singleton {
            val result = jGetinstance()
            val jdktokotlinresult = Singleton(result)
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jGetinstance(): Long

        fun getInstancePtr(): Singleton {
            val result = jGetinstanceptr()
            val jdktokotlinresult = Singleton(result)
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jGetinstanceptr(): Long
    }
    
    protected var objId = _id
    protected val owner = _owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
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
    private external fun jFinalize(id: Long): Unit
}