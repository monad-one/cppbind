/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/02/2022-06:49.
 * Please do not change it manually.
 */

package example_lib.hello

import example_lib.cppbind.alias.*
import example_lib.cppbind.exceptionUtils.*
import example_lib.cppbind.exception_helpers.*

/**
 * Structure to describe user.
 */
open class UserInfo
internal constructor(obj: CppBindObject) : AutoCloseable {
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
        private external fun jConstructor(user_name: String, user_age: Long, vararg extraObjs: Any?): Long
        const val cppbindCxxTypeName: String = "UserInfo"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    /**
     * Creates user
     */
    constructor(user_name: String, user_age: Long): this(CppBindObject(construct_helper(user_name, user_age), true)) {
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
            
            jSetwant_a_drink(id, value, value)
        }
        

    override fun close() {
        if (cppbindObj.owner && cppbindObj.id != 0L) {
            jFinalize(cppbindObj.id)
            cppbindObj.id = 0L
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
    private external fun jSetwant_a_drink(id: Long, value: Boolean, valueObj: Any?): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * Host class.
 */
open class Host
internal constructor(obj: CppBindObject) : AutoCloseable {
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
        const val cppbindCxxTypeName: String = "Host"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    /**
     * Creates host
     */
    constructor(): this(CppBindObject(construct_helper(), true)) {
    }
    
    /**
     * Greeting function.
     */
    fun hello(user: UserInfo): String {
        val kotlintojdkuser = user.id
        val result = jHello(id, kotlintojdkuser, user)
        
        return result
    }

    /**
     * Welcome function.
     */
    fun welcome(user: UserInfo): String {
        val kotlintojdkuser = user.id
        val result = jWelcome(id, kotlintojdkuser, user)
        
        return result
    }

    override fun close() {
        if (cppbindObj.owner && cppbindObj.id != 0L) {
            jFinalize(cppbindObj.id)
            cppbindObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jHello(id: Long, user: Long, vararg extraObjs: Any?): String
    private external fun jWelcome(id: Long, user: Long, vararg extraObjs: Any?): String
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String