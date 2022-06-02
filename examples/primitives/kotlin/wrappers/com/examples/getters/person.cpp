/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/01/2022-11:47.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/getters/person.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_PERSON = "cppbind::example::Person";

using namespace cppbind::example;


extern "C" JNIEXPORT void Java_com_examples_getters_Person_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::Person>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Person_jConstructor(JNIEnv* env, jobject obj, jstring name, jstring email, jint age, ...){
    jstring jjnitocxxnameStr = static_cast<jstring>(name);
    auto jnitocxxname_cstr = env->GetStringUTFChars(jjnitocxxnameStr, 0);
    std::string jnitocxxname = jnitocxxname_cstr;
    env->ReleaseStringUTFChars(jjnitocxxnameStr, jnitocxxname_cstr);
    jstring jjnitocxxemailStr = static_cast<jstring>(email);
    auto jnitocxxemail_cstr = env->GetStringUTFChars(jjnitocxxemailStr, 0);
    std::string jnitocxxemail = jnitocxxemail_cstr;
    env->ReleaseStringUTFChars(jjnitocxxemailStr, jnitocxxemail_cstr);
    
    try {
        cppbind::example::Person* obj_ptr = new cppbind::example::Person(jnitocxxname, jnitocxxemail, age);
        auto this_object = std::shared_ptr<cppbind::example::Person>(obj_ptr);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_PERSON), new std::shared_ptr<cppbind::example::Person>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_getters_Person_jName(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::Person> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::Person>*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->fullName();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSetfullname(JNIEnv* env, jobject obj, jobjectid id, jstring val, ...){
    validateID(id);
    
    std::shared_ptr<cppbind::example::Person> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::Person>*>(cppbind_obj_id_ptr);
    jstring jjnitocxxvalStr = static_cast<jstring>(val);
    auto jnitocxxval_cstr = env->GetStringUTFChars(jjnitocxxvalStr, 0);
    std::string jnitocxxval = jnitocxxval_cstr;
    env->ReleaseStringUTFChars(jjnitocxxvalStr, jnitocxxval_cstr);
    try {
       jnitocxxid->setFullName(jnitocxxval);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}

extern "C" JNIEXPORT jstring Java_com_examples_getters_Person_jEmail(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::Person> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::Person>*>(cppbind_obj_id_ptr);
    const auto& result = jnitocxxid->_email;
    jstring cxxtojniresult = env->NewStringUTF(result.data());
    return cxxtojniresult;
}
extern "C" JNIEXPORT jint Java_com_examples_getters_Person_jAge(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::Person> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::Person>*>(cppbind_obj_id_ptr);
    const auto& result = jnitocxxid->_age;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSetage(JNIEnv* env, jobject obj, jobjectid id, jint value, ...){
    validateID(id);
    
    std::shared_ptr<cppbind::example::Person> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::Person>*>(cppbind_obj_id_ptr);
    
    
    jnitocxxid->_age = value;
}


extern "C" JNIEXPORT jstring Java_com_examples_getters_PersonKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}
