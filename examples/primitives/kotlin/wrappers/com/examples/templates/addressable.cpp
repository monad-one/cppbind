/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/26/2021-15:54.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/addressable.hpp"
#include "cxx/simple/root.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_templates_AddressableImplRoot_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>*>(id);
    delete &jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_AddressableImplRoot_jConstructor(JNIEnv* env, jobject obj, jobjectid parent, jstring name){
    
    auto& jni_to_cxx_parent = *reinterpret_cast<iegen::example::Root*>(parent);
    jstring jjni_to_cxx_nameStr = (jstring)name;
    auto jni_to_cxx_name_cstr = env->GetStringUTFChars(jjni_to_cxx_nameStr, 0);
    std::string jni_to_cxx_name = jni_to_cxx_name_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_nameStr, jni_to_cxx_name_cstr);
    iegen::example::Addressable<iegen::example::Root>* obj_ptr = new iegen::example::Addressable<iegen::example::Root>(jni_to_cxx_parent, jni_to_cxx_name);
    auto this_object = std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>(obj_ptr);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>(this_object));
}


extern "C" JNIEXPORT jstring Java_com_examples_templates_IAddressableRootHelper_jAbspath(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>*>(id);
    
    try {
        auto result = jni_to_cxx_id->absPath();
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