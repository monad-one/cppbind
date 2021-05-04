package com.examples.getters

import alias.*


/**
 * comments
 * 
 */
open class NumberInt
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(n: Int): Long {
            val id = jConstructor(n)
            return id
        }

        @JvmStatic
        private external fun jConstructor(n: Int): Long
    }

    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * comments
     * 
     */
    constructor(n: Int) : this(construct_helper(n)) {
        //jSet_this(id, this)
    }
    
    /**
     * comments
     * 
     */
    var num: Int
        get() {
            val result = jNum(getObjId())
            
            return result
        }
        set(value) {
            
            jSetnum(getObjId(), value)
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
    private external fun jNum(id: Long): Int
    private external fun jSetnum(id: Long, value: Int): Unit
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * comments
 * 
 */
open class NumberDouble
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(n: Double): Long {
            val id = jConstructor(n)
            return id
        }

        @JvmStatic
        private external fun jConstructor(n: Double): Long
    }

    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * comments
     * 
     */
    constructor(n: Double) : this(construct_helper(n)) {
        //jSet_this(id, this)
    }
    
    /**
     * comments
     * 
     */
    var num: Double
        get() {
            val result = jNum(getObjId())
            
            return result
        }
        set(value) {
            
            jSetnum(getObjId(), value)
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
    private external fun jNum(id: Long): Double
    private external fun jSetnum(id: Long, value: Double): Unit
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}