/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/03/2022-07:15.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/stack_usage.hpp"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_templates_StackUsage_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jnitocxxid = reinterpret_cast<iegen::example::StackUsage*>(id);
    delete jnitocxxid;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackUsage_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::StackUsage* baseptr = new iegen::example::StackUsage();
        return reinterpret_cast<jlong>(baseptr);
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
    jobjectid result;
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackUsage_jFirstitemofspecializedstack(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    

    auto base_p = reinterpret_cast<iegen::example::Container*>(p);
    auto jnitocxxp = dynamic_cast<iegen::example::Stack<Project>*>(base_p);

    validateID(id);
    auto jnitocxxid = reinterpret_cast<iegen::example::StackUsage*>(id);
    
    try {
        const auto& result = jnitocxxid->firstItemOfSpecializedStack(jnitocxxp);
        
        iegen::example::Project* cxxtojniresult_baseptr = const_cast<iegen::example::Project*>(result);
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cxxtojniresult_baseptr);
        return cxxtojniresult;
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

    jobjectid result;
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackUsage_jFirstitemoftemplatestackProject(JNIEnv* env, jobject obj, jobjectid id, jobjectid arg0){
    

    auto base_arg0 = reinterpret_cast<iegen::example::Container*>(arg0);
    auto jnitocxxarg0 = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(base_arg0);

    validateID(id);
    auto jnitocxxid = reinterpret_cast<iegen::example::StackUsage*>(id);
    
    try {
        const auto& result = jnitocxxid->firstItemOfTemplateStack<iegen::example::Project>(jnitocxxarg0);
        
        iegen::example::Project* cxxtojniresult_baseptr = const_cast<iegen::example::Project*>(result);
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cxxtojniresult_baseptr);
        return cxxtojniresult;
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

    jobjectid result;
    return result;
}
