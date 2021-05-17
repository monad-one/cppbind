package com.hello_user.hello

import alias.*


/**
 * Structure to describe user.
 */
open class UserInfo
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * Creates user
         */
        protected fun construct_helper(user_name: String, user_age: Long): Long {
            val id = jConstructor(user_name, user_age)
            return id
        }

        @JvmStatic
        private external fun jConstructor(user_name: String, user_age: Long): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * Creates user
     */
    constructor(user_name: String, user_age: Long): this(construct_helper(user_name, user_age)) {
        //jSet_this(id, this)
    }
    
    /**
     * Age of user.
     */
    val age: Long
        get() {
            val result = jAge(getObjId())
            
            return result
        }

    /**
     * Name of user.
     */
    val name: String
        get() {
            val result = jName(getObjId())
            
            return result
        }

    /**
     * Some wishes of the user.
     */
    var want_a_drink: Boolean
        get() {
            val result = jWant_a_drink(getObjId())
            
            return result
        }
        set(value) {
            
            jSetwant_a_drink(getObjId(), value)
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
    private external fun jAge(id: Long): Long
    private external fun jName(id: Long): String
    private external fun jWant_a_drink(id: Long): Boolean
    private external fun jSetwant_a_drink(id: Long, value: Boolean): Unit
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * Host class.
 */
open class Host
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * Creates host
         */
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long


    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * Creates host
     */
    constructor(): this(construct_helper()) {
        //jSet_this(id, this)
    }
    
    /**
     * Greeting function.
     */
    fun hello(user: UserInfo): String {
        val kotlin_to_jdk_user = user.getObjId()
        val result = jHello(getObjId(), kotlin_to_jdk_user)
        
        return result
    }

    /**
     * Welcome function.
     */
    fun welcome(user: UserInfo): String {
        val kotlin_to_jdk_user = user.getObjId()
        val result = jWelcome(getObjId(), kotlin_to_jdk_user)
        
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
    private external fun jHello(id: Long, user: Long): String
    private external fun jWelcome(id: Long, user: Long): String
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}