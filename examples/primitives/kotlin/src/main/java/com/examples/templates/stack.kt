package com.examples.templates

import alias.*
import com.examples.simple.*

open class StackProject
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long

        protected fun construct_helper(st: Project): Long {val kotlin_to_jdk_st = st.getObjId()
            val id = jConstructor_1(kotlin_to_jdk_st)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(st: Long): Long




    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(): this(construct_helper()) {
        //jSet_this(id, this)
    }

    constructor(st: Project): this(construct_helper(st)) {
        //jSet_this(id, this)
    }
    
    fun push(item: Project): Unit {
        val kotlin_to_jdk_item = item.getObjId()
        val result = jPush(getObjId(), kotlin_to_jdk_item)
        
        return result
    }

    fun pop(): Unit {
        val result = jPop(getObjId())
        
        return result
    }

    fun top(): Project {
        val result = jTop(getObjId())
        val jdk_to_kotlin_result = Project(result)
        return jdk_to_kotlin_result
    }

    fun empty(): Boolean {
        val result = jEmpty(getObjId())
        
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
    private external fun jPush(id: Long, item: Long): Unit
    private external fun jPop(id: Long): Unit
    private external fun jTop(id: Long): Long
    private external fun jEmpty(id: Long): Boolean
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}

open class StackRoot
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long

        protected fun construct_helper(st: Root): Long {val kotlin_to_jdk_st = st.getObjId()
            val id = jConstructor_1(kotlin_to_jdk_st)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(st: Long): Long




    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(): this(construct_helper()) {
        //jSet_this(id, this)
    }

    constructor(st: Root): this(construct_helper(st)) {
        //jSet_this(id, this)
    }
    
    fun push(item: Root): Unit {
        val kotlin_to_jdk_item = item.getObjId()
        val result = jPush(getObjId(), kotlin_to_jdk_item)
        
        return result
    }

    fun pop(): Unit {
        val result = jPop(getObjId())
        
        return result
    }

    fun top(): Root {
        val result = jTop(getObjId())
        val jdk_to_kotlin_result = Root(result)
        return jdk_to_kotlin_result
    }

    fun empty(): Boolean {
        val result = jEmpty(getObjId())
        
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
    private external fun jPush(id: Long, item: Long): Unit
    private external fun jPop(id: Long): Unit
    private external fun jTop(id: Long): Long
    private external fun jEmpty(id: Long): Boolean
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}