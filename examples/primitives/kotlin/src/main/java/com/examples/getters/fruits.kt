/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/09/2021-11:36.
 * Please do not change it manually.
 */

package com.examples.getters

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*
enum class FruitType(val value: Int) {
    Apple(1),
    Pineapple(2);

    companion object {
        private val values = values();
        fun getByValue(value: Int) = values.firstOrNull { it.value == value }
    }
}

open class Fruit
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    open val type: FruitType
        get() {
            val result = jType(getObjId())
            val jdk_to_kotlin_result = FruitType.getByValue(result)!!
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
    private external fun jType(id: Long): Int
    private external fun jFinalize(id: Long): Unit
}

open class Apple
internal constructor(_id: Long) : Fruit(_id) {
    companion object {
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    
    constructor(): this(construct_helper()) {
    }
    
    open override val type: FruitType
        get() {
            val result = jType(getObjId())
            val jdk_to_kotlin_result = FruitType.getByValue(result)!!
            return jdk_to_kotlin_result
        }

    ///// External wrapper functions ////////////
    private external fun jType(id: Long): Int
}

open class Pineapple
internal constructor(_id: Long) : Fruit(_id) {
    companion object {
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    
    constructor(): this(construct_helper()) {
    }
    
    open override val type: FruitType
        get() {
            val result = jType(getObjId())
            val jdk_to_kotlin_result = FruitType.getByValue(result)!!
            return jdk_to_kotlin_result
        }

    ///// External wrapper functions ////////////
    private external fun jType(id: Long): Int
}

/**
 * An example class containing template getters.
 */
open class Fruits
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(fruits: List<Fruit>): Long {
            val kotlin_to_jdk_fruits = LongArray(fruits.size) 
            var index_fruits = 0
            for (value_fruits in fruits) {
                val kotlin_to_jdk_value_fruits = value_fruits.getObjId()
                kotlin_to_jdk_fruits[index_fruits] = kotlin_to_jdk_value_fruits
                ++index_fruits
            }
            val id = jConstructor(kotlin_to_jdk_fruits)
            return id
        }

        @JvmStatic
        private external fun jConstructor(fruits: LongArray): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(fruits: List<Fruit>): this(construct_helper(fruits)) {
    }
    
    open val apples: List<Apple>
        get() {
            val result = jFruitsApple(getObjId())
            val jdk_to_kotlin_result: MutableList<Apple> = mutableListOf()
            for (value_result in result) {
                val jdk_to_kotlin_value_result = Apple(value_result)
                jdk_to_kotlin_result.add(jdk_to_kotlin_value_result)
            }
            return jdk_to_kotlin_result
        }

    open val pineapple: List<Pineapple>
        get() {
            val result = jFruitsPineapple(getObjId())
            val jdk_to_kotlin_result: MutableList<Pineapple> = mutableListOf()
            for (value_result in result) {
                val jdk_to_kotlin_value_result = Pineapple(value_result)
                jdk_to_kotlin_result.add(jdk_to_kotlin_value_result)
            }
            return jdk_to_kotlin_result
        }

    open val applesWithPineapples: List<Fruit>
        get() {
            val result = jAllfruitsApplePineapple(getObjId())
            val jdk_to_kotlin_result: MutableList<Fruit> = mutableListOf()
            for (value_result in result) {
                val jdk_to_kotlin_value_result = Fruit(value_result)
                jdk_to_kotlin_result.add(jdk_to_kotlin_value_result)
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
    private external fun jFruitsApple(id: Long): LongArray
    private external fun jFruitsPineapple(id: Long): LongArray
    private external fun jAllfruitsApplePineapple(id: Long): LongArray
    private external fun jFinalize(id: Long): Unit
}