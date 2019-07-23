//
// Created by 李 健 on 2019/4/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "jni_onload.h"
#include "jni_use_cpp.h"
#include "jni_log.h"

#include <jni.h>
#include "helper/jni_log.h"
#include "jni_binder.h"

static jclass g_java_capturer_class = NULL; // VideoCaptureAndroid.class.

int on_JNI_OnLoad(JavaVM *vm, int jniversion) {
    // Only called once.
    LOGD("on_JNI_OnLoad");
    JNIEnv *env = NULL;
    if (vm == NULL || JNI_OK != vm->GetEnv((void **) &env, jniversion)) {
        return -1;
    }
    std::string classname = "com/bylijian/fastndk/MainActivity";
    jclass jclass1 = env->FindClass(classname.c_str());

    g_java_capturer_class = reinterpret_cast<jclass>(env->NewGlobalRef(jclass1));
    JNINativeMethod jniNativeMethod[] = {
            {"test1", "()V", reinterpret_cast<void *>(&Test::test1)}
            ,
            {"test2", "(Ljava/lang/String;)V", reinterpret_cast<void *>(&Test::test2)}
    };
    env->RegisterNatives(g_java_capturer_class, jniNativeMethod, ARRAYSIZE(jniNativeMethod));
    LOGD("on_JNI_OnLoad end");
    return 0;
}


JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env = NULL;
    LOGD("JNI_OnLoad");
    on_JNI_OnLoad(vm, JNI_VERSION_1_6);
    return JNI_VERSION_1_6;
}
