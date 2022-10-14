/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/07/2022-06:05.
 * Please do not change it manually.
 */

package com.examples.inheritance

import com.examples.cppbind.*
import com.examples.cppbind.exceptions.*

/**
 * An example marked with shared_ref=True and directly inherited from std::enable_shared_from_this
 * Contains a method which returns a reference on this.
 */
open class Shape
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Shape"

        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
        public fun cppbindConstructObject(id: Long, owner: Boolean = false): Shape {
            val idType = jGettypebyid(id)
            when (idType) {
                Circle.cppbindCxxTypeName -> return Circle(CppBindObject(id, owner))
                else -> return Shape(CppBindObject(id, owner))
            }
        }
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
    
    open fun area(): Double {
        val result = jArea(cppbindObjId)
        
        return result
    }

    fun thisObject(): Shape {
        val result = jThisobject(cppbindObjId)
        
        val jdktokotlinresult : Shape
        jdktokotlinresult = Shape.cppbindConstructObject(result, true)
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
        other as Shape
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
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
    private external fun jArea(id: Long): Double
    private external fun jThisobject(id: Long): Long
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

/**
 * An example marked with shared_ref=True and indirectly inherited from std::enable_shared_from_this.
 * Contains a method returning a pointer on this.
 */
open class Circle
internal constructor(obj: CppBindObject) : Shape(obj) {
    companion object {
        
        fun create(r: Double): Circle {
            val result = jCreate(r)
            val jdktokotlinresult = Circle(CppBindObject(result, true))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jCreate(r: Double, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Circle"
    }
    
    
    open override fun area(): Double {
        val result = jArea(cppbindObjId)
        
        return result
    }

    fun incrementRadius(value: Double = 1.0): Circle {
        val result = jIncrementradius(cppbindObjId, value)
        val jdktokotlinresult = Circle(CppBindObject(result, true))
        return jdktokotlinresult
    }

    ///// External wrapper functions ////////////
    private external fun jArea(id: Long): Double
    private external fun jIncrementradius(id: Long, value: Double, vararg extraObjs: Any?): Long
}

/**
 * An example marked with shared_ref=True, indirectly inherited from std::enable_shared_from_this from a base having no API.
 * Contains a method returning reference on this.
 */
open class RegularTriangle
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(side: Double): Long {
            val id = jConstructor(side)
            return id
        }

        @JvmStatic
        private external fun jConstructor(side: Double, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::RegularTriangle"
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
    
    constructor(side: Double): this(CppBindObject(constructHelper(side), true)) {
    }
    
    open fun area(): Double {
        val result = jArea(cppbindObjId)
        
        return result
    }

    fun incrementSide(value: Double = 1.0): RegularTriangle {
        val result = jIncrementside(cppbindObjId, value)
        val jdktokotlinresult = RegularTriangle(CppBindObject(result, true))
        return jdktokotlinresult
    }

    fun multiplySide(value: Double = 1.0): RegularTriangle {
        val result = jMultiplyside(cppbindObjId, value)
        val jdktokotlinresult = RegularTriangle(CppBindObject(result, true))
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
        other as RegularTriangle
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
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
    private external fun jArea(id: Long): Double
    private external fun jIncrementside(id: Long, value: Double, vararg extraObjs: Any?): Long
    private external fun jMultiplyside(id: Long, value: Double, vararg extraObjs: Any?): Long
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String
