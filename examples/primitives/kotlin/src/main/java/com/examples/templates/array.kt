/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/08/2022-16:07.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.cppbind.*
import com.examples.cppbind.exception_helpers.*

private val INIT = run {
    System.loadLibrary("wrapper_jni");
}

open class ArrayFloat2
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(array: ArrayFloat2): Long {
            val kotlintojdkarray = array.cppbindObjId
            val id = jConstructor(kotlintojdkarray, array)
            return id
        }

        @JvmStatic
        private external fun jConstructor(array: Long, vararg extraObjs: Any?): Long

        protected fun constructHelper(array: List<Float>): Long {
            val kotlintojdkarray = FloatArray(array.size) 
            var indexArray = 0
            for (valueArray in array) {
                
                kotlintojdkarray[indexArray] = valueArray
                ++indexArray
            }
            val id = jConstructor1(kotlintojdkarray, array)
            return id
        }

        @JvmStatic
        private external fun jConstructor1(array: FloatArray, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Array<float, 2>"
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
    
    constructor(array: ArrayFloat2): this(CppBindObject(constructHelper(array), true)) {
    }

    constructor(array: List<Float>): this(CppBindObject(constructHelper(array), true)) {
    }
    
    operator fun get(idx: Int): Float {
        val result = jGet(cppbindObjId, idx)
        
        return result
    }


    operator fun set(idx: Int, value: Float){
        jSet(cppbindObjId, idx, value)
    }

    operator fun plus(rhs: ArrayFloat2): ArrayFloat2 {
        val kotlintojdkrhs = rhs.cppbindObjId
        val result = jPlus(cppbindObjId, kotlintojdkrhs, rhs)
        val jdktokotlinresult = ArrayFloat2(CppBindObject(result, true))
        return jdktokotlinresult
    }

    operator fun minus(rhs: ArrayFloat2): ArrayFloat2 {
        val kotlintojdkrhs = rhs.cppbindObjId
        val result = jMinus(cppbindObjId, kotlintojdkrhs, rhs)
        val jdktokotlinresult = ArrayFloat2(CppBindObject(result, true))
        return jdktokotlinresult
    }

    override fun equals(other: Any?): Boolean {
        other as ArrayFloat2
        return jEquals(cppbindObjId, other.cppbindObjId, other)
    }

    fun data(): List<Float> {
        val result = jData(cppbindObjId)
        val jdktokotlinresult: MutableList<Float> = mutableListOf()
        for (valueResult in result) {
            
            jdktokotlinresult.add(valueResult)
        }
        return jdktokotlinresult
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
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
    private external fun jGet(id: Long, idx: Int, vararg extraObjs: Any?): Float
    private external fun jSet(id: Long, idx: Int, value: Float, vararg extraObjs: Any?)
    private external fun jPlus(id: Long, rhs: Long, vararg extraObjs: Any?): Long
    private external fun jMinus(id: Long, rhs: Long, vararg extraObjs: Any?): Long
    private external fun jEquals(id: Long, rhs: Long, vararg extraObjs: Any?): Boolean
    private external fun jData(id: Long): FloatArray
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

open class ArrayFloat3
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(array: ArrayFloat3): Long {
            val kotlintojdkarray = array.cppbindObjId
            val id = jConstructor(kotlintojdkarray, array)
            return id
        }

        @JvmStatic
        private external fun jConstructor(array: Long, vararg extraObjs: Any?): Long

        protected fun constructHelper(array: List<Float>): Long {
            val kotlintojdkarray = FloatArray(array.size) 
            var indexArray = 0
            for (valueArray in array) {
                
                kotlintojdkarray[indexArray] = valueArray
                ++indexArray
            }
            val id = jConstructor1(kotlintojdkarray, array)
            return id
        }

        @JvmStatic
        private external fun jConstructor1(array: FloatArray, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Array<float, 3>"
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
    
    constructor(array: ArrayFloat3): this(CppBindObject(constructHelper(array), true)) {
    }

    constructor(array: List<Float>): this(CppBindObject(constructHelper(array), true)) {
    }
    
    operator fun get(idx: Int): Float {
        val result = jGet(cppbindObjId, idx)
        
        return result
    }


    operator fun set(idx: Int, value: Float){
        jSet(cppbindObjId, idx, value)
    }

    operator fun plus(rhs: ArrayFloat3): ArrayFloat3 {
        val kotlintojdkrhs = rhs.cppbindObjId
        val result = jPlus(cppbindObjId, kotlintojdkrhs, rhs)
        val jdktokotlinresult = ArrayFloat3(CppBindObject(result, true))
        return jdktokotlinresult
    }

    operator fun minus(rhs: ArrayFloat3): ArrayFloat3 {
        val kotlintojdkrhs = rhs.cppbindObjId
        val result = jMinus(cppbindObjId, kotlintojdkrhs, rhs)
        val jdktokotlinresult = ArrayFloat3(CppBindObject(result, true))
        return jdktokotlinresult
    }

    override fun equals(other: Any?): Boolean {
        other as ArrayFloat3
        return jEquals(cppbindObjId, other.cppbindObjId, other)
    }

    fun data(): List<Float> {
        val result = jData(cppbindObjId)
        val jdktokotlinresult: MutableList<Float> = mutableListOf()
        for (valueResult in result) {
            
            jdktokotlinresult.add(valueResult)
        }
        return jdktokotlinresult
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
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
    private external fun jGet(id: Long, idx: Int, vararg extraObjs: Any?): Float
    private external fun jSet(id: Long, idx: Int, value: Float, vararg extraObjs: Any?)
    private external fun jPlus(id: Long, rhs: Long, vararg extraObjs: Any?): Long
    private external fun jMinus(id: Long, rhs: Long, vararg extraObjs: Any?): Long
    private external fun jEquals(id: Long, rhs: Long, vararg extraObjs: Any?): Boolean
    private external fun jData(id: Long): FloatArray
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

open class ArrayInt2
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(array: ArrayInt2): Long {
            val kotlintojdkarray = array.cppbindObjId
            val id = jConstructor(kotlintojdkarray, array)
            return id
        }

        @JvmStatic
        private external fun jConstructor(array: Long, vararg extraObjs: Any?): Long

        protected fun constructHelper(array: List<Int>): Long {
            val kotlintojdkarray = IntArray(array.size) 
            var indexArray = 0
            for (valueArray in array) {
                
                kotlintojdkarray[indexArray] = valueArray
                ++indexArray
            }
            val id = jConstructor1(kotlintojdkarray, array)
            return id
        }

        @JvmStatic
        private external fun jConstructor1(array: IntArray, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Array<int, 2>"
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
    
    constructor(array: ArrayInt2): this(CppBindObject(constructHelper(array), true)) {
    }

    constructor(array: List<Int>): this(CppBindObject(constructHelper(array), true)) {
    }
    
    operator fun get(idx: Int): Int {
        val result = jGet(cppbindObjId, idx)
        
        return result
    }


    operator fun set(idx: Int, value: Int){
        jSet(cppbindObjId, idx, value)
    }

    operator fun plus(rhs: ArrayInt2): ArrayInt2 {
        val kotlintojdkrhs = rhs.cppbindObjId
        val result = jPlus(cppbindObjId, kotlintojdkrhs, rhs)
        val jdktokotlinresult = ArrayInt2(CppBindObject(result, true))
        return jdktokotlinresult
    }

    operator fun minus(rhs: ArrayInt2): ArrayInt2 {
        val kotlintojdkrhs = rhs.cppbindObjId
        val result = jMinus(cppbindObjId, kotlintojdkrhs, rhs)
        val jdktokotlinresult = ArrayInt2(CppBindObject(result, true))
        return jdktokotlinresult
    }

    override fun equals(other: Any?): Boolean {
        other as ArrayInt2
        return jEquals(cppbindObjId, other.cppbindObjId, other)
    }

    fun data(): List<Int> {
        val result = jData(cppbindObjId)
        val jdktokotlinresult: MutableList<Int> = mutableListOf()
        for (valueResult in result) {
            
            jdktokotlinresult.add(valueResult)
        }
        return jdktokotlinresult
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
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
    private external fun jGet(id: Long, idx: Int, vararg extraObjs: Any?): Int
    private external fun jSet(id: Long, idx: Int, value: Int, vararg extraObjs: Any?)
    private external fun jPlus(id: Long, rhs: Long, vararg extraObjs: Any?): Long
    private external fun jMinus(id: Long, rhs: Long, vararg extraObjs: Any?): Long
    private external fun jEquals(id: Long, rhs: Long, vararg extraObjs: Any?): Boolean
    private external fun jData(id: Long): IntArray
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

open class ArrayInt3
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(array: ArrayInt3): Long {
            val kotlintojdkarray = array.cppbindObjId
            val id = jConstructor(kotlintojdkarray, array)
            return id
        }

        @JvmStatic
        private external fun jConstructor(array: Long, vararg extraObjs: Any?): Long

        protected fun constructHelper(array: List<Int>): Long {
            val kotlintojdkarray = IntArray(array.size) 
            var indexArray = 0
            for (valueArray in array) {
                
                kotlintojdkarray[indexArray] = valueArray
                ++indexArray
            }
            val id = jConstructor1(kotlintojdkarray, array)
            return id
        }

        @JvmStatic
        private external fun jConstructor1(array: IntArray, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Array<int, 3>"
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
    
    constructor(array: ArrayInt3): this(CppBindObject(constructHelper(array), true)) {
    }

    constructor(array: List<Int>): this(CppBindObject(constructHelper(array), true)) {
    }
    
    operator fun get(idx: Int): Int {
        val result = jGet(cppbindObjId, idx)
        
        return result
    }


    operator fun set(idx: Int, value: Int){
        jSet(cppbindObjId, idx, value)
    }

    operator fun plus(rhs: ArrayInt3): ArrayInt3 {
        val kotlintojdkrhs = rhs.cppbindObjId
        val result = jPlus(cppbindObjId, kotlintojdkrhs, rhs)
        val jdktokotlinresult = ArrayInt3(CppBindObject(result, true))
        return jdktokotlinresult
    }

    operator fun minus(rhs: ArrayInt3): ArrayInt3 {
        val kotlintojdkrhs = rhs.cppbindObjId
        val result = jMinus(cppbindObjId, kotlintojdkrhs, rhs)
        val jdktokotlinresult = ArrayInt3(CppBindObject(result, true))
        return jdktokotlinresult
    }

    override fun equals(other: Any?): Boolean {
        other as ArrayInt3
        return jEquals(cppbindObjId, other.cppbindObjId, other)
    }

    fun data(): List<Int> {
        val result = jData(cppbindObjId)
        val jdktokotlinresult: MutableList<Int> = mutableListOf()
        for (valueResult in result) {
            
            jdktokotlinresult.add(valueResult)
        }
        return jdktokotlinresult
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
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
    private external fun jGet(id: Long, idx: Int, vararg extraObjs: Any?): Int
    private external fun jSet(id: Long, idx: Int, value: Int, vararg extraObjs: Any?)
    private external fun jPlus(id: Long, rhs: Long, vararg extraObjs: Any?): Long
    private external fun jMinus(id: Long, rhs: Long, vararg extraObjs: Any?): Long
    private external fun jEquals(id: Long, rhs: Long, vararg extraObjs: Any?): Boolean
    private external fun jData(id: Long): IntArray
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

/**
 * An example of template function with an argument of Array<T, 2> type.
 */
fun getFirstElement(a: ArrayFloat2): Float {
    val kotlintojdka = a.cppbindObjId
    val result = jGetfirstelementFloat(kotlintojdka, a)
    
    return result
}

/**
 * An example of template function with an argument of Array<T, 2> type.
 */
fun getFirstElement(a: ArrayInt2): Int {
    val kotlintojdka = a.cppbindObjId
    val result = jGetfirstelementInt(kotlintojdka, a)
    
    return result
}

/**
 * An example of template function with an argument of Array<int, 2> type.
 */
fun multiplyElements(a: ArrayInt2, num: Int): ArrayInt2 {
    val kotlintojdka = a.cppbindObjId
    val result = jMultiplyelements(kotlintojdka, num, a)
    val jdktokotlinresult = ArrayInt2(CppBindObject(result, true))
    return jdktokotlinresult
}

/**
 * An example of template function with an argument of typedef on Array.
 */
fun addToElements(a: ArrayFloat2, num: Int): ArrayFloat2 {
    val kotlintojdka = a.cppbindObjId
    val result = jAddtoelements(kotlintojdka, num, a)
    val jdktokotlinresult = ArrayFloat2(CppBindObject(result, true))
    return jdktokotlinresult
}

/**
 * An example of template function with an argument of typedef on Array.
 */
fun addToElements(a: ArrayInt2, num: Int): ArrayInt2 {
    val kotlintojdka = a.cppbindObjId
    val result = jAddtoelements1(kotlintojdka, num, a)
    val jdktokotlinresult = ArrayInt2(CppBindObject(result, true))
    return jdktokotlinresult
}

/**
 * An example with template argument with expression.
 */
open class Array3
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(arr: List<Float>): Long {
            val kotlintojdkarr = FloatArray(arr.size) 
            var indexArr = 0
            for (valueArr in arr) {
                
                kotlintojdkarr[indexArr] = valueArr
                ++indexArr
            }
            val id = jConstructor(kotlintojdkarr, arr)
            return id
        }

        @JvmStatic
        private external fun jConstructor(arr: FloatArray, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Array3"
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
    
    constructor(arr: List<Float>): this(CppBindObject(constructHelper(arr), true)) {
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
        other as Array3
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
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGetfirstelementFloat(a: Long, vararg extraObjs: Any?): Float
private external fun jGetfirstelementInt(a: Long, vararg extraObjs: Any?): Int
private external fun jMultiplyelements(a: Long, num: Int, vararg extraObjs: Any?): Long
private external fun jAddtoelements(a: Long, num: Int, vararg extraObjs: Any?): Long
private external fun jAddtoelements1(a: Long, num: Int, vararg extraObjs: Any?): Long

private external fun jGettypebyid(id: Long): String
