/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/31/2021-08:27.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/containers/json.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_containers_JsonExamples_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::JsonExamples*>(id);
    delete jni_to_cxx_id;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_containers_JsonExamples_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::JsonExamples* baseptr = new iegen::example::JsonExamples();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_containers_JsonExamples_jSetjson(JNIEnv* env, jobject obj, jobjectid id, jstring j){
    
    auto jni_to_cxx_j = nlohmann::json::parse(iegen::jni_to_string(env, j))

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::JsonExamples*>(id);
    
    try {
        jni_to_cxx_id->setJson(jni_to_cxx_j);
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


extern "C" JNIEXPORT jstring Java_com_examples_containers_JsonExamples_jGetjson(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::JsonExamples*>(id);
    
    try {
        auto result = jni_to_cxx_id->getJson();
        jstring cxx_to_jni_result = iegen::string_to_jni(env, result.dump(4));
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

    jstring result;
    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_containers_JsonExamples_jGetsimplejsonexample(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::JsonExamples*>(id);
    
    try {
        auto result = jni_to_cxx_id->getSimpleJsonExample();
        jstring cxx_to_jni_result = iegen::string_to_jni(env, result.dump(4));
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

    jstring result;
    return result;
}