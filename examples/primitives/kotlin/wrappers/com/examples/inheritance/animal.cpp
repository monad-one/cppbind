/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/01/2021-14:32.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/animal.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_Mammal_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Mammal*>(id);
    delete jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Mammal_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Mammal* baseptr = new iegen::example::Mammal();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_Mammal_jSoundtype(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Mammal*>(id);
    
    try {
        const auto& result = jni_to_cxx_id->soundType();
        jstring cxx_to_jni_result = env->NewStringUTF(result.data());
        return cxx_to_jni_result;
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Dog_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Mammal* baseptr = new iegen::example::Dog();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_Dog_jSoundtype(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto base_id = reinterpret_cast<iegen::example::Mammal*>(id);
    auto jni_to_cxx_id = dynamic_cast<iegen::example::Dog*>(base_id);
    
    try {
        const auto& result = jni_to_cxx_id->soundType();
        jstring cxx_to_jni_result = env->NewStringUTF(result.data());
        return cxx_to_jni_result;
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result;
    return result;
}