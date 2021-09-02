/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/02/2021-07:34.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/parallelogram.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_Parallelogram_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Parallelogram*>(id);
    delete jni_to_cxx_id;
}

extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_ParallelogramHelper_jArea(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Parallelogram*>(id);
    try {
        auto result = jni_to_cxx_id->area();
        
        return result;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jdouble result;
    return result;
}


extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_ParallelogramHelper_jPerimeter(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Parallelogram*>(id);
    
    try {
        auto result = jni_to_cxx_id->perimeter();
        
        return result;
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jdouble result;
    return result;
}