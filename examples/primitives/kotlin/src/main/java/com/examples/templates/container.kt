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

package com.examples.templates

import com.examples.cppbind.*
import com.examples.cppbind.exception_helpers.*
import com.examples.getters.NumberInt
import com.examples.simple.Project
import com.examples.simple.Task


/**
 * An example interface which descendant types are templates. Used for an example of downcast in target language.
 */
interface IContainer : AutoCloseable {
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    val cppbindObjId: Long
    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any)
    
    

    companion object {
        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
        public fun cppbindConstructObject(id: Long, owner: Boolean = false): IContainer {
            val idType = jGettypebyid(id)
            when (idType) {
                StackPrj.cppbindCxxTypeName -> return StackPrj(CppBindObject(id, owner))
                StackTask.cppbindCxxTypeName -> return StackTask(CppBindObject(id, owner))
                StackNumInt.cppbindCxxTypeName -> return StackNumInt(CppBindObject(id, owner))
                else -> return ContainerImpl(CppBindObject(id, owner))
            }
        }
    }
}



open class ContainerImpl
internal constructor(obj : CppBindObject) : IContainer {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Container"
    }

    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }

    override val cppbindObjId: Long
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
        other as ContainerImpl
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x%x: %s>".format(cxxId, cxxTypeName)
    }

    ///// External wrapper functions ////////////
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

/**
 * An example of usage for a type which descendants are template types.
 * Used for an example of downcast in target language.
 */
open class ContainerHolder
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(container: IContainer): Long {
            val kotlintojdkcontainer = container.cppbindObjId
            val id = jConstructor(kotlintojdkcontainer, container)
            return id
        }

        @JvmStatic
        private external fun jConstructor(container: Long, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::ContainerHolder"
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
    
    constructor(container: IContainer): this(CppBindObject(constructHelper(container), true)) {
    }
    
    val container: IContainer
        get() {
            val result = jContainer(cppbindObjId)
            
            val jdktokotlinresult : IContainer
            jdktokotlinresult = IContainer.cppbindConstructObject(result)
            jdktokotlinresult.keepCppBindReference(this)
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
        other as ContainerHolder
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
    private external fun jContainer(id: Long): Long
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String
