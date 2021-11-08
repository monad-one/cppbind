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
#include "cxx/inheritance/car.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCar_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    std::shared_ptr<iegen::example::Vehicle>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(id);
    delete &jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyCar_jConstructor(JNIEnv* env, jobject obj, jint numberOfSeats){
    
    iegen::example::MyCar* obj_ptr = new iegen::example::MyCar(numberOfSeats);
    auto this_object = std::shared_ptr<iegen::example::MyCar>(obj_ptr);
    std::shared_ptr<iegen::example::Vehicle> baseptr = std::dynamic_pointer_cast<iegen::example::Vehicle>(this_object);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Vehicle>(baseptr));
}


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_MyCar_jType(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::shared_ptr<iegen::example::MyCar> jni_to_cxx_id = std::dynamic_pointer_cast<iegen::example::MyCar>(*reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(id));
    
    try {
        const auto& result = jni_to_cxx_id->type();
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