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
#include "cxx/misc/object_usage.hpp"
#include "cxx/misc/object.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT jobjectid Java_com_examples_misc_ObjectUsage_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::ObjectUsage* obj_ptr = new iegen::example::ObjectUsage();
    auto this_object = std::shared_ptr<iegen::example::ObjectUsage>(obj_ptr);
    std::shared_ptr<iegen::example::Object> baseptr = std::dynamic_pointer_cast<iegen::example::Object>(this_object);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Object>(baseptr));
}