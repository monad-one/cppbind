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
#include "cxx/simple/root.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_ROOT = "cppbind::example::Root";

using namespace cppbind::example;


extern "C" JNIEXPORT void Java_com_examples_simple_Root_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<cppbind::example::Root*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_simple_Root_jConstructor(JNIEnv* env, jobject obj, jstring _path, ...){
    jstring jjnitocxx_pathStr = static_cast<jstring>(_path);
    auto jnitocxx_path_cstr = env->GetStringUTFChars(jjnitocxx_pathStr, 0);
    std::string jnitocxx_path = jnitocxx_path_cstr;
    env->ReleaseStringUTFChars(jjnitocxx_pathStr, jnitocxx_path_cstr);
    try {
        cppbind::example::Root* ptr = new cppbind::example::Root(jnitocxx_path);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_ROOT), ptr});
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


extern "C" JNIEXPORT void Java_com_examples_simple_Root_jUpdatepath(JNIEnv* env, jobject obj, jobjectid id, jstring _path, ...){
    
    jstring jjnitocxx_pathStr = static_cast<jstring>(_path);
    auto jnitocxx_path_cstr = env->GetStringUTFChars(jjnitocxx_pathStr, 0);
    std::string jnitocxx_path = jnitocxx_path_cstr;
    env->ReleaseStringUTFChars(jjnitocxx_pathStr, jnitocxx_path_cstr);

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::Root*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->setPath(jnitocxx_path);
        return;
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
extern "C" JNIEXPORT jstring Java_com_examples_simple_Root_jPath(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::Root*>(cppbind_obj_id_ptr);
    const auto& result = jnitocxxid->path;
    jstring cxxtojniresult = env->NewStringUTF(result.data());
    return cxxtojniresult;
}

extern "C" JNIEXPORT void Java_com_examples_simple_Root_jSetpath(JNIEnv* env, jobject obj, jobjectid id, jstring value, ...){
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::Root*>(cppbind_obj_id_ptr);
    
    jstring jjnitocxxvalueStr = static_cast<jstring>(value);
    auto jnitocxxvalue_cstr = env->GetStringUTFChars(jjnitocxxvalueStr, 0);
    std::string jnitocxxvalue = jnitocxxvalue_cstr;
    env->ReleaseStringUTFChars(jjnitocxxvalueStr, jnitocxxvalue_cstr);
    jnitocxxid->path = jnitocxxvalue;
}


extern "C" JNIEXPORT jstring Java_com_examples_simple_RootKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}
