/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/27/2021-13:21.
 * Please do not change it manually.
 */

package com.examples.enums

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*
enum class Color(val value: Int) {
    /**
     * Red = 1
     */
    Red(1),
    /**
     * Green = 1
     */
    Green(2),
    /**
     * Blue = 20
     */
    Blue(20);

    companion object {
        private val values = values();
        fun getByValue(value: Int) = values.firstOrNull { it.value == value }
    }

    override fun toString(): String {
        return this.value.toString()
    }

}