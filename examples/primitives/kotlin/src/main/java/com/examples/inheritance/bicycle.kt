package com.examples.inheritance

import alias.*



open class Bicycle
internal constructor(_id: Long) : Vehicle(_id) {
    companion object {
        
        protected fun construct_helper(numberOfSeats: Int): Long {
            val id = jConstructor(numberOfSeats)
            return id
        }

        @JvmStatic
        private external fun jConstructor(numberOfSeats: Int): Long
    }
    
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(numberOfSeats: Int) : this(construct_helper(numberOfSeats)) {
        //jSet_this(id, this)
    }
}