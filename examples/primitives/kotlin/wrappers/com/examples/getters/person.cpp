/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/15/2021-05:34.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/getters/person.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_getters_Person_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    std::shared_ptr<iegen::example::Person>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    delete &jni_to_cxx_id;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Person_jConstructor(JNIEnv* env, jobject obj, jstring name, jstring email, jint age){
    jstring jjni_to_cxx_nameStr = (jstring)name;
    auto jni_to_cxx_name_cstr = env->GetStringUTFChars(jjni_to_cxx_nameStr, 0);
    std::string jni_to_cxx_name = jni_to_cxx_name_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_nameStr, jni_to_cxx_name_cstr);
    jstring jjni_to_cxx_emailStr = (jstring)email;
    auto jni_to_cxx_email_cstr = env->GetStringUTFChars(jjni_to_cxx_emailStr, 0);
    std::string jni_to_cxx_email = jni_to_cxx_email_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_emailStr, jni_to_cxx_email_cstr);
    
    iegen::example::Person* obj_ptr = new iegen::example::Person(jni_to_cxx_name, jni_to_cxx_email, age);
    auto this_object = std::shared_ptr<iegen::example::Person>(obj_ptr);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Person>(this_object));
}

extern "C" JNIEXPORT jstring Java_com_examples_getters_Person_jFullname(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::Person>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    try {
        auto result = jni_to_cxx_id->fullName();
        jstring cxx_to_jni_result = env->NewStringUTF(result.data());
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

extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSetfullname(JNIEnv* env, jobject obj, jobjectid id, jstring val){
    validateID(id);
    
    std::shared_ptr<iegen::example::Person>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);jstring jjni_to_cxx_valStr = (jstring)val;
    auto jni_to_cxx_val_cstr = env->GetStringUTFChars(jjni_to_cxx_valStr, 0);
    std::string jni_to_cxx_val = jni_to_cxx_val_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_valStr, jni_to_cxx_val_cstr);
    try {
       jni_to_cxx_id->setFullName(jni_to_cxx_val);
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


extern "C" JNIEXPORT jstring Java_com_examples_getters_Person_jEmail(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    std::shared_ptr<iegen::example::Person>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    auto result = jni_to_cxx_id->_email;
    jstring cxx_to_jni_result = env->NewStringUTF(result.data());
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Person_jAge(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    std::shared_ptr<iegen::example::Person>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    auto result = jni_to_cxx_id->_age;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSetage(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    
    std::shared_ptr<iegen::example::Person>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    
    
    jni_to_cxx_id->_age = value;
}
