/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/08/2022-05:58.
 * Please do not change it manually.
 */

package com.examples.forward_decl.teacher

import com.examples.forward_decl.student.Student
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class Teacher
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    protected var objId = _id
    protected val owner = _owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(construct_helper(), true) {
    }
    
    fun addStudent(s: Student): Unit {
        val kotlintojdks = s.id
        val result = jAddstudent(id, kotlintojdks)
        
        return result
    }

    fun students(): List<Student> {
        val result = jStudents(id)
        val jdktokotlinresult: MutableList<Student> = mutableListOf()
        for (value_result in result) {
            val jdktokotlinvalue_result = Student(value_result, true)
            jdktokotlinresult.add(jdktokotlinvalue_result)
        }
        return jdktokotlinresult
    }

    override fun close() {
        if (owner && objId != 0L) {
            jFinalize(objId)
            objId = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jAddstudent(id: Long, s: Long): Unit
    private external fun jStudents(id: Long): LongArray
    private external fun jFinalize(id: Long): Unit
}
