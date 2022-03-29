/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/17/2022-10:15.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/rectangle.hpp"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/square.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_ParallelogramImpl_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    static_assert(std::has_virtual_destructor<iegen::example::Parallelogram>::value, "iegen::example::Parallelogram type must have virtual destructor");
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (strcmp(iegen_obj_id->type, "iegen::example::Parallelogram") == 0)
        delete static_cast<iegen::example::Parallelogram*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Rectangle") == 0)
        delete static_cast<iegen::example::Rectangle*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Rhombus") == 0)
        delete static_cast<iegen::example::Rhombus*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Square") == 0)
        delete static_cast<iegen::example::Square*>(iegen_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
        exit(1);
    }
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

iegen::example::Parallelogram* downcast_IegenExample_IParallelogram(jobjectid id) {
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (iegen_obj_id_ptr) {
        if (strcmp(iegen_obj_id->type, "iegen::example::Parallelogram") == 0)
            return static_cast<iegen::example::Parallelogram*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Rectangle") == 0)
            return static_cast<iegen::example::Rectangle*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Rhombus") == 0)
            return static_cast<iegen::example::Rhombus*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Square") == 0)
            return static_cast<iegen::example::Square*>(iegen_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_IParallelogramHelper_jArea(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    iegen::example::Parallelogram* jnitocxxid = downcast_IegenExample_IParallelogram(id);
    try {
        const auto& result = jnitocxxid->area();
        
        return result;
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

    jdouble result {};
    return result;
}


extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_IParallelogramHelper_jPerimeter(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Parallelogram* jnitocxxid = downcast_IegenExample_IParallelogram(id);
    
    try {
        const auto& result = jnitocxxid->perimeter();
        
        return result;
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

    jdouble result {};
    return result;
}


extern "C" JNIEXPORT jboolean Java_com_examples_inheritance_IParallelogramHelper_jEquals(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    

    iegen::example::Parallelogram* jnitocxxp = downcast_IegenExample_IParallelogram(p);

    validateID(id);
    iegen::example::Parallelogram* jnitocxxid = downcast_IegenExample_IParallelogram(id);
    
    try {
        const auto& result = jnitocxxid->equals(jnitocxxp);
        
        return result;
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

    jboolean result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_ParallelogramKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}
