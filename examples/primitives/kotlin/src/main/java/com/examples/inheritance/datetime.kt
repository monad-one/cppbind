/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/25/2021-12:58.
 * Please do not change it manually.
 */

package com.examples.inheritance

import alias.*
import com.examples.exception_helpers.*
import exceptionUtils.*

open class DateTime
internal constructor(_id: Long) : ITime, Date(_id) {
    companion object {
        
        protected fun construct_helper(d: Int, mo: Int, y: Int, h: Int, mi: Int, s: Int): Long {
            val id = jConstructor(d, mo, y, h, mi, s)
            return id
        }

        @JvmStatic
        private external fun jConstructor(d: Int, mo: Int, y: Int, h: Int, mi: Int, s: Int): Long
    }
    
    override val id: Long
        get() {
            if (ObjId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return ObjId;
        }
    
    constructor(d: Int, mo: Int, y: Int, h: Int, mi: Int, s: Int): this(construct_helper(d, mo, y, h, mi, s)) {
    }
    
    val datetime: String
        get() {
            val result = jDatetime(id)
            
            return result
        }
    
    open override fun value(): String {
        val result = jValue(id)
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jValue(id: Long): String
    private external fun jDatetime(id: Long): String
}