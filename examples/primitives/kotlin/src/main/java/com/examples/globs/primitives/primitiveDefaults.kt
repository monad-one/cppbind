/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/28/2022-15:01.
 * Please do not change it manually.
 */

package com.examples.globs.primitives

import com.examples.enums.Color
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

private val INIT = run {
    System.loadLibrary("wrapper_jni");
}

/**
 * A global function with enum default argument.
 */
fun optionalColor(c: Color = Color.Red): Color {
    val kotlintojdkc = c.value
    val result = jOptionalcolor(kotlintojdkc)
    val jdktokotlinresult_optional = Color.getByValue(result)
    if (jdktokotlinresult_optional == null) {
        ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of Color enum.")
    }
    val jdktokotlinresult = jdktokotlinresult_optional!!
    return jdktokotlinresult
}

/**
 * A global function with string default argument.
 */
fun optionalString(optionalStr: String = "abc"): String {
    val result = jOptionalstring(optionalStr)
    
    return result
}

/**
 * A global function with primitive default value.
 */
fun optionalInt(i: Int = 5): Int {
    val result = jOptionalint(i)
    
    return result
}

private external fun jOptionalcolor(c: Int): Int
private external fun jOptionalstring(optionalStr: String): String
private external fun jOptionalint(i: Int): Int

private external fun jGettypebyid(id: Long): String
