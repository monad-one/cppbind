#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/overloads/utils.hpp"

using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_overloads_Utils_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_overloads_Utils_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Utils>*>(id);
    delete &this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_overloads_Utils_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Utils* obj_ptr = new iegen::example::Utils();
    auto this_object = std::shared_ptr<iegen::example::Utils>(obj_ptr);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Utils>(this_object));
}


extern "C" JNIEXPORT jint Java_com_examples_overloads_Utils_jSum(JNIEnv* env, jobject obj, jint first, jint second){
    




    
    auto result = iegen::example::Utils::sum(first, second);

    return result;
}


extern "C" JNIEXPORT jfloat Java_com_examples_overloads_Utils_jSum_11(JNIEnv* env, jobject obj, jfloat first, jfloat second){
    




    
    auto result = iegen::example::Utils::sum(first, second);

    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_overloads_Utils_jConcatenate(JNIEnv* env, jobject obj, jobjectid id, jstring first, jstring second){
    
    jstring jjni_to_cxx_firstStr = (jstring)first;
    auto jni_to_cxx_first_cstr = env->GetStringUTFChars(jjni_to_cxx_firstStr, 0);
    std::string jni_to_cxx_first = jni_to_cxx_first_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_firstStr, jni_to_cxx_first_cstr);

    jstring jjni_to_cxx_secondStr = (jstring)second;
    auto jni_to_cxx_second_cstr = env->GetStringUTFChars(jjni_to_cxx_secondStr, 0);
    std::string jni_to_cxx_second = jni_to_cxx_second_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_secondStr, jni_to_cxx_second_cstr);

    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Utils>*>(id);
    
    auto result = this_object->concatenate(jni_to_cxx_first, jni_to_cxx_second);
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jstring Java_com_examples_overloads_Utils_jConcatenate_11(JNIEnv* env, jobject obj, jobjectid id, jstring first, jstring second, jstring third){
    
    jstring jjni_to_cxx_firstStr = (jstring)first;
    auto jni_to_cxx_first_cstr = env->GetStringUTFChars(jjni_to_cxx_firstStr, 0);
    std::string jni_to_cxx_first = jni_to_cxx_first_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_firstStr, jni_to_cxx_first_cstr);

    jstring jjni_to_cxx_secondStr = (jstring)second;
    auto jni_to_cxx_second_cstr = env->GetStringUTFChars(jjni_to_cxx_secondStr, 0);
    std::string jni_to_cxx_second = jni_to_cxx_second_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_secondStr, jni_to_cxx_second_cstr);

    jstring jjni_to_cxx_thirdStr = (jstring)third;
    auto jni_to_cxx_third_cstr = env->GetStringUTFChars(jjni_to_cxx_thirdStr, 0);
    std::string jni_to_cxx_third = jni_to_cxx_third_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_thirdStr, jni_to_cxx_third_cstr);

    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Utils>*>(id);
    
    auto result = this_object->concatenate(jni_to_cxx_first, jni_to_cxx_second, jni_to_cxx_third);
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}