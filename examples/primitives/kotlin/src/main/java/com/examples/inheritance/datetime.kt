/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 05/05/2022-13:33.
 * Please do not change it manually.
 */

package com.examples.inheritance

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*


/**
 * datetime.hpp is parsed before time.hpp and it contains DateTime class which is inherited from Time(declared in time.hpp).
 * We generate bindings for these two classes in the same datetime file to validate their order.
 */
interface ITime : IBase {
    
    val time: String
        get() {
            val result = ITimeHelper.jTime(id)
            
            return result
        }
    
    open override fun value(): String {
        val result = ITimeHelper.jValue(id)
        
        return result
    }

    companion object {
        public fun iegenConstructObject(id: Long, owner: Boolean = false): ITime {
            val idType = jGettypebyid(id)
            when (idType) {
                DateTime.iegenCxxTypeName -> return DateTime(IEGenObject(id, owner))
                else -> return TimeImpl(IEGenObject(id, owner))
            }
        }
    }
}


class ITimeHelper {
    companion object {
        @JvmStatic
        external fun jValue(id: Long): String
        @JvmStatic
        external fun jTime(id: Long): String
    }
}


open class TimeImpl
internal constructor(obj : IEGenObject) : ITime {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(h: Int, m: Int, s: Int): Long {
            val id = jConstructor(h, m, s)
            return id
        }

        @JvmStatic
        private external fun jConstructor(h: Int, m: Int, s: Int): Long
        const val iegenCxxTypeName: String = "iegen::example::Time"
    }

    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }

    override val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(h: Int, m: Int, s: Int): this(IEGenObject(construct_helper(h, m, s), true)) {
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
    private external fun jFinalize(id: Long): Unit
}

/**
 * datetime.hpp is parsed before time.hpp and it contains DateTime class which is inherited from Time(declared in time.hpp).
 * We generate bindings for these two classes in the same datetime file to validate their order.
 */
open class DateTime
internal constructor(obj: IEGenObject) : ITime, Date(obj) {
    companion object {
        
        protected fun construct_helper(d: Int, mo: Int, y: Int, h: Int, mi: Int, s: Int): Long {
            val id = jConstructor(d, mo, y, h, mi, s)
            return id
        }

        @JvmStatic
        private external fun jConstructor(d: Int, mo: Int, y: Int, h: Int, mi: Int, s: Int): Long
        const val iegenCxxTypeName: String = "iegen::example::DateTime"
    }
    
    override val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(d: Int, mo: Int, y: Int, h: Int, mi: Int, s: Int): this(IEGenObject(construct_helper(d, mo, y, h, mi, s), true)) {
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

private external fun jGettypebyid(id: Long): String
