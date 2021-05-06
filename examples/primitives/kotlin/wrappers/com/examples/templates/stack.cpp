#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"

using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_templates_StackProject_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_templates_StackProject_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Stack<iegen::example::Project>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Project>*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackProject_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Stack<iegen::example::Project>* baseptr = new iegen::example::Stack<iegen::example::Project>();
    return reinterpret_cast<jlong>(baseptr);
}
extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackProject_jConstructor_11(JNIEnv* env, jobject obj, jobjectid st){
    
    auto& jni_to_cxx_st = * reinterpret_cast<iegen::example::Project*>(st);
    iegen::example::Stack<iegen::example::Project>* baseptr = new iegen::example::Stack<iegen::example::Project>(jni_to_cxx_st);
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_templates_StackProject_jPush(JNIEnv* env, jobject obj, jobjectid id, jobjectid item){
    

    auto jni_to_cxx_item =  reinterpret_cast<iegen::example::Project*>(item);

    validateID(id);
    iegen::example::Stack<iegen::example::Project>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Project>*>(id);
    
    this_object->push(jni_to_cxx_item);
}


extern "C" JNIEXPORT void Java_com_examples_templates_StackProject_jPop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Stack<iegen::example::Project>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Project>*>(id);
    
    this_object->pop();
}


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackProject_jTop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Stack<iegen::example::Project>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Project>*>(id);
    
    auto result = this_object->top();


    iegen::example::Project* cxx_to_jni_result_baseptr = result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jboolean Java_com_examples_templates_StackProject_jEmpty(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Stack<iegen::example::Project>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Project>*>(id);
    
    auto result = this_object->empty();

    return result;
}

using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_templates_StackTask_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_templates_StackTask_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Stack<iegen::example::Task>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Task>*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackTask_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Stack<iegen::example::Task>* baseptr = new iegen::example::Stack<iegen::example::Task>();
    return reinterpret_cast<jlong>(baseptr);
}
extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackTask_jConstructor_11(JNIEnv* env, jobject obj, jobjectid st){
    
    auto& jni_to_cxx_st = * reinterpret_cast<iegen::example::Task*>(st);
    iegen::example::Stack<iegen::example::Task>* baseptr = new iegen::example::Stack<iegen::example::Task>(jni_to_cxx_st);
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_templates_StackTask_jPush(JNIEnv* env, jobject obj, jobjectid id, jobjectid item){
    

    auto jni_to_cxx_item =  reinterpret_cast<iegen::example::Task*>(item);

    validateID(id);
    iegen::example::Stack<iegen::example::Task>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Task>*>(id);
    
    this_object->push(jni_to_cxx_item);
}


extern "C" JNIEXPORT void Java_com_examples_templates_StackTask_jPop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Stack<iegen::example::Task>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Task>*>(id);
    
    this_object->pop();
}


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackTask_jTop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Stack<iegen::example::Task>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Task>*>(id);
    
    auto result = this_object->top();


    iegen::example::Task* cxx_to_jni_result_baseptr = result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jboolean Java_com_examples_templates_StackTask_jEmpty(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Stack<iegen::example::Task>* this_object = reinterpret_cast<iegen::example::Stack<iegen::example::Task>*>(id);
    
    auto result = this_object->empty();

    return result;
}