/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/24/2022-18:38.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/containers/vector.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_containers_VectorItem_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorItem*>(id);
    delete jnitocxxid;
}
extern "C" JNIEXPORT jint Java_com_examples_containers_VectorItem_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorItem*>(id);
    const auto& result = jnitocxxid->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_containers_VectorItem_jSetvalue(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorItem*>(id);
    
    
    jnitocxxid->value = value;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_containers_VectorItem_jConstructor(JNIEnv* env, jobject obj, jint _value){
    
    try {
        iegen::example::VectorItem* baseptr = new iegen::example::VectorItem(_value);
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

extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorExamples*>(id);
    delete jnitocxxid;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_containers_VectorExamples_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::VectorExamples* baseptr = new iegen::example::VectorExamples();
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


extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jAddintvector(JNIEnv* env, jobject obj, jobjectid id, jintArray v){
    

    std::vector<int> jnitocxxv;
    auto _jnitocxxv = iegen::getIntArray(env, v);
    for (auto& value__jnitocxxv : _jnitocxxv) {
        
        jnitocxxv.emplace_back(value__jnitocxxv);
    }

    validateID(id);
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    try {
        jnitocxxid->addIntVector(jnitocxxv);
        return;
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


extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jAddobjvector(JNIEnv* env, jobject obj, jobjectid id, jobjectidArray v){
    

    std::vector<VectorItem *> jnitocxxv;
    auto _jnitocxxv = iegen::getLongArray(env, v);
    for (auto& value__jnitocxxv : _jnitocxxv) {
        
        auto jnitocxxvalue__jnitocxxv = reinterpret_cast<iegen::example::VectorItem*>(value__jnitocxxv);
        jnitocxxv.emplace_back(jnitocxxvalue__jnitocxxv);
    }

    validateID(id);
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    try {
        jnitocxxid->addObjVector(jnitocxxv);
        return;
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


extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jAddstringvector(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::string> jnitocxxv;
    auto _jnitocxxv = iegen::getObjectArray(env, v);
    for (auto& value__jnitocxxv : _jnitocxxv) {
        jstring jjnitocxxvalue__jnitocxxvStr = (jstring)value__jnitocxxv;
        auto jnitocxxvalue__jnitocxxv_cstr = env->GetStringUTFChars(jjnitocxxvalue__jnitocxxvStr, 0);
        std::string jnitocxxvalue__jnitocxxv = jnitocxxvalue__jnitocxxv_cstr;
        env->ReleaseStringUTFChars(jjnitocxxvalue__jnitocxxvStr, jnitocxxvalue__jnitocxxv_cstr);
        jnitocxxv.emplace_back(jnitocxxvalue__jnitocxxv);
    }

    validateID(id);
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    try {
        jnitocxxid->addStringVector(jnitocxxv);
        return;
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


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_VectorExamples_jGetstringvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    try {
        const auto& result = jnitocxxid->getStringVector();
        
        jobjectArray cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result = 0;
        for (auto& value_result : result) {
            jstring cxxtojnivalue_result = env->NewStringUTF(value_result.data());
            env->SetObjectArrayElement(cxxtojniresult, index_result, cxxtojnivalue_result);
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

    jobjectArray result;
    return result;
}


extern "C" JNIEXPORT jobjectidArray Java_com_examples_containers_VectorExamples_jGetobjvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    try {
        const auto& result = jnitocxxid->getObjVector();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            iegen::example::VectorItem* cxxtojnivalue_result_baseptr = const_cast<iegen::example::VectorItem*>(value_result);
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


extern "C" JNIEXPORT jintArray Java_com_examples_containers_VectorExamples_jGetintvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jnitocxxid = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    try {
        const auto& result = jnitocxxid->getIntVector();
        
        jintArray cxxtojniresult = env->NewIntArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            env->SetIntArrayRegion(cxxtojniresult, index_result, 1, &value_result);
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

    jintArray result;
    return result;
}
