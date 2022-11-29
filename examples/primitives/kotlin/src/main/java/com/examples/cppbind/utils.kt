/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/23/2021-14:46.
 * Please do not change it manually.
 */

package com.examples.cppbind

typealias StringArray = Array<String>
typealias ObjectArray = Array<Any?>

/**
 * An internal dataclass to keep an information about an object.
 * It is intended to be used by the generated code.
 */
data class CppBindObject(var id : Long, val owner : Boolean = false)
