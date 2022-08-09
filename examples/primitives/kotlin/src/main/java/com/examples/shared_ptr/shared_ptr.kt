/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/08/2022-14:20.
 * Please do not change it manually.
 */

package com.examples.shared_ptr

import com.examples.cppbind.*
import com.examples.cppbind.exception_helpers.*

open class Car
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(cost: Int): Long {
            val id = jConstructor(cost)
            return id
        }

        @JvmStatic
        private external fun jConstructor(cost: Int, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "Example::Car"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    
    open val cppbindObjId: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }

    /**
     * An internal property returning underlying C++ object id.
     * It is intended to be used by the generated code.
     */
    internal val cxxId: Long by lazy {
        jGetcxxid(cppbindObj.id)
    }

    /**
     * An internal property returning underlying C++ type name.
     * It is intended to be used by the generated code.
     */
    internal val cxxTypeName: String by lazy {
        jGettypebyid(cppbindObj.id)
    }
    
    constructor(cost: Int): this(CppBindObject(constructHelper(cost), true)) {
    }
    
    /**
     * value getter
     */
    val cost: Int
        get() {
            val result = jCost(cppbindObjId)
            
            return result
        }
    
    fun setCostWithCarSharedPtr(sp: Car): Unit {
        val kotlintojdksp = sp.cppbindObjId
        val result = jSetcostwithcarsharedptr(cppbindObjId, kotlintojdksp, sp)
        
        return result
    }

    fun setCostWithCar(sp: Car): Unit {
        val kotlintojdksp = sp.cppbindObjId
        val result = jSetcostwithcar(cppbindObjId, kotlintojdksp, sp)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun setCostWithCarConstSharedPtr(sp: Car): Unit {
        val kotlintojdksp = sp.cppbindObjId
        val result = jSetcostwithcarconstsharedptr(cppbindObjId, kotlintojdksp, sp)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun makeConstSharedPtr(sp: Car): Car {
        val kotlintojdksp = sp.cppbindObjId
        val result = jMakeconstsharedptr(cppbindObjId, kotlintojdksp, sp)
        val jdktokotlinresult = Car(CppBindObject(result, true))
        return jdktokotlinresult
    }

    fun setCostWithCarRef(sp: Car): Unit {
        val kotlintojdksp = sp.cppbindObjId
        val result = jSetcostwithcarref(cppbindObjId, kotlintojdksp, sp)
        
        return result
    }

    fun setCostWithCarPtr(sp: Car): Unit {
        val kotlintojdksp = sp.cppbindObjId
        val result = jSetcostwithcarptr(cppbindObjId, kotlintojdksp, sp)
        
        return result
    }

    fun getNewCarSharedPtr(): Car {
        val result = jGetnewcarsharedptr(cppbindObjId)
        val jdktokotlinresult = Car(CppBindObject(result, true))
        return jdktokotlinresult
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
    }

    /**
     * CppBind generated equals method comparing the underlying C++ object ids.
     */
    override fun equals(other: Any?): Boolean {
        other as Car
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x%x: %s>".format(cxxId, cxxTypeName)
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
    private external fun jCost(id: Long): Int
    private external fun jSetcostwithcarsharedptr(id: Long, sp: Long, vararg extraObjs: Any?): Unit
    private external fun jSetcostwithcar(id: Long, sp: Long, vararg extraObjs: Any?): Unit
    private external fun jSetcostwithcarconstsharedptr(id: Long, sp: Long, vararg extraObjs: Any?): Unit
    private external fun jMakeconstsharedptr(id: Long, sp: Long, vararg extraObjs: Any?): Long
    private external fun jSetcostwithcarref(id: Long, sp: Long, vararg extraObjs: Any?): Unit
    private external fun jSetcostwithcarptr(id: Long, sp: Long, vararg extraObjs: Any?): Unit
    private external fun jGetnewcarsharedptr(id: Long): Long
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

open class CarUsage
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(car: Car): Long {
            val kotlintojdkcar = car.cppbindObjId
            val id = jConstructor(kotlintojdkcar, car)
            return id
        }

        @JvmStatic
        private external fun jConstructor(car: Long, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "Example::CarUsage"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    
    open val cppbindObjId: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }

    /**
     * An internal property returning underlying C++ object id.
     * It is intended to be used by the generated code.
     */
    internal val cxxId: Long by lazy {
        jGetcxxid(cppbindObj.id)
    }

    /**
     * An internal property returning underlying C++ type name.
     * It is intended to be used by the generated code.
     */
    internal val cxxTypeName: String by lazy {
        jGettypebyid(cppbindObj.id)
    }
    
    constructor(car: Car): this(CppBindObject(constructHelper(car), true)) {
    }
    
    /**
     * CppBind supports only by value return in case shared_ref is set
     */
    fun getCar(): Car {
        val result = jGetcar(cppbindObjId)
        val jdktokotlinresult = Car(CppBindObject(result, true))
        return jdktokotlinresult
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
    }

    /**
     * CppBind generated equals method comparing the underlying C++ object ids.
     */
    override fun equals(other: Any?): Boolean {
        other as CarUsage
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x%x: %s>".format(cxxId, cxxTypeName)
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
    private external fun jGetcar(id: Long): Long
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String
