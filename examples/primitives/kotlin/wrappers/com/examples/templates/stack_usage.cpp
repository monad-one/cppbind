#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/stack_usage.hpp"
#include "cxx/simple/project.hpp"

using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_templates_StackUsage_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_templates_StackUsage_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::StackUsage* this_object = reinterpret_cast<iegen::example::StackUsage*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackUsage_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::StackUsage* baseptr = new iegen::example::StackUsage();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackUsage_jFirstitemofspecialized(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    

    auto jni_to_cxx_p =  reinterpret_cast<iegen::example::Stack<iegen::example::Project>*>(p);

    validateID(id);
    iegen::example::StackUsage* this_object = reinterpret_cast<iegen::example::StackUsage*>(id);
    
    auto result = this_object->firstItemOfSpecialized(jni_to_cxx_p);


    iegen::example::Project* cxx_to_jni_result_baseptr = result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackUsage_jFirstitemoftemplateProject(JNIEnv* env, jobject obj, jobjectid id, jobjectid arg0){
    

    auto jni_to_cxx_arg0 =  reinterpret_cast<iegen::example::Stack<iegen::example::Project>*>(arg0);

    validateID(id);
    iegen::example::StackUsage* this_object = reinterpret_cast<iegen::example::StackUsage*>(id);
    
    auto result = this_object->firstItemOfTemplate<iegen::example::Project>(jni_to_cxx_arg0);


    iegen::example::Project* cxx_to_jni_result_baseptr = result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}