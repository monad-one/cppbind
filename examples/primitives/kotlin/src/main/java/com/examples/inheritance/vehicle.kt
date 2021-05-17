package com.examples.inheritance

import alias.*


open class Vehicle
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(numberOfSeats: Int): Long {
            val id = jConstructor(numberOfSeats)
            return id
        }

        @JvmStatic
        private external fun jConstructor(numberOfSeats: Int): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(numberOfSeats: Int): this(construct_helper(numberOfSeats)) {
        //jSet_this(id, this)
    }
    
    val numberOfSeats: Int
        get() {
            val result = jNumberofseats(getObjId())
            
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
    private external fun jNumberofseats(id: Long): Int
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}