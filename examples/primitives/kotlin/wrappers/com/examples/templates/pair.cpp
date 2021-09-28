/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/24/2021-10:20.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/pair.hpp"
#include "cxx/overloads/employee.hpp"
#include "cxx/forward_decl/student.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_templates_PairEmployee_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(id);
    delete jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_PairEmployee_jConstructor(JNIEnv* env, jobject obj, jstring first, jobjectid second){
    jstring jjni_to_cxx_firstStr = (jstring)first;
    auto jni_to_cxx_first_cstr = env->GetStringUTFChars(jjni_to_cxx_firstStr, 0);
    const std::string & jni_to_cxx_first = jni_to_cxx_first_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_firstStr, jni_to_cxx_first_cstr);
    
    std::shared_ptr<iegen::example::Employee>& jni_to_cxx_second = *reinterpret_cast<std::shared_ptr<iegen::example::Employee>*>(second);
    iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>* baseptr = new iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>(jni_to_cxx_first, jni_to_cxx_second);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jstring Java_com_examples_templates_PairEmployee_jFirst(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(id);
    try {
        auto result = jni_to_cxx_id->first();
        jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
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

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_PairEmployee_jSecond(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(id);
    try {
        auto result = jni_to_cxx_id->second();
        
        jobjectid cxx_to_jni_result;
        cxx_to_jni_result = reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Employee>(result));
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

extern "C" JNIEXPORT void Java_com_examples_templates_PairStudent_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(id);
    delete jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_PairStudent_jConstructor(JNIEnv* env, jobject obj, jstring first, jobjectid second){
    jstring jjni_to_cxx_firstStr = (jstring)first;
    auto jni_to_cxx_first_cstr = env->GetStringUTFChars(jjni_to_cxx_firstStr, 0);
    const std::string & jni_to_cxx_first = jni_to_cxx_first_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_firstStr, jni_to_cxx_first_cstr);
    
    std::shared_ptr<iegen::example::Student>& jni_to_cxx_second = *reinterpret_cast<std::shared_ptr<iegen::example::Student>*>(second);
    iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>* baseptr = new iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>(jni_to_cxx_first, jni_to_cxx_second);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jstring Java_com_examples_templates_PairStudent_jFirst(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(id);
    try {
        auto result = jni_to_cxx_id->first();
        jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
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

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_PairStudent_jSecond(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(id);
    try {
        auto result = jni_to_cxx_id->second();
        
        jobjectid cxx_to_jni_result;
        cxx_to_jni_result = reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Student>(result));
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