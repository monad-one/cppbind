/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 11/15/2022-12:33.
 * Please do not change it manually.
 */

package com.examples.globs

import com.examples.cppbind.*
import com.examples.cppbind.exceptions.*

private val INIT = run {
    System.loadLibrary("wrapper_jni");
}

fun minInt(a: Int, b: Int): Int {
    val result = jMinint(a, b)
    
    return result
}

private external fun jMinint(a: Int, b: Int, vararg extraObjs: Any?): Int

private external fun jGettypebyid(id: Long): String
