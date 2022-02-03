/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/21/2021-09:28.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/getters/fruits.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_getters_Fruit_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruit*>(id);
    delete jnitocxxid;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Fruit_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruit*>(id);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = (jint)result;
        return cxxtojniresult;
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

    jint result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Apple_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Fruit* baseptr = new iegen::example::Apple();
        return reinterpret_cast<jlong>(baseptr);
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
    jobjectid result;
    return result;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Apple_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto base_id = reinterpret_cast<iegen::example::Fruit*>(id);
    auto jnitocxxid = dynamic_cast<iegen::example::Apple*>(base_id);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = (jint)result;
        return cxxtojniresult;
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

    jint result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Pineapple_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Fruit* baseptr = new iegen::example::Pineapple();
        return reinterpret_cast<jlong>(baseptr);
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
    jobjectid result;
    return result;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Pineapple_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto base_id = reinterpret_cast<iegen::example::Fruit*>(id);
    auto jnitocxxid = dynamic_cast<iegen::example::Pineapple*>(base_id);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = (jint)result;
        return cxxtojniresult;
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

    jint result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Fruits_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(id);
    delete jnitocxxid;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Fruits_jConstructor(JNIEnv* env, jobject obj, jobjectidArray fruits){
    
    std::vector<Fruit *> jnitocxxfruits;
    auto _jnitocxxfruits = iegen::getLongArray(env, fruits);
    for (auto& value__jnitocxxfruits : _jnitocxxfruits) {
        
        auto jnitocxxvalue__jnitocxxfruits = reinterpret_cast<iegen::example::Fruit*>(value__jnitocxxfruits);
        jnitocxxfruits.emplace_back(jnitocxxvalue__jnitocxxfruits);
    }
    try {
        iegen::example::Fruits* baseptr = new iegen::example::Fruits(jnitocxxfruits);
        return reinterpret_cast<jlong>(baseptr);
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
    jobjectid result;
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jFruitsApple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(id);
    try {
        const auto& result = jnitocxxid->fruits<iegen::example::Apple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            iegen::example::Fruit* cxxtojnivalue_result_baseptr = const_cast<iegen::example::Apple*>(value_result);
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(cxxtojnivalue_result_baseptr);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
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

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jFruitsPineapple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(id);
    try {
        const auto& result = jnitocxxid->fruits<iegen::example::Pineapple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            iegen::example::Fruit* cxxtojnivalue_result_baseptr = const_cast<iegen::example::Pineapple*>(value_result);
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(cxxtojnivalue_result_baseptr);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
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

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jAllfruitsApplePineapple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(id);
    try {
        const auto& result = jnitocxxid->allFruits<iegen::example::Apple, iegen::example::Pineapple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            iegen::example::Fruit* cxxtojnivalue_result_baseptr = const_cast<iegen::example::Fruit*>(value_result);
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(cxxtojnivalue_result_baseptr);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
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

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Fruits_jSetallfruitsApplePineapple(JNIEnv* env, jobject obj, jobjectid id, jobjectidArray arg0){
    validateID(id);
    
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(id);
    
    std::vector<Fruit *> jnitocxxarg0;
    auto _jnitocxxarg0 = iegen::getLongArray(env, arg0);
    for (auto& value__jnitocxxarg0 : _jnitocxxarg0) {
        
        auto jnitocxxvalue__jnitocxxarg0 = reinterpret_cast<iegen::example::Fruit*>(value__jnitocxxarg0);
        jnitocxxarg0.emplace_back(jnitocxxvalue__jnitocxxarg0);
    }
    try {
       jnitocxxid->setAllFruits<iegen::example::Apple, iegen::example::Pineapple>(jnitocxxarg0);
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
}

