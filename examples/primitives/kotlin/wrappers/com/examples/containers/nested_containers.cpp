/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/28/2021-14:03.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/containers/nested_containers.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    delete jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_containers_NestedExamples_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::NestedExamples* baseptr = new iegen::example::NestedExamples();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetnestedintvector(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::vector<int> > jni_to_cxx_v;
    auto _jni_to_cxx_v = iegen::getObjectArray(env, v);
    for (auto& value__jni_to_cxx_v : _jni_to_cxx_v) {
        
        std::vector<int> jni_to_cxx_value__jni_to_cxx_v;
        auto _jni_to_cxx_value__jni_to_cxx_v = iegen::getIntArray(env, value__jni_to_cxx_v);
        for (auto& value__jni_to_cxx_value__jni_to_cxx_v : _jni_to_cxx_value__jni_to_cxx_v) {
            
            jni_to_cxx_value__jni_to_cxx_v.emplace_back(value__jni_to_cxx_value__jni_to_cxx_v);
        }
        jni_to_cxx_v.emplace_back(jni_to_cxx_value__jni_to_cxx_v);
    }

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        jni_to_cxx_id->setNestedIntVector(jni_to_cxx_v);
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


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_NestedExamples_jGetnestedintvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        const auto& result = jni_to_cxx_id->getNestedIntVector();
        
        jobjectArray cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            jintArray cxx_to_jni_value_result = env->NewIntArray(value_result.size());
            size_t index_value_result = 0;
            for (auto& value_value_result : value_result) {
                
                env->SetIntArrayRegion(cxx_to_jni_value_result, index_value_result, 1, &value_value_result);
                ++index_value_result ;
            }
            env->SetObjectArrayElement(cxx_to_jni_result, index_result, cxx_to_jni_value_result);
            ++index_result ;
        }
        return cxx_to_jni_result;
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

    jobjectArray result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetnestedintmap(JNIEnv* env, jobject obj, jobjectid id, jmapobject m){
    

    std::map<int, std::map<int, int> > jni_to_cxx_m;
    auto _jni_to_cxx_m = iegen::extract_jni_pair(env, m);
    auto tmp_key_jni_to_cxx_m = iegen::getIntArray(env, _jni_to_cxx_m.first);
    auto tmp_val_jni_to_cxx_m = iegen::getObjectArray(env, _jni_to_cxx_m.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_m.size(); ++i) {
        auto ktmp_m = tmp_key_jni_to_cxx_m[i];
        auto vtmp_m = tmp_val_jni_to_cxx_m[i];
        
        
        std::map<int, int> jni_to_cxx_vtmp_m;
        auto _jni_to_cxx_vtmp_m = iegen::extract_jni_pair(env, vtmp_m);
        auto tmp_key_jni_to_cxx_vtmp_m = iegen::getIntArray(env, _jni_to_cxx_vtmp_m.first);
        auto tmp_val_jni_to_cxx_vtmp_m = iegen::getIntArray(env, _jni_to_cxx_vtmp_m.second);
        for (size_t i = 0; i < tmp_key_jni_to_cxx_vtmp_m.size(); ++i) {
            auto ktmp_vtmp_m = tmp_key_jni_to_cxx_vtmp_m[i];
            auto vtmp_vtmp_m = tmp_val_jni_to_cxx_vtmp_m[i];
            
            
            jni_to_cxx_vtmp_m.insert({ ktmp_vtmp_m, vtmp_vtmp_m });
        }
        jni_to_cxx_m.insert({ ktmp_m, jni_to_cxx_vtmp_m });
    }

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        jni_to_cxx_id->setNestedIntMap(jni_to_cxx_m);
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


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_NestedExamples_jGetnestedintmap(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        const auto& result = jni_to_cxx_id->getNestedIntMap();
        
        auto tmp_key_cxx_to_jni_result = env->NewIntArray(result.size());
        jobjectArray tmp_val_cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            
            env->SetIntArrayRegion(tmp_key_cxx_to_jni_result, index_result, 1, &key_result);
            
            auto tmp_key_cxx_to_jni_val_result = env->NewIntArray(val_result.size());
            auto tmp_val_cxx_to_jni_val_result = env->NewIntArray(val_result.size());
            size_t index_val_result  = 0;
            for (auto& value_val_result : val_result) {
                auto key_val_result = value_val_result.first;
                auto val_val_result = value_val_result.second;
                
                env->SetIntArrayRegion(tmp_key_cxx_to_jni_val_result, index_val_result, 1, &key_val_result);
                
                env->SetIntArrayRegion(tmp_val_cxx_to_jni_val_result, index_val_result, 1, &val_val_result);
                ++index_val_result;
            }
            jmapobject cxx_to_jni_val_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_val_result, tmp_val_cxx_to_jni_val_result);
            env->SetObjectArrayElement(tmp_val_cxx_to_jni_result, index_result, cxx_to_jni_val_result);
            ++index_result;
        }
        jmapobject cxx_to_jni_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_result, tmp_val_cxx_to_jni_result);
        return cxx_to_jni_result;
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

    jmapobject result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jMixedexamplewithmanyargs(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v1, jobjectArray v2, jmapobject m1, jmapobject m2){
    

    std::vector<std::vector<int> > jni_to_cxx_v1;
    auto _jni_to_cxx_v1 = iegen::getObjectArray(env, v1);
    for (auto& value__jni_to_cxx_v1 : _jni_to_cxx_v1) {
        
        std::vector<int> jni_to_cxx_value__jni_to_cxx_v1;
        auto _jni_to_cxx_value__jni_to_cxx_v1 = iegen::getIntArray(env, value__jni_to_cxx_v1);
        for (auto& value__jni_to_cxx_value__jni_to_cxx_v1 : _jni_to_cxx_value__jni_to_cxx_v1) {
            
            jni_to_cxx_value__jni_to_cxx_v1.emplace_back(value__jni_to_cxx_value__jni_to_cxx_v1);
        }
        jni_to_cxx_v1.emplace_back(jni_to_cxx_value__jni_to_cxx_v1);
    }


    std::vector<std::vector<int> > jni_to_cxx_v2;
    auto _jni_to_cxx_v2 = iegen::getObjectArray(env, v2);
    for (auto& value__jni_to_cxx_v2 : _jni_to_cxx_v2) {
        
        std::vector<int> jni_to_cxx_value__jni_to_cxx_v2;
        auto _jni_to_cxx_value__jni_to_cxx_v2 = iegen::getIntArray(env, value__jni_to_cxx_v2);
        for (auto& value__jni_to_cxx_value__jni_to_cxx_v2 : _jni_to_cxx_value__jni_to_cxx_v2) {
            
            jni_to_cxx_value__jni_to_cxx_v2.emplace_back(value__jni_to_cxx_value__jni_to_cxx_v2);
        }
        jni_to_cxx_v2.emplace_back(jni_to_cxx_value__jni_to_cxx_v2);
    }


    std::map<int, std::map<int, int> > jni_to_cxx_m1;
    auto _jni_to_cxx_m1 = iegen::extract_jni_pair(env, m1);
    auto tmp_key_jni_to_cxx_m1 = iegen::getIntArray(env, _jni_to_cxx_m1.first);
    auto tmp_val_jni_to_cxx_m1 = iegen::getObjectArray(env, _jni_to_cxx_m1.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_m1.size(); ++i) {
        auto ktmp_m1 = tmp_key_jni_to_cxx_m1[i];
        auto vtmp_m1 = tmp_val_jni_to_cxx_m1[i];
        
        
        std::map<int, int> jni_to_cxx_vtmp_m1;
        auto _jni_to_cxx_vtmp_m1 = iegen::extract_jni_pair(env, vtmp_m1);
        auto tmp_key_jni_to_cxx_vtmp_m1 = iegen::getIntArray(env, _jni_to_cxx_vtmp_m1.first);
        auto tmp_val_jni_to_cxx_vtmp_m1 = iegen::getIntArray(env, _jni_to_cxx_vtmp_m1.second);
        for (size_t i = 0; i < tmp_key_jni_to_cxx_vtmp_m1.size(); ++i) {
            auto ktmp_vtmp_m1 = tmp_key_jni_to_cxx_vtmp_m1[i];
            auto vtmp_vtmp_m1 = tmp_val_jni_to_cxx_vtmp_m1[i];
            
            
            jni_to_cxx_vtmp_m1.insert({ ktmp_vtmp_m1, vtmp_vtmp_m1 });
        }
        jni_to_cxx_m1.insert({ ktmp_m1, jni_to_cxx_vtmp_m1 });
    }


    std::map<int, std::map<int, int> > jni_to_cxx_m2;
    auto _jni_to_cxx_m2 = iegen::extract_jni_pair(env, m2);
    auto tmp_key_jni_to_cxx_m2 = iegen::getIntArray(env, _jni_to_cxx_m2.first);
    auto tmp_val_jni_to_cxx_m2 = iegen::getObjectArray(env, _jni_to_cxx_m2.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_m2.size(); ++i) {
        auto ktmp_m2 = tmp_key_jni_to_cxx_m2[i];
        auto vtmp_m2 = tmp_val_jni_to_cxx_m2[i];
        
        
        std::map<int, int> jni_to_cxx_vtmp_m2;
        auto _jni_to_cxx_vtmp_m2 = iegen::extract_jni_pair(env, vtmp_m2);
        auto tmp_key_jni_to_cxx_vtmp_m2 = iegen::getIntArray(env, _jni_to_cxx_vtmp_m2.first);
        auto tmp_val_jni_to_cxx_vtmp_m2 = iegen::getIntArray(env, _jni_to_cxx_vtmp_m2.second);
        for (size_t i = 0; i < tmp_key_jni_to_cxx_vtmp_m2.size(); ++i) {
            auto ktmp_vtmp_m2 = tmp_key_jni_to_cxx_vtmp_m2[i];
            auto vtmp_vtmp_m2 = tmp_val_jni_to_cxx_vtmp_m2[i];
            
            
            jni_to_cxx_vtmp_m2.insert({ ktmp_vtmp_m2, vtmp_vtmp_m2 });
        }
        jni_to_cxx_m2.insert({ ktmp_m2, jni_to_cxx_vtmp_m2 });
    }

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        jni_to_cxx_id->mixedExampleWithManyArgs(jni_to_cxx_v1, jni_to_cxx_v2, jni_to_cxx_m1, jni_to_cxx_m2);
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


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetvectorofintmaps(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::map<int, int> > jni_to_cxx_v;
    auto _jni_to_cxx_v = iegen::getObjectArray(env, v);
    for (auto& value__jni_to_cxx_v : _jni_to_cxx_v) {
        
        std::map<int, int> jni_to_cxx_value__jni_to_cxx_v;
        auto _jni_to_cxx_value__jni_to_cxx_v = iegen::extract_jni_pair(env, value__jni_to_cxx_v);
        auto tmp_key_jni_to_cxx_value__jni_to_cxx_v = iegen::getIntArray(env, _jni_to_cxx_value__jni_to_cxx_v.first);
        auto tmp_val_jni_to_cxx_value__jni_to_cxx_v = iegen::getIntArray(env, _jni_to_cxx_value__jni_to_cxx_v.second);
        for (size_t i = 0; i < tmp_key_jni_to_cxx_value__jni_to_cxx_v.size(); ++i) {
            auto ktmp_value__jni_to_cxx_v = tmp_key_jni_to_cxx_value__jni_to_cxx_v[i];
            auto vtmp_value__jni_to_cxx_v = tmp_val_jni_to_cxx_value__jni_to_cxx_v[i];
            
            
            jni_to_cxx_value__jni_to_cxx_v.insert({ ktmp_value__jni_to_cxx_v, vtmp_value__jni_to_cxx_v });
        }
        jni_to_cxx_v.emplace_back(jni_to_cxx_value__jni_to_cxx_v);
    }

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        jni_to_cxx_id->setVectorOfIntMaps(jni_to_cxx_v);
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


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_NestedExamples_jGetvectorofintmaps(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        const auto& result = jni_to_cxx_id->getVectorOfIntMaps();
        
        jobjectArray cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            auto tmp_key_cxx_to_jni_value_result = env->NewIntArray(value_result.size());
            auto tmp_val_cxx_to_jni_value_result = env->NewIntArray(value_result.size());
            size_t index_value_result  = 0;
            for (auto& value_value_result : value_result) {
                auto key_value_result = value_value_result.first;
                auto val_value_result = value_value_result.second;
                
                env->SetIntArrayRegion(tmp_key_cxx_to_jni_value_result, index_value_result, 1, &key_value_result);
                
                env->SetIntArrayRegion(tmp_val_cxx_to_jni_value_result, index_value_result, 1, &val_value_result);
                ++index_value_result;
            }
            jmapobject cxx_to_jni_value_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_value_result, tmp_val_cxx_to_jni_value_result);
            env->SetObjectArrayElement(cxx_to_jni_result, index_result, cxx_to_jni_value_result);
            ++index_result ;
        }
        return cxx_to_jni_result;
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

    jobjectArray result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetmapofintvectors(JNIEnv* env, jobject obj, jobjectid id, jmapobject m){
    

    std::map<int, std::vector<int> > jni_to_cxx_m;
    auto _jni_to_cxx_m = iegen::extract_jni_pair(env, m);
    auto tmp_key_jni_to_cxx_m = iegen::getIntArray(env, _jni_to_cxx_m.first);
    auto tmp_val_jni_to_cxx_m = iegen::getObjectArray(env, _jni_to_cxx_m.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_m.size(); ++i) {
        auto ktmp_m = tmp_key_jni_to_cxx_m[i];
        auto vtmp_m = tmp_val_jni_to_cxx_m[i];
        
        
        std::vector<int> jni_to_cxx_vtmp_m;
        auto _jni_to_cxx_vtmp_m = iegen::getIntArray(env, vtmp_m);
        for (auto& value__jni_to_cxx_vtmp_m : _jni_to_cxx_vtmp_m) {
            
            jni_to_cxx_vtmp_m.emplace_back(value__jni_to_cxx_vtmp_m);
        }
        jni_to_cxx_m.insert({ ktmp_m, jni_to_cxx_vtmp_m });
    }

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        jni_to_cxx_id->setMapOfIntVectors(jni_to_cxx_m);
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


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_NestedExamples_jGetmapofintvectors(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        const auto& result = jni_to_cxx_id->getMapOfIntVectors();
        
        auto tmp_key_cxx_to_jni_result = env->NewIntArray(result.size());
        jobjectArray tmp_val_cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            
            env->SetIntArrayRegion(tmp_key_cxx_to_jni_result, index_result, 1, &key_result);
            
            jintArray cxx_to_jni_val_result = env->NewIntArray(val_result.size());
            size_t index_val_result = 0;
            for (auto& value_val_result : val_result) {
                
                env->SetIntArrayRegion(cxx_to_jni_val_result, index_val_result, 1, &value_val_result);
                ++index_val_result ;
            }
            env->SetObjectArrayElement(tmp_val_cxx_to_jni_result, index_result, cxx_to_jni_val_result);
            ++index_result;
        }
        jmapobject cxx_to_jni_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_result, tmp_val_cxx_to_jni_result);
        return cxx_to_jni_result;
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

    jmapobject result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetcomplexstringvector(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::vector<std::vector<std::string> > > jni_to_cxx_v;
    auto _jni_to_cxx_v = iegen::getObjectArray(env, v);
    for (auto& value__jni_to_cxx_v : _jni_to_cxx_v) {
        
        std::vector<std::vector<std::string> > jni_to_cxx_value__jni_to_cxx_v;
        auto _jni_to_cxx_value__jni_to_cxx_v = iegen::getObjectArray(env, value__jni_to_cxx_v);
        for (auto& value__jni_to_cxx_value__jni_to_cxx_v : _jni_to_cxx_value__jni_to_cxx_v) {
            
            std::vector<std::string> jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v;
            auto _jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v = iegen::getObjectArray(env, value__jni_to_cxx_value__jni_to_cxx_v);
            for (auto& value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v : _jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v) {
                jstring jjni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_vStr = (jstring)value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v;
                auto jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v_cstr = env->GetStringUTFChars(jjni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_vStr, 0);
                std::string jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v = jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v_cstr;
                env->ReleaseStringUTFChars(jjni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_vStr, jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v_cstr);
                jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v.emplace_back(jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v);
            }
            jni_to_cxx_value__jni_to_cxx_v.emplace_back(jni_to_cxx_value__jni_to_cxx_value__jni_to_cxx_v);
        }
        jni_to_cxx_v.emplace_back(jni_to_cxx_value__jni_to_cxx_v);
    }

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        jni_to_cxx_id->setComplexStringVector(jni_to_cxx_v);
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


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_NestedExamples_jGetcomplexstringvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        const auto& result = jni_to_cxx_id->getComplexStringVector();
        
        jobjectArray cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            jobjectArray cxx_to_jni_value_result = env->NewObjectArray(value_result.size(), env->FindClass("java/lang/Object"), NULL);
            size_t index_value_result = 0;
            for (auto& value_value_result : value_result) {
                
                jobjectArray cxx_to_jni_value_value_result = env->NewObjectArray(value_value_result.size(), env->FindClass("java/lang/Object"), NULL);
                size_t index_value_value_result = 0;
                for (auto& value_value_value_result : value_value_result) {
                    jstring cxx_to_jni_value_value_value_result = env->NewStringUTF(value_value_value_result.data());
                    env->SetObjectArrayElement(cxx_to_jni_value_value_result, index_value_value_result, cxx_to_jni_value_value_value_result);
                    ++index_value_value_result ;
                }
                env->SetObjectArrayElement(cxx_to_jni_value_result, index_value_result, cxx_to_jni_value_value_result);
                ++index_value_result ;
            }
            env->SetObjectArrayElement(cxx_to_jni_result, index_result, cxx_to_jni_value_result);
            ++index_result ;
        }
        return cxx_to_jni_result;
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

    jobjectArray result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetcomplexstringmap(JNIEnv* env, jobject obj, jobjectid id, jmapobject m){
    

    std::map<std::string, std::map<std::string, std::map<std::string, std::string> > > jni_to_cxx_m;
    auto _jni_to_cxx_m = iegen::extract_jni_pair(env, m);
    auto tmp_key_jni_to_cxx_m = iegen::getObjectArray(env, _jni_to_cxx_m.first);
    auto tmp_val_jni_to_cxx_m = iegen::getObjectArray(env, _jni_to_cxx_m.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_m.size(); ++i) {
        auto ktmp_m = tmp_key_jni_to_cxx_m[i];
        auto vtmp_m = tmp_val_jni_to_cxx_m[i];
        jstring jjni_to_cxx_ktmp_mStr = (jstring)ktmp_m;
        auto jni_to_cxx_ktmp_m_cstr = env->GetStringUTFChars(jjni_to_cxx_ktmp_mStr, 0);
        std::string jni_to_cxx_ktmp_m = jni_to_cxx_ktmp_m_cstr;
        env->ReleaseStringUTFChars(jjni_to_cxx_ktmp_mStr, jni_to_cxx_ktmp_m_cstr);
        
        std::map<std::string, std::map<std::string, std::string> > jni_to_cxx_vtmp_m;
        auto _jni_to_cxx_vtmp_m = iegen::extract_jni_pair(env, vtmp_m);
        auto tmp_key_jni_to_cxx_vtmp_m = iegen::getObjectArray(env, _jni_to_cxx_vtmp_m.first);
        auto tmp_val_jni_to_cxx_vtmp_m = iegen::getObjectArray(env, _jni_to_cxx_vtmp_m.second);
        for (size_t i = 0; i < tmp_key_jni_to_cxx_vtmp_m.size(); ++i) {
            auto ktmp_vtmp_m = tmp_key_jni_to_cxx_vtmp_m[i];
            auto vtmp_vtmp_m = tmp_val_jni_to_cxx_vtmp_m[i];
            jstring jjni_to_cxx_ktmp_vtmp_mStr = (jstring)ktmp_vtmp_m;
            auto jni_to_cxx_ktmp_vtmp_m_cstr = env->GetStringUTFChars(jjni_to_cxx_ktmp_vtmp_mStr, 0);
            std::string jni_to_cxx_ktmp_vtmp_m = jni_to_cxx_ktmp_vtmp_m_cstr;
            env->ReleaseStringUTFChars(jjni_to_cxx_ktmp_vtmp_mStr, jni_to_cxx_ktmp_vtmp_m_cstr);
            
            std::map<std::string, std::string> jni_to_cxx_vtmp_vtmp_m;
            auto _jni_to_cxx_vtmp_vtmp_m = iegen::extract_jni_pair(env, vtmp_vtmp_m);
            auto tmp_key_jni_to_cxx_vtmp_vtmp_m = iegen::getObjectArray(env, _jni_to_cxx_vtmp_vtmp_m.first);
            auto tmp_val_jni_to_cxx_vtmp_vtmp_m = iegen::getObjectArray(env, _jni_to_cxx_vtmp_vtmp_m.second);
            for (size_t i = 0; i < tmp_key_jni_to_cxx_vtmp_vtmp_m.size(); ++i) {
                auto ktmp_vtmp_vtmp_m = tmp_key_jni_to_cxx_vtmp_vtmp_m[i];
                auto vtmp_vtmp_vtmp_m = tmp_val_jni_to_cxx_vtmp_vtmp_m[i];
                jstring jjni_to_cxx_ktmp_vtmp_vtmp_mStr = (jstring)ktmp_vtmp_vtmp_m;
                auto jni_to_cxx_ktmp_vtmp_vtmp_m_cstr = env->GetStringUTFChars(jjni_to_cxx_ktmp_vtmp_vtmp_mStr, 0);
                std::string jni_to_cxx_ktmp_vtmp_vtmp_m = jni_to_cxx_ktmp_vtmp_vtmp_m_cstr;
                env->ReleaseStringUTFChars(jjni_to_cxx_ktmp_vtmp_vtmp_mStr, jni_to_cxx_ktmp_vtmp_vtmp_m_cstr);
                jstring jjni_to_cxx_vtmp_vtmp_vtmp_mStr = (jstring)vtmp_vtmp_vtmp_m;
                auto jni_to_cxx_vtmp_vtmp_vtmp_m_cstr = env->GetStringUTFChars(jjni_to_cxx_vtmp_vtmp_vtmp_mStr, 0);
                std::string jni_to_cxx_vtmp_vtmp_vtmp_m = jni_to_cxx_vtmp_vtmp_vtmp_m_cstr;
                env->ReleaseStringUTFChars(jjni_to_cxx_vtmp_vtmp_vtmp_mStr, jni_to_cxx_vtmp_vtmp_vtmp_m_cstr);
                jni_to_cxx_vtmp_vtmp_m.insert({ jni_to_cxx_ktmp_vtmp_vtmp_m, jni_to_cxx_vtmp_vtmp_vtmp_m });
            }
            jni_to_cxx_vtmp_m.insert({ jni_to_cxx_ktmp_vtmp_m, jni_to_cxx_vtmp_vtmp_m });
        }
        jni_to_cxx_m.insert({ jni_to_cxx_ktmp_m, jni_to_cxx_vtmp_m });
    }

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        jni_to_cxx_id->setComplexStringMap(jni_to_cxx_m);
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


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_NestedExamples_jGetcomplexstringmap(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
        const auto& result = jni_to_cxx_id->getComplexStringMap();
        
        jobjectArray tmp_key_cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        jobjectArray tmp_val_cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            jstring cxx_to_jni_key_result = env->NewStringUTF(key_result.data());
            env->SetObjectArrayElement(tmp_key_cxx_to_jni_result, index_result, cxx_to_jni_key_result);
            
            jobjectArray tmp_key_cxx_to_jni_val_result = env->NewObjectArray(val_result.size(), env->FindClass("java/lang/Object"), NULL);
            jobjectArray tmp_val_cxx_to_jni_val_result = env->NewObjectArray(val_result.size(), env->FindClass("java/lang/Object"), NULL);
            size_t index_val_result  = 0;
            for (auto& value_val_result : val_result) {
                auto key_val_result = value_val_result.first;
                auto val_val_result = value_val_result.second;
                jstring cxx_to_jni_key_val_result = env->NewStringUTF(key_val_result.data());
                env->SetObjectArrayElement(tmp_key_cxx_to_jni_val_result, index_val_result, cxx_to_jni_key_val_result);
                
                jobjectArray tmp_key_cxx_to_jni_val_val_result = env->NewObjectArray(val_val_result.size(), env->FindClass("java/lang/Object"), NULL);
                jobjectArray tmp_val_cxx_to_jni_val_val_result = env->NewObjectArray(val_val_result.size(), env->FindClass("java/lang/Object"), NULL);
                size_t index_val_val_result  = 0;
                for (auto& value_val_val_result : val_val_result) {
                    auto key_val_val_result = value_val_val_result.first;
                    auto val_val_val_result = value_val_val_result.second;
                    jstring cxx_to_jni_key_val_val_result = env->NewStringUTF(key_val_val_result.data());
                    env->SetObjectArrayElement(tmp_key_cxx_to_jni_val_val_result, index_val_val_result, cxx_to_jni_key_val_val_result);
                    jstring cxx_to_jni_val_val_val_result = env->NewStringUTF(val_val_val_result.data());
                    env->SetObjectArrayElement(tmp_val_cxx_to_jni_val_val_result, index_val_val_result, cxx_to_jni_val_val_val_result);
                    ++index_val_val_result;
                }
                jmapobject cxx_to_jni_val_val_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_val_val_result, tmp_val_cxx_to_jni_val_val_result);
                env->SetObjectArrayElement(tmp_val_cxx_to_jni_val_result, index_val_result, cxx_to_jni_val_val_result);
                ++index_val_result;
            }
            jmapobject cxx_to_jni_val_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_val_result, tmp_val_cxx_to_jni_val_result);
            env->SetObjectArrayElement(tmp_val_cxx_to_jni_result, index_result, cxx_to_jni_val_result);
            ++index_result;
        }
        jmapobject cxx_to_jni_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_result, tmp_val_cxx_to_jni_result);
        return cxx_to_jni_result;
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

    jmapobject result;
    return result;
}