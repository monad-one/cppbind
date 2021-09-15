/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/15/2021-10:30.
 * Please do not change it manually.
 */

package com.examples.containers

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*

/**
 * comments
 * 
 */
open class VectorItem
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(_value: Int): Long {
            val id = jConstructor(_value)
            return id
        }

        @JvmStatic
        private external fun jConstructor(_value: Int): Long
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
    constructor(_value: Int): this(construct_helper(_value)) {
    }
    
    /**
     * comments
     * 
     */
    var value: Int
        get() {
            val result = jValue(getObjId())
            
            return result
        }
        set(value) {
            
            jSetvalue(getObjId(), value)
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
    private external fun jValue(id: Long): Int
    private external fun jSetvalue(id: Long, value: Int): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * comments
 * 
 */
open class VectorExamples
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
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
     * comments
     * 
     */
    constructor(): this(construct_helper()) {
    }
    
    /**
     * comments
     * 
     */
    fun addIntVector(v: List<Int>): Unit {
        
        val kotlin_to_jdk_v = IntArray(v.size) 
        var index_v = 0
        for (value_v in v) {
            
            kotlin_to_jdk_v[index_v] = value_v
            ++index_v
        }
        val result = jAddintvector(getObjId(), kotlin_to_jdk_v)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun addObjVector(v: List<VectorItem>): Unit {
        
        val kotlin_to_jdk_v = LongArray(v.size) 
        var index_v = 0
        for (value_v in v) {
            val kotlin_to_jdk_value_v = value_v.getObjId()
            kotlin_to_jdk_v[index_v] = kotlin_to_jdk_value_v
            ++index_v
        }
        val result = jAddobjvector(getObjId(), kotlin_to_jdk_v)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun addStringVector(v: List<String>): Unit {
        
        val kotlin_to_jdk_v = ObjectArray(v.size) { Any() }
        var index_v = 0
        for (value_v in v) {
            
            kotlin_to_jdk_v[index_v] = value_v
            ++index_v
        }
        val result = jAddstringvector(getObjId(), kotlin_to_jdk_v)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getStringVector(): List<String> {
        val result = jGetstringvector(getObjId())
        val jdk_to_kotlin_result: MutableList<String> = mutableListOf()
        for (value_result in result) {
            @Suppress("UNCHECKED_CAST") val actual_value_result = value_result as String
            
            jdk_to_kotlin_result.add(actual_value_result)
        }
        return jdk_to_kotlin_result
    }

    /**
     * comments
     * 
     */
    fun getObjVector(): List<VectorItem> {
        val result = jGetobjvector(getObjId())
        val jdk_to_kotlin_result: MutableList<VectorItem> = mutableListOf()
        for (value_result in result) {
            val jdk_to_kotlin_value_result = VectorItem(value_result)
            jdk_to_kotlin_result.add(jdk_to_kotlin_value_result)
        }
        return jdk_to_kotlin_result
    }

    /**
     * comments
     * 
     */
    fun getIntVector(): List<Int> {
        val result = jGetintvector(getObjId())
        val jdk_to_kotlin_result: MutableList<Int> = mutableListOf()
        for (value_result in result) {
            
            jdk_to_kotlin_result.add(value_result)
        }
        return jdk_to_kotlin_result
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
    private external fun jAddintvector(id: Long, v: IntArray): Unit
    private external fun jAddobjvector(id: Long, v: LongArray): Unit
    private external fun jAddstringvector(id: Long, v: ObjectArray): Unit
    private external fun jGetstringvector(id: Long): ObjectArray
    private external fun jGetobjvector(id: Long): LongArray
    private external fun jGetintvector(id: Long): IntArray
    private external fun jFinalize(id: Long): Unit
}