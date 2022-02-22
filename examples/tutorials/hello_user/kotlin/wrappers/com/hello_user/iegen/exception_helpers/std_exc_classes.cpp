/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/21/2022-13:05.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include <stdexcept>
#include <new>
#include <typeinfo>


using namespace std;


extern "C" JNIEXPORT void Java_com_hello_1user_iegen_exception_1helpers_StdException_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    static_assert(std::has_virtual_destructor<std::exception>::value, "std::exception type must have virtual destructor");
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    std::exception* jnitocxxid = nullptr;
    if (iegen_obj_id_ptr) {
        if (strcmp(iegen_obj_id->type, "std::exception") == 0)
            jnitocxxid = static_cast<std::exception*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::domain_error") == 0)
            jnitocxxid = static_cast<std::domain_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::invalid_argument") == 0)
            jnitocxxid = static_cast<std::invalid_argument*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::length_error") == 0)
            jnitocxxid = static_cast<std::length_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::out_of_range") == 0)
            jnitocxxid = static_cast<std::out_of_range*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::overflow_error") == 0)
            jnitocxxid = static_cast<std::overflow_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::range_error") == 0)
            jnitocxxid = static_cast<std::range_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::underflow_error") == 0)
            jnitocxxid = static_cast<std::underflow_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::bad_alloc") == 0)
            jnitocxxid = static_cast<std::bad_alloc*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::bad_cast") == 0)
            jnitocxxid = static_cast<std::bad_cast*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::bad_typeid") == 0)
            jnitocxxid = static_cast<std::bad_typeid*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::logic_error") == 0)
            jnitocxxid = static_cast<std::logic_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::runtime_error") == 0)
            jnitocxxid = static_cast<std::runtime_error*>(iegen_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
            exit(1);
        }
    }
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}


extern "C" JNIEXPORT jstring Java_com_hello_1user_iegen_exception_1helpers_StdException_jWhat(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    std::exception* jnitocxxid = nullptr;
    if (iegen_obj_id_ptr) {
        if (strcmp(iegen_obj_id->type, "std::exception") == 0)
            jnitocxxid = static_cast<std::exception*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::domain_error") == 0)
            jnitocxxid = static_cast<std::domain_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::invalid_argument") == 0)
            jnitocxxid = static_cast<std::invalid_argument*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::length_error") == 0)
            jnitocxxid = static_cast<std::length_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::out_of_range") == 0)
            jnitocxxid = static_cast<std::out_of_range*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::overflow_error") == 0)
            jnitocxxid = static_cast<std::overflow_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::range_error") == 0)
            jnitocxxid = static_cast<std::range_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::underflow_error") == 0)
            jnitocxxid = static_cast<std::underflow_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::bad_alloc") == 0)
            jnitocxxid = static_cast<std::bad_alloc*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::bad_cast") == 0)
            jnitocxxid = static_cast<std::bad_cast*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::bad_typeid") == 0)
            jnitocxxid = static_cast<std::bad_typeid*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::logic_error") == 0)
            jnitocxxid = static_cast<std::logic_error*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "std::runtime_error") == 0)
            jnitocxxid = static_cast<std::runtime_error*>(iegen_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
            exit(1);
        }
    }
    
    try {
        const auto& result = jnitocxxid->what();
        jstring cxxtojniresult = env->NewStringUTF(result);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result;
    return result;
}

extern "C" JNIEXPORT jstring Java_com_hello_1user_iegen_exception_1helpers_Std_1exc_1classesKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}
