#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/hello_user.hpp"


extern "C" JNIEXPORT void Java_com_hello_1user_hello_UserInfo_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_hello_1user_hello_UserInfo_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    UserInfo* this_object = reinterpret_cast<UserInfo*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_hello_1user_hello_UserInfo_jConstructor(JNIEnv* env, jobject obj, jstring user_name, jlong user_age){
    jstring jjni_to_cxx_user_nameStr = (jstring)user_name;
    auto jni_to_cxx_user_name_cstr = env->GetStringUTFChars(jjni_to_cxx_user_nameStr, 0);
    const std::string & jni_to_cxx_user_name = jni_to_cxx_user_name_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_user_nameStr, jni_to_cxx_user_name_cstr);
    
    UserInfo* baseptr = new UserInfo(jni_to_cxx_user_name, user_age);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jlong Java_com_hello_1user_hello_UserInfo_jAge(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    UserInfo* this_object = reinterpret_cast<UserInfo*>(id);
    auto result = this_object->age;
    
    return result;
}

extern "C" JNIEXPORT jstring Java_com_hello_1user_hello_UserInfo_jName(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    UserInfo* this_object = reinterpret_cast<UserInfo*>(id);
    auto result = this_object->name;
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT jboolean Java_com_hello_1user_hello_UserInfo_jWant_1a_1drink(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    UserInfo* this_object = reinterpret_cast<UserInfo*>(id);
    auto result = this_object->want_a_drink;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_hello_1user_hello_UserInfo_jSetwant_1a_1drink(JNIEnv* env, jobject obj, jobjectid id, jboolean value){
    validateID(id);
    UserInfo* this_object = reinterpret_cast<UserInfo*>(id);
    
    
    this_object->want_a_drink = value;
}


extern "C" JNIEXPORT void Java_com_hello_1user_hello_Host_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_hello_1user_hello_Host_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    Host* this_object = reinterpret_cast<Host*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_hello_1user_hello_Host_jConstructor(JNIEnv* env, jobject obj){
    Host* baseptr = new Host();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jstring Java_com_hello_1user_hello_Host_jHello(JNIEnv* env, jobject obj, jobjectid id, jobjectid user){
    

    auto& jni_to_cxx_user = * reinterpret_cast<UserInfo*>(user);

    validateID(id);
    Host* this_object = reinterpret_cast<Host*>(id);
    
    auto result = this_object->hello(jni_to_cxx_user);
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jstring Java_com_hello_1user_hello_Host_jWelcome(JNIEnv* env, jobject obj, jobjectid id, jobjectid user){
    

    auto& jni_to_cxx_user = * reinterpret_cast<UserInfo*>(user);

    validateID(id);
    Host* this_object = reinterpret_cast<Host*>(id);
    
    auto result = this_object->welcome(jni_to_cxx_user);
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}