/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/25/2021-13:08.
 * Please do not change it manually.
 */

package com.examples.enums

import alias.*
import com.examples.exception_helpers.*
import exceptionUtils.*

/**
 * Class Frame.
 */
open class Frame
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
    
    protected var ObjId = _id
    
    open val id: Long
        get() {
            if (ObjId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return ObjId;
        }
    
    constructor(): this(construct_helper()) {
    }
    
    var backgroundColor: Color
        get() {
            val result = jBackgroundcolor(id)
            val jdk_to_kotlin_result = Color.getByValue(result)!!
            return jdk_to_kotlin_result
        }
        set(value) {
            val kotlin_to_jdk_value = value.value
            jSetbackgroundcolor(id, kotlin_to_jdk_value)
        }
        

    var backgroundColorShade: ColorShade
        get() {
            val result = jBackgroundcolorshade(id)
            val jdk_to_kotlin_result = ColorShade.getByValue(result)!!
            return jdk_to_kotlin_result
        }
        set(value) {
            val kotlin_to_jdk_value = value.value
            jSetbackgroundcolorshade(id, kotlin_to_jdk_value)
        }
        

    override fun close() {
        if (ObjId != 0L) {
            jFinalize(ObjId)
            ObjId = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jBackgroundcolor(id: Long): Int
    private external fun jSetbackgroundcolor(id: Long, value: Int): Unit
    private external fun jBackgroundcolorshade(id: Long): Int
    private external fun jSetbackgroundcolorshade(id: Long, value: Int): Unit
    private external fun jFinalize(id: Long): Unit
}