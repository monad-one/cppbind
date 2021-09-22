/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/16/2021-14:18.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/nullables/nullable_utils.hpp"

using namespace iegen::example::nullable;


extern "C" JNIEXPORT void Java_com_examples_nullables_NumberInt_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    std::shared_ptr<iegen::example::nullable::NumberInt>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(id);
    delete &jni_to_cxx_id;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_NumberInt_jConstructor(JNIEnv* env, jobject obj, jint val_){
    
    iegen::example::nullable::NumberInt* obj_ptr = new iegen::example::nullable::NumberInt(val_);
    auto this_object = std::shared_ptr<iegen::example::nullable::NumberInt>(obj_ptr);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::nullable::NumberInt>(this_object));
}

extern "C" JNIEXPORT jint Java_com_examples_nullables_NumberInt_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    std::shared_ptr<iegen::example::nullable::NumberInt>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(id);
    auto result = jni_to_cxx_id->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_NumberDouble_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::nullable::NumberDouble*>(id);
    delete jni_to_cxx_id;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_NumberDouble_jConstructor(JNIEnv* env, jobject obj, jdouble val_){
    
    iegen::example::nullable::NumberDouble* baseptr = new iegen::example::nullable::NumberDouble(val_);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jdouble Java_com_examples_nullables_NumberDouble_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::nullable::NumberDouble*>(id);
    auto result = jni_to_cxx_id->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    delete &jni_to_cxx_id;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jConstructor(JNIEnv* env, jobject obj, jobjectid num){
    
    auto jni_to_cxx_num = reinterpret_cast<iegen::example::nullable::NumberDouble*>(num);
    iegen::example::nullable::Utils* obj_ptr = new iegen::example::nullable::Utils(jni_to_cxx_num);
    auto this_object = std::shared_ptr<iegen::example::nullable::Utils>(obj_ptr);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::nullable::Utils>(this_object));
}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jMax(JNIEnv* env, jobject obj, jobjectid first, jobjectid second){
    

    auto jni_to_cxx_first = reinterpret_cast<iegen::example::nullable::NumberDouble*>(first);


    auto jni_to_cxx_second = reinterpret_cast<iegen::example::nullable::NumberDouble*>(second);

    
    try {
        auto result = iegen::example::nullable::Utils::max(jni_to_cxx_first, jni_to_cxx_second);
        
        iegen::example::nullable::NumberDouble* cxx_to_jni_result_baseptr = result;
        jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
        return cxx_to_jni_result;
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

    jobjectid result;
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jMax_11(JNIEnv* env, jobject obj, jobjectid first, jobjectid second){
    

    std::shared_ptr<iegen::example::nullable::NumberInt> jni_to_cxx_first = nullptr;
    if (first) {
        jni_to_cxx_first = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(first);
    }


    std::shared_ptr<iegen::example::nullable::NumberInt> jni_to_cxx_second = nullptr;
    if (second) {
        jni_to_cxx_second = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(second);
    }

    
    try {
        auto result = iegen::example::nullable::Utils::max(jni_to_cxx_first, jni_to_cxx_second);
        
        jobjectid cxx_to_jni_result = 0;
        if (result) {
            cxx_to_jni_result = reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::nullable::NumberInt>(result));
        }
        return cxx_to_jni_result;
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

    jobjectid result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jChecknonnullarg(JNIEnv* env, jobject obj, jobjectid number){
    

    auto jni_to_cxx_number = reinterpret_cast<iegen::example::nullable::NumberDouble*>(number);

    
    try {
        iegen::example::nullable::Utils::checkNonnullArg(jni_to_cxx_number);
        return;
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


}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jChecknonnullreturn(JNIEnv* env, jobject obj){
    
    
    try {
        auto result = iegen::example::nullable::Utils::checkNonnullReturn();
        
        iegen::example::nullable::NumberDouble* cxx_to_jni_result_baseptr = result;
        jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
        return cxx_to_jni_result;
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

    jobjectid result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jNullable(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    try {
        auto result = jni_to_cxx_id->nullable();
        
        iegen::example::nullable::NumberDouble* cxx_to_jni_result_baseptr = result;
        jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
        return cxx_to_jni_result;
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

    jobjectid result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jSetnullable(JNIEnv* env, jobject obj, jobjectid id, jobjectid num){
    validateID(id);
    
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    auto jni_to_cxx_num = reinterpret_cast<iegen::example::nullable::NumberDouble*>(num);
    try {
       jni_to_cxx_id->setNullable(jni_to_cxx_num);
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
}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jNonnull(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    try {
        auto result = jni_to_cxx_id->nonNull();
        
        iegen::example::nullable::NumberDouble* cxx_to_jni_result_baseptr = result;
        jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
        return cxx_to_jni_result;
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

    jobjectid result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jSetnonnull(JNIEnv* env, jobject obj, jobjectid id, jobjectid num){
    validateID(id);
    
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    auto jni_to_cxx_num = reinterpret_cast<iegen::example::nullable::NumberDouble*>(num);
    try {
       jni_to_cxx_id->setNonNull(jni_to_cxx_num);
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
}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jNumdouble(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    auto result = jni_to_cxx_id->numDouble;
    
    iegen::example::nullable::NumberDouble* cxx_to_jni_result_baseptr = result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jSetnumdouble(JNIEnv* env, jobject obj, jobjectid id, jobjectid value){
    validateID(id);
    
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    
    
    auto jni_to_cxx_value = reinterpret_cast<iegen::example::nullable::NumberDouble*>(value);
    jni_to_cxx_id->numDouble = jni_to_cxx_value;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jNumint(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    auto result = jni_to_cxx_id->numInt;
    
    jobjectid cxx_to_jni_result;
    cxx_to_jni_result = reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::nullable::NumberInt>(result));
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jSetnumint(JNIEnv* env, jobject obj, jobjectid id, jobjectid value){
    validateID(id);
    
    std::shared_ptr<iegen::example::nullable::Utils>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(id);
    
    
    std::shared_ptr<iegen::example::nullable::NumberInt>& jni_to_cxx_value = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(value);
    jni_to_cxx_id->numInt = jni_to_cxx_value;
}
