/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/16/2021-08:36.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/parallelogram.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_RhombusFigureImpl_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Parallelogram*>(id);
    delete jni_to_cxx_id;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_RhombusFigureImpl_jConstructor(JNIEnv* env, jobject obj, jdouble diagonal1, jdouble diagonal2){
    
    
    iegen::example::Parallelogram* baseptr = new iegen::example::Rhombus(diagonal1, diagonal2);
    return reinterpret_cast<jlong>(baseptr);
}