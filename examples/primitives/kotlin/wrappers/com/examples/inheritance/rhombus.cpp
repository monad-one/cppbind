#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/rhombus.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_inheritance_Rhombus_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_inheritance_Rhombus_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Parallelogram* baseptr = reinterpret_cast<iegen::example::Parallelogram*>(id);
    iegen::example::Rhombus* this_object = dynamic_cast<iegen::example::Rhombus*>(baseptr);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Rhombus_jConstructor(JNIEnv* env, jobject obj, jdouble diagonal1, jdouble diagonal2){
    
    
    iegen::example::Parallelogram* baseptr = new iegen::example::Rhombus(diagonal1, diagonal2);
    return reinterpret_cast<jlong>(baseptr);
}