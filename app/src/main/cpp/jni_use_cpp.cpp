//
// Created by 李 健 on 2019/4/15.
//

#include "jni_use_cpp.h"


void Test::test1(JNIEnv *env, jobject thiz) {
    LOGD("test1");
}

void Test::test2(JNIEnv *env, jobject thiz, jstring msg) {
    LOGD("test2");
}

void Test::test1(JNIEnv *env, jobject thiz) {

}
