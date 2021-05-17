#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/containers/vector.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_containers_VectorItem_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_containers_VectorItem_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::VectorItem* this_object = reinterpret_cast<iegen::example::VectorItem*>(id);
    delete this_object;
}

extern "C" JNIEXPORT jint Java_com_examples_containers_VectorItem_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::VectorItem* this_object = reinterpret_cast<iegen::example::VectorItem*>(id);
    auto result = this_object->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_containers_VectorItem_jSetvalue(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    iegen::example::VectorItem* this_object = reinterpret_cast<iegen::example::VectorItem*>(id);
    
    
    this_object->value = value;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_containers_VectorItem_jConstructor(JNIEnv* env, jobject obj, jint _value){
    
    iegen::example::VectorItem* baseptr = new iegen::example::VectorItem(_value);
    return reinterpret_cast<jlong>(baseptr);
}

using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::VectorExamples* this_object = reinterpret_cast<iegen::example::VectorExamples*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_containers_VectorExamples_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::VectorExamples* baseptr = new iegen::example::VectorExamples();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jAddintvector(JNIEnv* env, jobject obj, jobjectid id, jintArray v){
    

    std::vector<int> jni_to_cxx_v;
    auto _jni_to_cxx_v = iegen::getIntArray(env, v);
    for (auto& value : _jni_to_cxx_v) {
        
        jni_to_cxx_v.emplace_back(value);
    }

    validateID(id);
    iegen::example::VectorExamples* this_object = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    this_object->addIntVector(jni_to_cxx_v);
}


extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jAddobjvector(JNIEnv* env, jobject obj, jobjectid id, jobjectidArray v){
    

    std::vector<VectorItem *> jni_to_cxx_v;
    auto _jni_to_cxx_v = iegen::getLongArray(env, v);
    for (auto& value : _jni_to_cxx_v) {
        
        auto jni_to_cxx_value =  reinterpret_cast<iegen::example::VectorItem*>(value);
        jni_to_cxx_v.emplace_back(jni_to_cxx_value);
    }

    validateID(id);
    iegen::example::VectorExamples* this_object = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    this_object->addObjVector(jni_to_cxx_v);
}


extern "C" JNIEXPORT void Java_com_examples_containers_VectorExamples_jAddstringvector(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::string> jni_to_cxx_v;
    auto _jni_to_cxx_v = iegen::getObjectArray(env, v);
    for (auto& value : _jni_to_cxx_v) {
        jstring jjni_to_cxx_valueStr = (jstring)value;
        auto jni_to_cxx_value_cstr = env->GetStringUTFChars(jjni_to_cxx_valueStr, 0);
        std::string jni_to_cxx_value = jni_to_cxx_value_cstr;
        env->ReleaseStringUTFChars(jjni_to_cxx_valueStr, jni_to_cxx_value_cstr);
        jni_to_cxx_v.emplace_back(jni_to_cxx_value);
    }

    validateID(id);
    iegen::example::VectorExamples* this_object = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    this_object->addStringVector(jni_to_cxx_v);
}


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_VectorExamples_jGetstringvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::VectorExamples* this_object = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    auto result = this_object->getStringVector();

    jobjectArray cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
    size_t index = 0;
    for (auto& value : result) {
        jstring cxx_to_jni_value = env->NewStringUTF(value.c_str());
        env->SetObjectArrayElement(cxx_to_jni_result, index, cxx_to_jni_value);
        ++index;
    }
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jobjectidArray Java_com_examples_containers_VectorExamples_jGetobjvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::VectorExamples* this_object = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    auto result = this_object->getObjVector();

    jobjectidArray cxx_to_jni_result = env->NewLongArray(result.size());
    size_t index = 0;
    for (auto& value : result) {
        

        iegen::example::VectorItem* cxx_to_jni_value_baseptr = value;
        jobjectid cxx_to_jni_value = reinterpret_cast<jlong>(cxx_to_jni_value_baseptr);
        env->SetLongArrayRegion(cxx_to_jni_result, index, 1, &cxx_to_jni_value);
        ++index;
    }
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jintArray Java_com_examples_containers_VectorExamples_jGetintvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::VectorExamples* this_object = reinterpret_cast<iegen::example::VectorExamples*>(id);
    
    auto result = this_object->getIntVector();

    jintArray cxx_to_jni_result = env->NewIntArray(result.size());
    size_t index = 0;
    for (auto& value : result) {
        
        env->SetIntArrayRegion(cxx_to_jni_result, index, 1, &value);
        ++index;
    }
    return cxx_to_jni_result;
}