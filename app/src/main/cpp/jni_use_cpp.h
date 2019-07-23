//
// Created by 李 健 on 2019/4/12.
//

#ifndef FASTNDK_JNI_USER_H
#define FASTNDK_JNI_USER_H

#include <jni.h>
#include <string>
#include "jni_log.h"

class Test {
private:


public:

    static void test1(JNIEnv *env, jobject thiz) {
        LOGD("test1");
    }

    static void test2(JNIEnv *env, jobject thiz, jstring msg) {
        LOGD("test2");
    }
};

#endif //FASTNDK_JNI_USER_H
