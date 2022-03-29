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
#include "cxx/inheritance/usage.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/vehicle.hpp"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/date.hpp"

iegen::example::Parallelogram* downcast_IegenExample_IParallelogram(jobjectid);
std::shared_ptr<iegen::example::Vehicle> downcast_IegenExample_Vehicle(jobjectid);
std::shared_ptr<iegen::example::Date> downcast_IegenExample_Date(jobjectid);

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jConstructor(JNIEnv* env, jobject obj, jobjectid p){
    
    iegen::example::Parallelogram* jnitocxxp = downcast_IegenExample_IParallelogram(p);
    try {
        iegen::example::GeometricFigure* ptr = new iegen::example::GeometricFigure(jnitocxxp);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::GeometricFigure"), ptr});
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
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jParallelogram(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->parallelogram();
        iegen::example::Parallelogram* cxxtojniresult_ptr = const_cast<iegen::example::Parallelogram*>(result);
        char* type_result = nullptr;
        const char* name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::Parallelogram");
        }
        IEGenCObject* iegen_obj_cxxtojniresult = new IEGenCObject {type_result, dynamic_cast<void*>(cxxtojniresult_ptr)};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
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

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jSetparallelogram(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    
    iegen::example::Parallelogram* jnitocxxp = downcast_IegenExample_IParallelogram(p);
    try {
       jnitocxxid->setParallelogram(jnitocxxp);
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
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jNullableparallelogram(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->nullableParallelogram();
        iegen::example::Parallelogram* cxxtojniresult_ptr = const_cast<iegen::example::Parallelogram*>(result);
        char* type_result = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        if (result) {
            const char* name_result = typeid(*result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup("iegen::example::Parallelogram");
            }
            iegen_obj_cxxtojniresult = new IEGenCObject {type_result, dynamic_cast<void*>(cxxtojniresult_ptr)};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
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

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jSetnullableparallelogram(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    
    iegen::example::Parallelogram* jnitocxxp = downcast_IegenExample_IParallelogram(p);
    try {
       jnitocxxid->setNullableParallelogram(jnitocxxp);
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
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jConstructor(JNIEnv* env, jobject obj, jobjectid v, jobjectid cv){
    
    std::shared_ptr<iegen::example::Vehicle> jnitocxxv;
    jnitocxxv = downcast_IegenExample_Vehicle(v);
    
    std::shared_ptr<const iegen::example::Vehicle> jnitocxxcv;
    jnitocxxcv = downcast_IegenExample_Vehicle(cv);
    try {
        iegen::example::MyVehicle* obj_ptr = new iegen::example::MyVehicle(jnitocxxv, jnitocxxcv);
        auto this_object = std::shared_ptr<iegen::example::MyVehicle>(obj_ptr);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::MyVehicle"), new std::shared_ptr<iegen::example::MyVehicle>(this_object)});
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
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jVehicle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::MyVehicle> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->vehicle();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char* name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup("iegen::example::Vehicle");
            }
            cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<iegen::example::Vehicle>(result)));
            iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
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

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jSetvehicle(JNIEnv* env, jobject obj, jobjectid id, jobjectid v){
    validateID(id);
    
    std::shared_ptr<iegen::example::MyVehicle> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(iegen_obj_id_ptr);
    
    std::shared_ptr<iegen::example::Vehicle> jnitocxxv = nullptr;
    if (v) {
        jnitocxxv = downcast_IegenExample_Vehicle(v);
    }
    try {
       jnitocxxid->setVehicle(jnitocxxv);
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
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jConstvehicle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::MyVehicle> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->constVehicle();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char* name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup("iegen::example::Vehicle");
            }
            cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<iegen::example::Vehicle>(result)));
            iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
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

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jSetconstvehicle(JNIEnv* env, jobject obj, jobjectid id, jobjectid v){
    validateID(id);
    
    std::shared_ptr<iegen::example::MyVehicle> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::MyVehicle>*>(iegen_obj_id_ptr);
    
    std::shared_ptr<const iegen::example::Vehicle> jnitocxxv = nullptr;
    if (v) {
        jnitocxxv = downcast_IegenExample_Vehicle(v);
    }
    try {
       jnitocxxid->setConstVehicle(jnitocxxv);
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
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyBicycle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyBicycle_jConstructor(JNIEnv* env, jobject obj, jobjectid b){
    
    std::shared_ptr<iegen::example::Bicycle> jnitocxxb;
    auto iegen_obj_b = reinterpret_cast<IEGenCObject*>(b);
    auto iegen_obj_b_ptr = iegen_obj_b ? iegen_obj_b->ptr : nullptr;
    jnitocxxb = *static_cast<std::shared_ptr<iegen::example::Bicycle>*>(iegen_obj_b_ptr);
    try {
        iegen::example::MyBicycle* obj_ptr = new iegen::example::MyBicycle(jnitocxxb);
        auto this_object = std::shared_ptr<iegen::example::MyBicycle>(obj_ptr);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::MyBicycle"), new std::shared_ptr<iegen::example::MyBicycle>(this_object)});
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
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyBicycle_jBicycle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::MyBicycle> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->bicycle();
        
        char* type_result = strdup("iegen::example::Bicycle");
        void* cxxtojniresult_ptr = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<iegen::example::Bicycle>(result)));
        iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
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

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyBicycle_jSetbicycle(JNIEnv* env, jobject obj, jobjectid id, jobjectid b){
    validateID(id);
    
    std::shared_ptr<iegen::example::MyBicycle> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::MyBicycle>*>(iegen_obj_id_ptr);
    
    std::shared_ptr<const iegen::example::Bicycle> jnitocxxb;
    auto iegen_obj_b = reinterpret_cast<IEGenCObject*>(b);
    auto iegen_obj_b_ptr = iegen_obj_b ? iegen_obj_b->ptr : nullptr;
    jnitocxxb = *static_cast<std::shared_ptr<const iegen::example::Bicycle>*>(iegen_obj_b_ptr);
    try {
       jnitocxxid->setBicycle(jnitocxxb);
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
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCalendar_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<iegen::example::MyCalendar>*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyCalendar_jConstructor(JNIEnv* env, jobject obj, jobjectidArray events){
    
    std::vector<std::shared_ptr<Date>> jnitocxxevents;
    auto _jnitocxxevents = iegen::getLongArray(env, events);
    for (auto& value__jnitocxxevents : _jnitocxxevents) {
        
        std::shared_ptr<iegen::example::Date> jnitocxxvalue__jnitocxxevents;
        jnitocxxvalue__jnitocxxevents = downcast_IegenExample_Date(value__jnitocxxevents);
        jnitocxxevents.emplace_back(jnitocxxvalue__jnitocxxevents);
    }
    try {
        iegen::example::MyCalendar* obj_ptr = new iegen::example::MyCalendar(jnitocxxevents);
        auto this_object = std::shared_ptr<iegen::example::MyCalendar>(obj_ptr);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::MyCalendar"), new std::shared_ptr<iegen::example::MyCalendar>(this_object)});
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
    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCalendar_jAddevent(JNIEnv* env, jobject obj, jobjectid id, jobjectid e){
    

    std::shared_ptr<iegen::example::Date> jnitocxxe;
    jnitocxxe = downcast_IegenExample_Date(e);

    validateID(id);
    std::shared_ptr<iegen::example::MyCalendar> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::MyCalendar>*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->addEvent(jnitocxxe);
        return;
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


}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_inheritance_MyCalendar_jEvents(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::MyCalendar> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::MyCalendar>*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->events();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            char* type_value_result = nullptr;
            void* cxxtojnivalue_result_ptr = nullptr;
            IEGenCObject* iegen_obj_cxxtojnivalue_result = nullptr;

            auto& arg_pointee_value_result = *value_result.get();
            const char* name_value_result = typeid(arg_pointee_value_result).name();
            int status = 0;
            char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
            if (status == 0) {
                type_value_result = demangled_value_result;
            } else {
                type_value_result = strdup("iegen::example::Date");
            }
            cxxtojnivalue_result_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<iegen::example::Date>(value_result)));
            iegen_obj_cxxtojnivalue_result = new IEGenCObject {type_value_result, cxxtojnivalue_result_ptr};
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnivalue_result);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
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

    jobjectidArray result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_UsageKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}
