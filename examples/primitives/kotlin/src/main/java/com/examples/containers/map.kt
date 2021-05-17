package com.examples.containers

import alias.*


/**
 * comments
 * 
 */
open class MapItem
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
        //jSet_this(id, this)
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
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * comments
 * 
 */
open class MapExamples
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
        //jSet_this(id, this)
    }
    
    /**
     * comments
     * 
     */
    fun addStringPair(info: Pair<String, String>): Unit {
        val first = info.first
        val second = info.second


        val kotlin_to_jdk_info = Pair<String, String>(first, second)
        val result = jAddstringpair(getObjId(), kotlin_to_jdk_info)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun addIntMap(info: Map<Int, Int>): Unit {
        
        val tmp_key_kotlin_to_jdk_info = IntArray(info.size) 
        val tmp_val_kotlin_to_jdk_info = IntArray(info.size) 
        val kotlin_to_jdk_info = Pair<IntArray, IntArray>(tmp_key_kotlin_to_jdk_info, tmp_val_kotlin_to_jdk_info)
        var index = 0
        for ((key, value) in info) {
            
            
            tmp_key_kotlin_to_jdk_info[index] = key
            tmp_val_kotlin_to_jdk_info[index] = value
            ++index
        }
        val result = jAddintmap(getObjId(), kotlin_to_jdk_info)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun addStringMap(info: Map<String, String>): Unit {
        
        val tmp_key_kotlin_to_jdk_info = StringArray(info.size) { String() }
        val tmp_val_kotlin_to_jdk_info = StringArray(info.size) { String() }
        val kotlin_to_jdk_info = Pair<StringArray, StringArray>(tmp_key_kotlin_to_jdk_info, tmp_val_kotlin_to_jdk_info)
        var index = 0
        for ((key, value) in info) {
            
            
            tmp_key_kotlin_to_jdk_info[index] = key
            tmp_val_kotlin_to_jdk_info[index] = value
            ++index
        }
        val result = jAddstringmap(getObjId(), kotlin_to_jdk_info)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getStringMap(): Map<String, String> {
        val result = jGetstringmap(getObjId())
        val jdk_to_kotlin_result = HashMap<String, String>()
        for (i in 0..result.first.size - 1) {
            val elem1 = result.first.get(i)
            val elem2 = result.second.get(i)
            
            
            jdk_to_kotlin_result.put(elem1, elem2)
        }
        return jdk_to_kotlin_result
    }

    /**
     * comments
     * 
     */
    fun getIntMap(): Map<Int, Int> {
        val result = jGetintmap(getObjId())
        val jdk_to_kotlin_result = HashMap<Int, Int>()
        for (i in 0..result.first.size - 1) {
            val elem1 = result.first.get(i)
            val elem2 = result.second.get(i)
            
            
            jdk_to_kotlin_result.put(elem1, elem2)
        }
        return jdk_to_kotlin_result
    }

    /**
     * comments
     * 
     */
    fun addMixedMap(info: Map<String, MapItem>): Unit {
        
        val tmp_key_kotlin_to_jdk_info = StringArray(info.size) { String() }
        val tmp_val_kotlin_to_jdk_info = LongArray(info.size) 
        val kotlin_to_jdk_info = Pair<StringArray, LongArray>(tmp_key_kotlin_to_jdk_info, tmp_val_kotlin_to_jdk_info)
        var index = 0
        for ((key, value) in info) {
            
            val kotlin_to_jdk_value = value.getObjId()
            tmp_key_kotlin_to_jdk_info[index] = key
            tmp_val_kotlin_to_jdk_info[index] = kotlin_to_jdk_value
            ++index
        }
        val result = jAddmixedmap(getObjId(), kotlin_to_jdk_info)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getMixedMap(): Map<String, MapItem> {
        val result = jGetmixedmap(getObjId())
        val jdk_to_kotlin_result = HashMap<String, MapItem>()
        for (i in 0..result.first.size - 1) {
            val elem1 = result.first.get(i)
            val elem2 = result.second.get(i)
            
            val jdk_to_kotlin_elem2 = MapItem(elem2)
            jdk_to_kotlin_result.put(elem1, jdk_to_kotlin_elem2)
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
    private external fun jAddstringpair(id: Long, info: Pair<String, String>): Unit
    private external fun jAddintmap(id: Long, info: Pair<IntArray, IntArray>): Unit
    private external fun jAddstringmap(id: Long, info: Pair<StringArray, StringArray>): Unit
    private external fun jGetstringmap(id: Long): Pair<StringArray, StringArray>
    private external fun jGetintmap(id: Long): Pair<IntArray, IntArray>
    private external fun jAddmixedmap(id: Long, info: Pair<StringArray, LongArray>): Unit
    private external fun jGetmixedmap(id: Long): Pair<StringArray, LongArray>
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}