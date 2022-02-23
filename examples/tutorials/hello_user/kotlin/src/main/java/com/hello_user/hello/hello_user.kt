/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-14:00.
 * Please do not change it manually.
 */

package com.hello_user.hello

import com.hello_user.iegen.alias.*
import com.hello_user.iegen.exceptionUtils.*
import com.hello_user.iegen.exception_helpers.*

/**
 * Structure to describe user.
 */
open class UserInfo
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
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
    
    protected var objId = _id
    protected val owner = _owner
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    /**
     * Creates user
     */
    constructor(user_name: String, user_age: Long): this(construct_helper(user_name, user_age), true) {
    }
    
    /**
     * Age of user.
     */
    val age: Long
        get() {
            val result = jAge(id)
            
            return result
        }

    /**
     * Name of user.
     */
    val name: String
        get() {
            val result = jName(id)
            
            return result
        }

    /**
     * Some wishes of the user.
     */
    var want_a_drink: Boolean
        get() {
            val result = jWant_a_drink(id)
            
            return result
        }
        set(value) {
            
            jSetwant_a_drink(id, value)
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
    private external fun jAge(id: Long): Long
    private external fun jName(id: Long): String
    private external fun jWant_a_drink(id: Long): Boolean
    private external fun jSetwant_a_drink(id: Long, value: Boolean): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * Host class.
 */
open class Host
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
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
    
    protected var objId = _id
    protected val owner = _owner
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    /**
     * Creates host
     */
    constructor(): this(construct_helper(), true) {
    }
    
    /**
     * Greeting function.
     */
    fun hello(user: UserInfo): String {
        val kotlintojdkuser = user.id
        val result = jHello(id, kotlintojdkuser)
        
        return result
    }

    /**
     * Welcome function.
     */
    fun welcome(user: UserInfo): String {
        val kotlintojdkuser = user.id
        val result = jWelcome(id, kotlintojdkuser)
        
        return result
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
    private external fun jHello(id: Long, user: Long): String
    private external fun jWelcome(id: Long, user: Long): String
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String
