//
// Created by 李 健 on 2019/4/12.
//

#ifndef FASTNDK_JNI_USER_H
#define FASTNDK_JNI_USER_H

#include <jni.h>
#include <string>
#include "helper/jni_log.h"

class Test {
protected:

public:
    jstring jni_use_cpp(JNIEnv *env, jobject thiz) {
        LOGD("jni_use_cpp");
        std::string hello = "Hello from C++";
        return env->NewStringUTF(hello.c_str());
    }
};

#endif //FASTNDK_JNI_USER_H
