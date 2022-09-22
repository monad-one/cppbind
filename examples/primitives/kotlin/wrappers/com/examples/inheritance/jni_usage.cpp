/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 09/22/2022-10:42.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/inheritance/usage.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/vehicle.hpp"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/date.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;
extern const char* CPPBIND_CPPBIND_EXAMPLE_IPARALLELOGRAM;
extern const char* CPPBIND_CPPBIND_EXAMPLE_VEHICLE;
extern const char* CPPBIND_CPPBIND_EXAMPLE_BICYCLE;
extern const char* CPPBIND_CPPBIND_EXAMPLE_DATE;

const char* CPPBIND_CPPBIND_EXAMPLE_GEOMETRICFIGURE = "cppbind::example::GeometricFigure";
const char* CPPBIND_CPPBIND_EXAMPLE_MYVEHICLE = "cppbind::example::MyVehicle";
const char* CPPBIND_CPPBIND_EXAMPLE_MYBICYCLE = "cppbind::example::MyBicycle";
const char* CPPBIND_CPPBIND_EXAMPLE_MYCALENDAR = "cppbind::example::MyCalendar";

cppbind::example::Parallelogram* recover_obj_from_CppbindExample_IParallelogram(jobjectid);
std::shared_ptr<cppbind::example::Vehicle> recover_obj_from_CppbindExample_Vehicle(jobjectid);
std::shared_ptr<cppbind::example::Bicycle> recover_obj_from_CppbindExample_Bicycle(jobjectid);
std::shared_ptr<cppbind::example::Date> recover_obj_from_CppbindExample_Date(jobjectid);


extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_inheritance_GeometricFigure_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr));
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jobjectid p, ...){
    using namespace cppbind::example;
    
    cppbind::example::Parallelogram* jnitocxxp = recover_obj_from_CppbindExample_IParallelogram(p);
    try {
        cppbind::example::GeometricFigure* this_object = new cppbind::example::GeometricFigure(jnitocxxp);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_GEOMETRICFIGURE), this_object});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jParallelogram([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    try {
        decltype(auto) result = jnitocxxid->parallelogram();
        cppbind::example::Parallelogram* cxxtojniresult_ptr = result;
        char* type_result = nullptr;
        const char* name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_IPARALLELOGRAM);
        }
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, dynamic_cast<void*>(cxxtojniresult_ptr)};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jSetparallelogram([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid p, ...){
    using namespace cppbind::example;
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    
    cppbind::example::Parallelogram* jnitocxxp = recover_obj_from_CppbindExample_IParallelogram(p);
    try {
       jnitocxxid->setParallelogram(jnitocxxp);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jNullableparallelogram([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    try {
        decltype(auto) result = jnitocxxid->nullableParallelogram();
        cppbind::example::Parallelogram* cxxtojniresult_ptr = result;
        char* type_result = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            const char* name_result = typeid(*result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_IPARALLELOGRAM);
            }
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, dynamic_cast<void*>(cxxtojniresult_ptr)};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jSetnullableparallelogram([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid p, ...){
    using namespace cppbind::example;
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    
    cppbind::example::Parallelogram* jnitocxxp = recover_obj_from_CppbindExample_IParallelogram(p);
    try {
       jnitocxxid->setNullableParallelogram(jnitocxxp);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_inheritance_MyVehicle_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr)->get());
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jobjectid v, jobjectid cv, ...){
    using namespace cppbind::example;
    
    std::shared_ptr<cppbind::example::Vehicle> jnitocxxv;
    jnitocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    
    std::shared_ptr<const cppbind::example::Vehicle> jnitocxxcv;
    jnitocxxcv = recover_obj_from_CppbindExample_Vehicle(cv);
    try {
        cppbind::example::MyVehicle* this_object = new cppbind::example::MyVehicle(jnitocxxv, jnitocxxcv);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_MYVEHICLE), new std::shared_ptr<cppbind::example::MyVehicle>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jVehicle([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyVehicle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    try {
        decltype(auto) result = jnitocxxid->vehicle();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char* name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_VEHICLE);
            }
            cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result));
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jSetvehicle([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid v, ...){
    using namespace cppbind::example;
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyVehicle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    
    std::shared_ptr<cppbind::example::Vehicle> jnitocxxv = nullptr;
    if (v) {
        jnitocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    }
    try {
       jnitocxxid->setVehicle(jnitocxxv);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jConstvehicle([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyVehicle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    try {
        decltype(auto) result = jnitocxxid->constVehicle();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char* name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_VEHICLE);
            }
            cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<cppbind::example::Vehicle>(result)));
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jSetconstvehicle([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid v, ...){
    using namespace cppbind::example;
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyVehicle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    
    std::shared_ptr<const cppbind::example::Vehicle> jnitocxxv = nullptr;
    if (v) {
        jnitocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    }
    try {
       jnitocxxid->setConstVehicle(jnitocxxv);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyBicycle_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_inheritance_MyBicycle_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cppbind_obj_id_ptr)->get());
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyBicycle_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jobjectid b, ...){
    using namespace cppbind::example;
    
    std::shared_ptr<cppbind::example::Bicycle> jnitocxxb;
    jnitocxxb = recover_obj_from_CppbindExample_Bicycle(b);
    try {
        cppbind::example::MyBicycle* this_object = new cppbind::example::MyBicycle(jnitocxxb);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_MYBICYCLE), new std::shared_ptr<cppbind::example::MyBicycle>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyBicycle_jBicycle([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyBicycle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cppbind_obj_id_ptr);
    try {
        decltype(auto) result = jnitocxxid->bicycle();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;

        auto& arg_pointee_result = *result.get();
        const char* name_result = typeid(arg_pointee_result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_BICYCLE);
        }
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<cppbind::example::Bicycle>(result)));
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyBicycle_jSetbicycle([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid b, ...){
    using namespace cppbind::example;
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyBicycle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cppbind_obj_id_ptr);
    
    std::shared_ptr<const cppbind::example::Bicycle> jnitocxxb;
    jnitocxxb = recover_obj_from_CppbindExample_Bicycle(b);
    try {
       jnitocxxid->setBicycle(jnitocxxb);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCalendar_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_inheritance_MyCalendar_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cppbind_obj_id_ptr)->get());
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyCalendar_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jobjectidArray events, ...){
    using namespace cppbind::example;
    
    std::vector<std::shared_ptr<Date>> jnitocxxevents;
    auto _jnitocxxevents = cppbind::getLongArray(env, events);
    for (auto& value__jnitocxxevents : _jnitocxxevents) {
        
        std::shared_ptr<cppbind::example::Date> jnitocxxvalue__jnitocxxevents;
        jnitocxxvalue__jnitocxxevents = recover_obj_from_CppbindExample_Date(value__jnitocxxevents);
        jnitocxxevents.emplace_back(jnitocxxvalue__jnitocxxevents);
    }
    try {
        cppbind::example::MyCalendar* this_object = new cppbind::example::MyCalendar(jnitocxxevents);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_MYCALENDAR), new std::shared_ptr<cppbind::example::MyCalendar>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCalendar_jAddevent([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid e, ...){
    using namespace cppbind::example;
    

    std::shared_ptr<cppbind::example::Date> jnitocxxe;
    jnitocxxe = recover_obj_from_CppbindExample_Date(e);

    validateID(id);
    std::shared_ptr<cppbind::example::MyCalendar> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->addEvent(jnitocxxe);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_inheritance_MyCalendar_jEvents([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyCalendar> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cppbind_obj_id_ptr);
    try {
        decltype(auto) result = jnitocxxid->events();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            char* type_value_result = nullptr;
            void* cxxtojnivalue_result_ptr = nullptr;
            CppBindCObject* cppbind_obj_cxxtojnivalue_result = nullptr;

            auto& arg_pointee_value_result = *value_result.get();
            const char* name_value_result = typeid(arg_pointee_value_result).name();
            int status = 0;
            char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
            if (status == 0) {
                type_value_result = demangled_value_result;
            } else {
                type_value_result = strdup(CPPBIND_CPPBIND_EXAMPLE_DATE);
            }
            cxxtojnivalue_result_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(value_result));
            cppbind_obj_cxxtojnivalue_result = new CppBindCObject {type_value_result, cxxtojnivalue_result_ptr};
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(cppbind_obj_cxxtojnivalue_result);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectidArray result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_UsageKt_jGettypebyid(JNIEnv* env, jclass, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}
