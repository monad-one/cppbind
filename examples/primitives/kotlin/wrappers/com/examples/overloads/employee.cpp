/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/20/2021-09:56.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/overloads/employee.hpp"


using namespace iegen::example;

extern "C" JNIEXPORT void Java_com_examples_overloads_Employee_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_overloads_Employee_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Employee>*>(id);
    delete &this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_overloads_Employee_jConstructor(JNIEnv* env, jobject obj, jstring name){
    jstring jjni_to_cxx_nameStr = (jstring)name;
    auto jni_to_cxx_name_cstr = env->GetStringUTFChars(jjni_to_cxx_nameStr, 0);
    const std::string & jni_to_cxx_name = jni_to_cxx_name_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_nameStr, jni_to_cxx_name_cstr);
    iegen::example::Employee* obj_ptr = new iegen::example::Employee(jni_to_cxx_name);
    auto this_object = std::shared_ptr<iegen::example::Employee>(obj_ptr);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Employee>(this_object));
}
extern "C" JNIEXPORT jobjectid Java_com_examples_overloads_Employee_jConstructor_11(JNIEnv* env, jobject obj, jint age, jstring email){
    
    jstring jjni_to_cxx_emailStr = (jstring)email;
    auto jni_to_cxx_email_cstr = env->GetStringUTFChars(jjni_to_cxx_emailStr, 0);
    const std::string & jni_to_cxx_email = jni_to_cxx_email_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_emailStr, jni_to_cxx_email_cstr);
    iegen::example::Employee* obj_ptr = new iegen::example::Employee(age, jni_to_cxx_email);
    auto this_object = std::shared_ptr<iegen::example::Employee>(obj_ptr);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Employee>(this_object));
}


extern "C" JNIEXPORT void Java_com_examples_overloads_Employee_jSetdata(JNIEnv* env, jobject obj, jobjectid id, jstring name, jint age, jstring email){
    
    jstring jjni_to_cxx_nameStr = (jstring)name;
    auto jni_to_cxx_name_cstr = env->GetStringUTFChars(jjni_to_cxx_nameStr, 0);
    const std::string & jni_to_cxx_name = jni_to_cxx_name_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_nameStr, jni_to_cxx_name_cstr);



    jstring jjni_to_cxx_emailStr = (jstring)email;
    auto jni_to_cxx_email_cstr = env->GetStringUTFChars(jjni_to_cxx_emailStr, 0);
    const std::string & jni_to_cxx_email = jni_to_cxx_email_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_emailStr, jni_to_cxx_email_cstr);

    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Employee>*>(id);
    
    this_object->setData(jni_to_cxx_name, age, jni_to_cxx_email);
}


extern "C" JNIEXPORT void Java_com_examples_overloads_Employee_jSetdata_11(JNIEnv* env, jobject obj, jobjectid id, jint age){
    


    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Employee>*>(id);
    
    this_object->setData(age);
}

extern "C" JNIEXPORT jstring Java_com_examples_overloads_Employee_jName(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Employee>*>(id);
    auto result = this_object->name();
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT jstring Java_com_examples_overloads_Employee_jEmail(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Employee>*>(id);
    auto result = this_object->email();
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT jint Java_com_examples_overloads_Employee_jAge(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Employee>*>(id);
    auto result = this_object->age();
    
    return result;
}