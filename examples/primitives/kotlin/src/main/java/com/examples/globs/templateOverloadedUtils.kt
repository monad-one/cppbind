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

package com.examples.globs

import com.examples.cppbind.*
import com.examples.cppbind.exception_helpers.*

private val INIT = run {
    System.loadLibrary("wrapper_jni");
}

/**
 * An example of template function which is overloaded in target languages and for Kotlin should be annotated
 * with JvmName, otherwise all overloads will have the same JVM signature.
 */
@JvmName("mergeInt")
fun merge(first: List<Int>, second: List<Int>): List<Int> {
    val kotlintojdkfirst = IntArray(first.size) 
    var indexFirst = 0
    for (valueFirst in first) {
        
        kotlintojdkfirst[indexFirst] = valueFirst
        ++indexFirst
    }
    val kotlintojdksecond = IntArray(second.size) 
    var indexSecond = 0
    for (valueSecond in second) {
        
        kotlintojdksecond[indexSecond] = valueSecond
        ++indexSecond
    }
    val result = jMergeInt(kotlintojdkfirst, kotlintojdksecond, first, second)
    val jdktokotlinresult: MutableList<Int> = mutableListOf()
    for (valueResult in result) {
        
        jdktokotlinresult.add(valueResult)
    }
    return jdktokotlinresult
}

/**
 * An example of template function which is overloaded in target languages and for Kotlin should be annotated
 * with JvmName, otherwise all overloads will have the same JVM signature.
 */
@JvmName("mergeString")
fun merge(first: List<String>, second: List<String>): List<String> {
    val kotlintojdkfirst = ObjectArray(first.size) { Any() }
    var indexFirst = 0
    for (valueFirst in first) {
        
        kotlintojdkfirst[indexFirst] = valueFirst
        ++indexFirst
    }
    val kotlintojdksecond = ObjectArray(second.size) { Any() }
    var indexSecond = 0
    for (valueSecond in second) {
        
        kotlintojdksecond[indexSecond] = valueSecond
        ++indexSecond
    }
    val result = jMergeString(kotlintojdkfirst, kotlintojdksecond, first, second)
    val jdktokotlinresult: MutableList<String> = mutableListOf()
    for (valueResult in result) {
        @Suppress("UNCHECKED_CAST") val actualValueresult = valueResult as String
        
        jdktokotlinresult.add(actualValueresult)
    }
    return jdktokotlinresult
}

/**
 * An example of overloaded function which has template argument and for Kotlin should be annotated
 * with JvmName, otherwise all overloads will have the same JVM signature.
 */
fun sum(first: List<Int>, second: List<Int>): List<Int> {
    val kotlintojdkfirst = IntArray(first.size) 
    var indexFirst = 0
    for (valueFirst in first) {
        
        kotlintojdkfirst[indexFirst] = valueFirst
        ++indexFirst
    }
    val kotlintojdksecond = IntArray(second.size) 
    var indexSecond = 0
    for (valueSecond in second) {
        
        kotlintojdksecond[indexSecond] = valueSecond
        ++indexSecond
    }
    val result = jSum(kotlintojdkfirst, kotlintojdksecond, first, second)
    val jdktokotlinresult: MutableList<Int> = mutableListOf()
    for (valueResult in result) {
        
        jdktokotlinresult.add(valueResult)
    }
    return jdktokotlinresult
}

/**
 * An example of overloaded function which has template argument and for Kotlin should be annotated
 * with JvmName, otherwise all overloads will have the same JVM signature.
 */
@JvmName("sum1")
fun sum(first: List<Float>, second: List<Float>): List<Float> {
    val kotlintojdkfirst = FloatArray(first.size) 
    var indexFirst = 0
    for (valueFirst in first) {
        
        kotlintojdkfirst[indexFirst] = valueFirst
        ++indexFirst
    }
    val kotlintojdksecond = FloatArray(second.size) 
    var indexSecond = 0
    for (valueSecond in second) {
        
        kotlintojdksecond[indexSecond] = valueSecond
        ++indexSecond
    }
    val result = jSum1(kotlintojdkfirst, kotlintojdksecond, first, second)
    val jdktokotlinresult: MutableList<Float> = mutableListOf()
    for (valueResult in result) {
        
        jdktokotlinresult.add(valueResult)
    }
    return jdktokotlinresult
}

private external fun jMergeInt(first: IntArray, second: IntArray, vararg extraObjs: Any?): IntArray
private external fun jMergeString(first: ObjectArray, second: ObjectArray, vararg extraObjs: Any?): ObjectArray
private external fun jSum(first: IntArray, second: IntArray, vararg extraObjs: Any?): IntArray
private external fun jSum1(first: FloatArray, second: FloatArray, vararg extraObjs: Any?): FloatArray

private external fun jGettypebyid(id: Long): String
