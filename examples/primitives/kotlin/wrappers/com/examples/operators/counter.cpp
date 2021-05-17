#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/operators/counter.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_operators_Counter_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_operators_Counter_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Counter* this_object = reinterpret_cast<iegen::example::Counter*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_operators_Counter_jConstructor(JNIEnv* env, jobject obj, jint count){
    
    iegen::example::Counter* baseptr = new iegen::example::Counter(count);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jint Java_com_examples_operators_Counter_jCount(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Counter* this_object = reinterpret_cast<iegen::example::Counter*>(id);
    auto result = this_object->count();
    
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_operators_Counter_jPlus(JNIEnv* env, jobject obj, jobjectid id, jobjectid counter){
    

    auto& jni_to_cxx_counter = * reinterpret_cast<iegen::example::Counter*>(counter);

    validateID(id);
    iegen::example::Counter* this_object = reinterpret_cast<iegen::example::Counter*>(id);
    
    auto result = this_object->operator+(jni_to_cxx_counter);

    iegen::example::Counter* _result = new iegen::example::Counter(result);

    iegen::example::Counter* cxx_to_jni_result_baseptr = _result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jint Java_com_examples_operators_Counter_jCompareto(JNIEnv* env, jobject obj, jobjectid id, jobjectid counter){
    

    auto& jni_to_cxx_counter = * reinterpret_cast<iegen::example::Counter*>(counter);

    validateID(id);
    iegen::example::Counter* this_object = reinterpret_cast<iegen::example::Counter*>(id);
    
    auto result = this_object->compareTo(jni_to_cxx_counter);

    return result;
}


extern "C" JNIEXPORT jboolean Java_com_examples_operators_Counter_jGt(JNIEnv* env, jobject obj, jobjectid id, jobjectid counter){
    

    auto& jni_to_cxx_counter = * reinterpret_cast<iegen::example::Counter*>(counter);

    validateID(id);
    iegen::example::Counter* this_object = reinterpret_cast<iegen::example::Counter*>(id);
    
    auto result = this_object->operator>(jni_to_cxx_counter);

    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_operators_Counter_jAdd(JNIEnv* env, jobject obj, jobjectid id, jobjectid counter){
    

    auto& jni_to_cxx_counter = * reinterpret_cast<iegen::example::Counter*>(counter);

    validateID(id);
    iegen::example::Counter* this_object = reinterpret_cast<iegen::example::Counter*>(id);
    
    auto result = this_object->operator+=(jni_to_cxx_counter);


    iegen::example::Counter* cxx_to_jni_result_baseptr = &result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}