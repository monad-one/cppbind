/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/28/2021-14:03.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/enums/frame.hpp"
#include "cxx/enums/color.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_enums_Frame_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Frame*>(id);
    delete jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_enums_Frame_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Frame* baseptr = new iegen::example::Frame();
    return reinterpret_cast<jlong>(baseptr);
}
extern "C" JNIEXPORT jint Java_com_examples_enums_Frame_jBackgroundcolor(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Frame*>(id);
    const auto& result = jni_to_cxx_id->backgroundColor;
    jint cxx_to_jni_result = (jint)result;
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT void Java_com_examples_enums_Frame_jSetbackgroundcolor(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Frame*>(id);
    
    auto jni_to_cxx_value = (iegen::example::Color)value;
    jni_to_cxx_id->backgroundColor = jni_to_cxx_value;
}

extern "C" JNIEXPORT jint Java_com_examples_enums_Frame_jBackgroundcolorshade(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Frame*>(id);
    const auto& result = jni_to_cxx_id->backgroundColorShade;
    jint cxx_to_jni_result = (jint)result;
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT void Java_com_examples_enums_Frame_jSetbackgroundcolorshade(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Frame*>(id);
    
    auto jni_to_cxx_value = (iegen::example::ColorShade)value;
    jni_to_cxx_id->backgroundColorShade = jni_to_cxx_value;
}
