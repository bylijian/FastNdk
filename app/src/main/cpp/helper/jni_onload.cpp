//
// Created by 李 健 on 2019/4/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "jni_onload.h"
#include "../jni_use_cpp.h"
#include "jni_log.h"

#include <jni.h>
#include "helper/jni_log.h"


int on_JNI_OnLoad(JavaVM *vm, int jniversion) {
    // Only called once.
    LOGD("on_JNI_OnLoad");
    JNIEnv *env = NULL;
    if (vm == NULL || JNI_OK != vm->GetEnv((void **) &env, jniversion)) {
        return -1;
    }

    Test test;
    test.jni_use_cpp(env, NULL);

    return 0;
}


JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env = NULL;
    LOGD("on_JNI_OnLoad success11");
    on_JNI_OnLoad(vm, JNI_VERSION_1_6);
    return JNI_VERSION_1_6;
}
