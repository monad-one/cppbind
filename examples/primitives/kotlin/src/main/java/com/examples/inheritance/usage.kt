/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/01/2022-08:48.
 * Please do not change it manually.
 */

package com.examples.inheritance

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class GeometricFigure
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(p: IParallelogram): Long {
            val kotlintojdkp = p.id
            val id = jConstructor(kotlintojdkp)
            return id
        }

        @JvmStatic
        private external fun jConstructor(p: Long): Long
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(p: IParallelogram): this(IEGenObject(construct_helper(p), true)) {
    }
    
    var parallelogram: IParallelogram
        get() {
            val result = jParallelogram(id)
            
            val jdktokotlinresult : IParallelogram
            val resultType = jGettypebyid(result)
            when (resultType) {
                "iegen::example::Rectangle" -> jdktokotlinresult = RectangleImpl(IEGenObject(result))
                "iegen::example::Rhombus" -> jdktokotlinresult = RhombusFigureImpl(IEGenObject(result))
                "iegen::example::Square" -> jdktokotlinresult = Square(IEGenObject(result))
                else -> jdktokotlinresult = ParallelogramImpl(IEGenObject(result))
            }
            jdktokotlinresult.keepIEGenReference(this)
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.id
            jSetparallelogram(id, kotlintojdkvalue)
        }

    var nullableParallelogram: IParallelogram?
        get() {
            val result = jNullableparallelogram(id)
            
            val jdktokotlinresult : IParallelogram?
            if (result == 0L)
                jdktokotlinresult = null
            else {
                
                val resultType = jGettypebyid(result)
                when (resultType) {
                    "iegen::example::Rectangle" -> jdktokotlinresult = RectangleImpl(IEGenObject(result))
                    "iegen::example::Rhombus" -> jdktokotlinresult = RhombusFigureImpl(IEGenObject(result))
                    "iegen::example::Square" -> jdktokotlinresult = Square(IEGenObject(result))
                    else -> jdktokotlinresult = ParallelogramImpl(IEGenObject(result))
                }
            }
            jdktokotlinresult?.let {
                jdktokotlinresult.keepIEGenReference(this)
            }
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value?.id ?: 0L
            jSetnullableparallelogram(id, kotlintojdkvalue)
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
    private external fun jParallelogram(id: Long): Long
    private external fun jSetparallelogram(id: Long, value: Long): Unit
    private external fun jNullableparallelogram(id: Long): Long
    private external fun jSetnullableparallelogram(id: Long, value: Long): Unit
    private external fun jFinalize(id: Long): Unit
}

open class MyVehicle
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(v: Vehicle): Long {
            val kotlintojdkv = v.id
            val id = jConstructor(kotlintojdkv)
            return id
        }

        @JvmStatic
        private external fun jConstructor(v: Long): Long
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(v: Vehicle): this(IEGenObject(construct_helper(v), true)) {
    }
    
    var vehicle: Vehicle?
        get() {
            val result = jVehicle(id)
            
                val jdktokotlinresult : Vehicle?
                if (result == 0L)
                    jdktokotlinresult = null
                else {
                    
                    val resultType = jGettypebyid(result)
                    when (resultType) {
                        "iegen::example::Bicycle" -> jdktokotlinresult = Bicycle(IEGenObject(result, true))
                        else -> jdktokotlinresult = Vehicle(IEGenObject(result, true))
                    }
                }
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value?.id ?: 0L
            jSetvehicle(id, kotlintojdkvalue)
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
    private external fun jVehicle(id: Long): Long
    private external fun jSetvehicle(id: Long, value: Long): Unit
    private external fun jFinalize(id: Long): Unit
}

open class MyBicycle
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(b: Bicycle): Long {
            val kotlintojdkb = b.id
            val id = jConstructor(kotlintojdkb)
            return id
        }

        @JvmStatic
        private external fun jConstructor(b: Long): Long
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(b: Bicycle): this(IEGenObject(construct_helper(b), true)) {
    }
    
    var bicycle: Bicycle
        get() {
            val result = jBicycle(id)
            val jdktokotlinresult = Bicycle(IEGenObject(result, true))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.id
            jSetbicycle(id, kotlintojdkvalue)
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
    private external fun jBicycle(id: Long): Long
    private external fun jSetbicycle(id: Long, value: Long): Unit
    private external fun jFinalize(id: Long): Unit
}

open class MyCalendar
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(events: List<Date>): Long {
            val kotlintojdkevents = LongArray(events.size) 
            var index_events = 0
            for (value_events in events) {
                val kotlintojdkvalue_events = value_events.id
                kotlintojdkevents[index_events] = kotlintojdkvalue_events
                ++index_events
            }
            val id = jConstructor(kotlintojdkevents)
            return id
        }

        @JvmStatic
        private external fun jConstructor(events: LongArray): Long
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(events: List<Date>): this(IEGenObject(construct_helper(events), true)) {
    }
    
    val events: List<Date>
        get() {
            val result = jEvents(id)
            val jdktokotlinresult: MutableList<Date> = mutableListOf()
            for (value_result in result) {
                
                    val jdktokotlinvalue_result : Date
                    val value_resultType = jGettypebyid(value_result)
                    when (value_resultType) {
                        "iegen::example::DateTime" -> jdktokotlinvalue_result = DateTime(IEGenObject(value_result, true))
                        else -> jdktokotlinvalue_result = Date(IEGenObject(value_result, true))
                    }
                jdktokotlinresult.add(jdktokotlinvalue_result)
            }
            return jdktokotlinresult
        }
    
    fun addEvent(e: Date): Unit {
        val kotlintojdke = e.id
        val result = jAddevent(id, kotlintojdke)
        
        return result
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
    private external fun jAddevent(id: Long, e: Long): Unit
    private external fun jEvents(id: Long): LongArray
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String
