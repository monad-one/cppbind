/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/15/2022-10:05.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/animal.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_AnimalImpl_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    static_assert(std::has_virtual_destructor<iegen::example::Animal>::value, "iegen::example::Animal type must have virtual destructor");
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (strcmp(iegen_obj_id->type, "iegen::example::Animal") == 0)
        delete static_cast<iegen::example::Animal*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::LittleFrog") == 0)
        delete static_cast<iegen::example::LittleFrog*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Frog") == 0)
        delete static_cast<iegen::example::Frog*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Mammals::Dolphin") == 0)
        delete static_cast<iegen::example::Mammals::Dolphin*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::AquaticAnimal") == 0)
        delete static_cast<iegen::example::AquaticAnimal*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::TerrestrialAnimal") == 0)
        delete static_cast<iegen::example::TerrestrialAnimal*>(iegen_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
        exit(1);
    }
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_AnimalImpl_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Animal* ptr = new iegen::example::Animal();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Animal"), ptr});
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_IAnimalHelper_jTypename(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    iegen::example::Animal* jnitocxxid = nullptr;
    if (iegen_obj_id_ptr) {
        if (strcmp(iegen_obj_id->type, "iegen::example::Animal") == 0)
            jnitocxxid = static_cast<iegen::example::Animal*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::LittleFrog") == 0)
            jnitocxxid = static_cast<iegen::example::LittleFrog*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Frog") == 0)
            jnitocxxid = static_cast<iegen::example::Frog*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Mammals::Dolphin") == 0)
            jnitocxxid = static_cast<iegen::example::Mammals::Dolphin*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::AquaticAnimal") == 0)
            jnitocxxid = static_cast<iegen::example::AquaticAnimal*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::TerrestrialAnimal") == 0)
            jnitocxxid = static_cast<iegen::example::TerrestrialAnimal*>(iegen_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
            exit(1);
        }
    }
    
    try {
        const auto& result = jnitocxxid->typeName();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

    jstring result {};
    return result;
}


extern "C" JNIEXPORT jboolean Java_com_examples_inheritance_IAnimalHelper_jEquals(JNIEnv* env, jobject obj, jobjectid id, jobjectid a){
    

    auto iegen_obj_a = reinterpret_cast<IEGenCObject*>(a);
    auto iegen_obj_a_ptr = iegen_obj_a ? iegen_obj_a->ptr : nullptr;
    iegen::example::Animal* jnitocxxa = nullptr;
    if (iegen_obj_a_ptr) {
        if (strcmp(iegen_obj_a->type, "iegen::example::Animal") == 0)
            jnitocxxa = static_cast<iegen::example::Animal*>(iegen_obj_a_ptr);
        else if (strcmp(iegen_obj_a->type, "iegen::example::LittleFrog") == 0)
            jnitocxxa = static_cast<iegen::example::LittleFrog*>(iegen_obj_a_ptr);
        else if (strcmp(iegen_obj_a->type, "iegen::example::Frog") == 0)
            jnitocxxa = static_cast<iegen::example::Frog*>(iegen_obj_a_ptr);
        else if (strcmp(iegen_obj_a->type, "iegen::example::Mammals::Dolphin") == 0)
            jnitocxxa = static_cast<iegen::example::Mammals::Dolphin*>(iegen_obj_a_ptr);
        else if (strcmp(iegen_obj_a->type, "iegen::example::AquaticAnimal") == 0)
            jnitocxxa = static_cast<iegen::example::AquaticAnimal*>(iegen_obj_a_ptr);
        else if (strcmp(iegen_obj_a->type, "iegen::example::TerrestrialAnimal") == 0)
            jnitocxxa = static_cast<iegen::example::TerrestrialAnimal*>(iegen_obj_a_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_a->type << std::endl;
            exit(1);
        }
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    iegen::example::Animal* jnitocxxid = nullptr;
    if (iegen_obj_id_ptr) {
        if (strcmp(iegen_obj_id->type, "iegen::example::Animal") == 0)
            jnitocxxid = static_cast<iegen::example::Animal*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::LittleFrog") == 0)
            jnitocxxid = static_cast<iegen::example::LittleFrog*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Frog") == 0)
            jnitocxxid = static_cast<iegen::example::Frog*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Mammals::Dolphin") == 0)
            jnitocxxid = static_cast<iegen::example::Mammals::Dolphin*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::AquaticAnimal") == 0)
            jnitocxxid = static_cast<iegen::example::AquaticAnimal*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::TerrestrialAnimal") == 0)
            jnitocxxid = static_cast<iegen::example::TerrestrialAnimal*>(iegen_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
            exit(1);
        }
    }
    
    try {
        const auto& result = jnitocxxid->equals(jnitocxxa);
        
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

extern "C" JNIEXPORT void Java_com_examples_inheritance_TerrestrialAnimalImpl_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    static_assert(std::has_virtual_destructor<iegen::example::TerrestrialAnimal>::value, "iegen::example::TerrestrialAnimal type must have virtual destructor");
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (strcmp(iegen_obj_id->type, "iegen::example::TerrestrialAnimal") == 0)
        delete static_cast<iegen::example::TerrestrialAnimal*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::LittleFrog") == 0)
        delete static_cast<iegen::example::LittleFrog*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Frog") == 0)
        delete static_cast<iegen::example::Frog*>(iegen_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
        exit(1);
    }
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_TerrestrialAnimalImpl_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::TerrestrialAnimal* ptr = new iegen::example::TerrestrialAnimal();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::TerrestrialAnimal"), ptr});
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_ITerrestrialAnimalHelper_jTypename(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    iegen::example::TerrestrialAnimal* jnitocxxid = nullptr;
    if (iegen_obj_id_ptr) {
        if (strcmp(iegen_obj_id->type, "iegen::example::TerrestrialAnimal") == 0)
            jnitocxxid = static_cast<iegen::example::TerrestrialAnimal*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::LittleFrog") == 0)
            jnitocxxid = static_cast<iegen::example::LittleFrog*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Frog") == 0)
            jnitocxxid = static_cast<iegen::example::Frog*>(iegen_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
            exit(1);
        }
    }
    
    try {
        const auto& result = jnitocxxid->typeName();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

    jstring result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_AquaticAnimal_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    static_assert(std::has_virtual_destructor<iegen::example::AquaticAnimal>::value, "iegen::example::AquaticAnimal type must have virtual destructor");
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (strcmp(iegen_obj_id->type, "iegen::example::AquaticAnimal") == 0)
        delete static_cast<iegen::example::AquaticAnimal*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::LittleFrog") == 0)
        delete static_cast<iegen::example::LittleFrog*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Frog") == 0)
        delete static_cast<iegen::example::Frog*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Mammals::Dolphin") == 0)
        delete static_cast<iegen::example::Mammals::Dolphin*>(iegen_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
        exit(1);
    }
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_AquaticAnimal_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::AquaticAnimal* ptr = new iegen::example::AquaticAnimal();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::AquaticAnimal"), ptr});
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_AquaticAnimal_jTypename(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    iegen::example::AquaticAnimal* jnitocxxid = nullptr;
    if (iegen_obj_id_ptr) {
        if (strcmp(iegen_obj_id->type, "iegen::example::AquaticAnimal") == 0)
            jnitocxxid = static_cast<iegen::example::AquaticAnimal*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::LittleFrog") == 0)
            jnitocxxid = static_cast<iegen::example::LittleFrog*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Frog") == 0)
            jnitocxxid = static_cast<iegen::example::Frog*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, "iegen::example::Mammals::Dolphin") == 0)
            jnitocxxid = static_cast<iegen::example::Mammals::Dolphin*>(iegen_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
            exit(1);
        }
    }
    
    try {
        const auto& result = jnitocxxid->typeName();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

    jstring result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Frog_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Frog* ptr = new iegen::example::Frog();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Frog"), ptr});
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_Frog_jTypename(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Frog*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->typeName();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

    jstring result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_LittleFrog_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::LittleFrog* ptr = new iegen::example::LittleFrog();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::LittleFrog"), ptr});
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

extern "C" JNIEXPORT void Java_com_examples_inheritance_AnimalUsage_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::example::AnimalUsage*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_AnimalUsage_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::AnimalUsage* ptr = new iegen::example::AnimalUsage();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::AnimalUsage"), ptr});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_AnimalUsage_jConstructor_11(JNIEnv* env, jobject obj, jobjectid little_frog){
    
    auto iegen_obj_little_frog = reinterpret_cast<IEGenCObject*>(little_frog);
    auto iegen_obj_little_frog_ptr = iegen_obj_little_frog ? iegen_obj_little_frog->ptr : nullptr;
    auto& jnitocxxlittle_frog = *static_cast<iegen::example::LittleFrog*>(iegen_obj_little_frog_ptr);
    try {
        iegen::example::AnimalUsage* ptr = new iegen::example::AnimalUsage(jnitocxxlittle_frog);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::AnimalUsage"), ptr});
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_AnimalUsage_jGetanimaltypename(JNIEnv* env, jobject obj, jobjectid animal){
    

    auto iegen_obj_animal = reinterpret_cast<IEGenCObject*>(animal);
    auto iegen_obj_animal_ptr = iegen_obj_animal ? iegen_obj_animal->ptr : nullptr;
    iegen::example::Animal* jnitocxxanimal_ptr = nullptr;
    if (iegen_obj_animal_ptr) {
        if (strcmp(iegen_obj_animal->type, "iegen::example::Animal") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::Animal*>(iegen_obj_animal_ptr);
        else if (strcmp(iegen_obj_animal->type, "iegen::example::LittleFrog") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::LittleFrog*>(iegen_obj_animal_ptr);
        else if (strcmp(iegen_obj_animal->type, "iegen::example::Frog") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::Frog*>(iegen_obj_animal_ptr);
        else if (strcmp(iegen_obj_animal->type, "iegen::example::Mammals::Dolphin") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::Mammals::Dolphin*>(iegen_obj_animal_ptr);
        else if (strcmp(iegen_obj_animal->type, "iegen::example::AquaticAnimal") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::AquaticAnimal*>(iegen_obj_animal_ptr);
        else if (strcmp(iegen_obj_animal->type, "iegen::example::TerrestrialAnimal") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::TerrestrialAnimal*>(iegen_obj_animal_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_animal->type << std::endl;
            exit(1);
        }
    }
    auto& jnitocxxanimal = *jnitocxxanimal_ptr;

    
    try {
        const auto& result = iegen::example::AnimalUsage::getAnimalTypeName(jnitocxxanimal);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

    jstring result {};
    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_AnimalUsage_jGetaquaticanimaltypename(JNIEnv* env, jobject obj, jobjectid animal){
    

    auto iegen_obj_animal = reinterpret_cast<IEGenCObject*>(animal);
    auto iegen_obj_animal_ptr = iegen_obj_animal ? iegen_obj_animal->ptr : nullptr;
    iegen::example::AquaticAnimal* jnitocxxanimal_ptr = nullptr;
    if (iegen_obj_animal_ptr) {
        if (strcmp(iegen_obj_animal->type, "iegen::example::AquaticAnimal") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::AquaticAnimal*>(iegen_obj_animal_ptr);
        else if (strcmp(iegen_obj_animal->type, "iegen::example::LittleFrog") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::LittleFrog*>(iegen_obj_animal_ptr);
        else if (strcmp(iegen_obj_animal->type, "iegen::example::Frog") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::Frog*>(iegen_obj_animal_ptr);
        else if (strcmp(iegen_obj_animal->type, "iegen::example::Mammals::Dolphin") == 0)
            jnitocxxanimal_ptr = static_cast<iegen::example::Mammals::Dolphin*>(iegen_obj_animal_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_animal->type << std::endl;
            exit(1);
        }
    }
    auto& jnitocxxanimal = *jnitocxxanimal_ptr;

    
    try {
        const auto& result = iegen::example::AnimalUsage::getAquaticAnimalTypeName(jnitocxxanimal);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

    jstring result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_AnimalUsage_jGetanimal(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::AnimalUsage*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getAnimal();
        iegen::example::Animal* cxxtojniresult_ptr = const_cast<iegen::example::Animal*>(&result);
        char* type_result = nullptr;
        const char* name_result = typeid(result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::Animal");
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


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_AnimalUsage_jGetaquaticanimal(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::AnimalUsage*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getAquaticAnimal();
        iegen::example::AquaticAnimal* cxxtojniresult_ptr = const_cast<iegen::example::AquaticAnimal*>(&result);
        char* type_result = nullptr;
        const char* name_result = typeid(result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::AquaticAnimal");
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


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_AnimalUsage_jGetfrog(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::AnimalUsage*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getFrog();
        iegen::example::Frog* cxxtojniresult_ptr = const_cast<iegen::example::Frog*>(&result);
        char* type_result = strdup("iegen::example::Frog");
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


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_AnimalUsage_jGetlittlefrog(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::AnimalUsage*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getLittleFrog();
        iegen::example::Frog* cxxtojniresult_ptr = const_cast<iegen::example::Frog*>(&result);
        char* type_result = strdup("iegen::example::Frog");
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

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_AnimalKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}
