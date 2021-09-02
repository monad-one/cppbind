/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/02/2021-07:34.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/exceptions/exceptions.hpp"

using namespace iegen::exceptions;


extern "C" JNIEXPORT void Java_com_examples_exceptions_Integer_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::exceptions::Integer*>(id);
    delete jni_to_cxx_id;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_Integer_jConstructor(JNIEnv* env, jobject obj, jint n){
    
    iegen::exceptions::Integer* baseptr = new iegen::exceptions::Integer(n);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jint Java_com_examples_exceptions_Integer_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::exceptions::Integer*>(id);
    try {
        auto result = jni_to_cxx_id->value();
        
        return result;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jint result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_exceptions_MiscExc_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::exceptions::MiscExc*>(id);
    delete jni_to_cxx_id;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_MiscExc_jReturninteger(JNIEnv* env, jobject obj, jboolean do_throw){
    


    
    void* err_ptr = nullptr;
    try {
        auto result = iegen::exceptions::MiscExc::returnInteger(do_throw);
        

        iegen::exceptions::Integer* cxx_to_jni_result_baseptr = result;
        jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
        return cxx_to_jni_result;
    }catch (const std::out_of_range& e) {
        err_ptr = new std::out_of_range(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdOutOfRange");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_exceptions_MiscExc_jRaiseerrorbytype(JNIEnv* env, jobject obj, jstring err_type){
    
    jstring jjni_to_cxx_err_typeStr = (jstring)err_type;
    auto jni_to_cxx_err_type_cstr = env->GetStringUTFChars(jjni_to_cxx_err_typeStr, 0);
    const std::string & jni_to_cxx_err_type = jni_to_cxx_err_type_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_err_typeStr, jni_to_cxx_err_type_cstr);

    
    void* err_ptr = nullptr;
    try {
        iegen::exceptions::MiscExc::raiseErrorByType(jni_to_cxx_err_type);
        return;
    }catch (const std::runtime_error& e) {
        err_ptr = new std::runtime_error(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdRuntimeError");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::FileError& e) {
        err_ptr = new iegen::example::FileError(e);
        jclass excCls = env->FindClass("com/examples/exceptions/FileError");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::SystemError& e) {
        err_ptr = new iegen::example::SystemError(e);
        jclass excCls = env->FindClass("com/examples/exceptions/SystemError");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::SimpleChildException& e) {
        err_ptr = new iegen::example::SimpleChildException(e);
        jclass excCls = env->FindClass("com/examples/exceptions/SimpleChildException");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::SimpleBaseException& e) {
        err_ptr = new iegen::example::SimpleBaseException(e);
        jclass excCls = env->FindClass("com/examples/exceptions/SimpleBaseException");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const std::exception& e) {
        err_ptr = new std::exception(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdException");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}