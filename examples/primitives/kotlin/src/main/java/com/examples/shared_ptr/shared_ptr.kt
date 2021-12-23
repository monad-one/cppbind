/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/21/2021-09:28.
 * Please do not change it manually.
 */

package com.examples.shared_ptr

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class Car
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(cost: Int): Long {
            val id = jConstructor(cost)
            return id
        }

        @JvmStatic
        private external fun jConstructor(cost: Int): Long
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(cost: Int): this(construct_helper(cost)) {
    }
    
    /**
     * value getter
     */
    val cost: Int
        get() {
            val result = jCost(id)
            
            return result
        }
    
    fun setCostWithCarSharedPtr(sp: Car): Unit {
        val kotlintojdksp = sp.id
        val result = jSetcostwithcarsharedptr(id, kotlintojdksp)
        
        return result
    }

    fun setCostWithCar(sp: Car): Unit {
        val kotlintojdksp = sp.id
        val result = jSetcostwithcar(id, kotlintojdksp)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun setCostWithCarConstSharedPtr(sp: Car): Unit {
        val kotlintojdksp = sp.id
        val result = jSetcostwithcarconstsharedptr(id, kotlintojdksp)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun makeConstSharedPtr(sp: Car): Car {
        val kotlintojdksp = sp.id
        val result = jMakeconstsharedptr(id, kotlintojdksp)
        val jdktokotlinresult = Car(result)
        return jdktokotlinresult
    }

    fun setCostWithCarRef(sp: Car): Unit {
        val kotlintojdksp = sp.id
        val result = jSetcostwithcarref(id, kotlintojdksp)
        
        return result
    }

    fun setCostWithCarPtr(sp: Car): Unit {
        val kotlintojdksp = sp.id
        val result = jSetcostwithcarptr(id, kotlintojdksp)
        
        return result
    }

    fun getNewCarSharedPtr(): Car {
        val result = jGetnewcarsharedptr(id)
        val jdktokotlinresult = Car(result)
        return jdktokotlinresult
    }

    override fun close() {
        if (objId != 0L) {
            jFinalize(objId)
            objId = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        // temporary fix until kotlin ownership will be supported
        // github issues:
        // https://github.com/PicsArt/iegen/issues/349
        // https://github.com/PicsArt/iegen/issues/348
        // close()
    }

    ///// External wrapper functions ////////////
    private external fun jCost(id: Long): Int
    private external fun jSetcostwithcarsharedptr(id: Long, sp: Long): Unit
    private external fun jSetcostwithcar(id: Long, sp: Long): Unit
    private external fun jSetcostwithcarconstsharedptr(id: Long, sp: Long): Unit
    private external fun jMakeconstsharedptr(id: Long, sp: Long): Long
    private external fun jSetcostwithcarref(id: Long, sp: Long): Unit
    private external fun jSetcostwithcarptr(id: Long, sp: Long): Unit
    private external fun jGetnewcarsharedptr(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

open class CarUsage
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(car: Car): Long {val kotlintojdkcar = car.id
            val id = jConstructor(kotlintojdkcar)
            return id
        }

        @JvmStatic
        private external fun jConstructor(car: Long): Long
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(car: Car): this(construct_helper(car)) {
    }
    
    /**
     * Iegen supports only by value return in case shared_ref is set
     */
    fun getCar(): Car {
        val result = jGetcar(id)
        val jdktokotlinresult = Car(result)
        return jdktokotlinresult
    }

    override fun close() {
        if (objId != 0L) {
            jFinalize(objId)
            objId = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        // temporary fix until kotlin ownership will be supported
        // github issues:
        // https://github.com/PicsArt/iegen/issues/349
        // https://github.com/PicsArt/iegen/issues/348
        // close()
    }

    ///// External wrapper functions ////////////
    private external fun jGetcar(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}
