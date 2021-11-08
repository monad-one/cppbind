/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/08/2021-15:56.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/datetime.hpp"
#include "cxx/inheritance/time.hpp"
#include "cxx/inheritance/date.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_DateTime_jConstructor(JNIEnv* env, jobject obj, jint d, jint mo, jint y, jint h, jint mi, jint s){
    
    
    
    
    
    
    iegen::example::DateTime* obj_ptr = new iegen::example::DateTime(d, mo, y, h, mi, s);
    auto this_object = std::shared_ptr<iegen::example::DateTime>(obj_ptr);
    std::shared_ptr<iegen::example::Base> baseptr = std::dynamic_pointer_cast<iegen::example::Base>(this_object);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Base>(baseptr));
}


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_DateTime_jValue(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::shared_ptr<iegen::example::DateTime> jni_to_cxx_id = std::dynamic_pointer_cast<iegen::example::DateTime>(*reinterpret_cast<std::shared_ptr<iegen::example::Base>*>(id));
    
    try {
        const auto& result = jni_to_cxx_id->value();
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

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_DateTime_jDatetime(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::DateTime> jni_to_cxx_id = std::dynamic_pointer_cast<iegen::example::DateTime>(*reinterpret_cast<std::shared_ptr<iegen::example::Base>*>(id));
    try {
        const auto& result = jni_to_cxx_id->datetime();
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