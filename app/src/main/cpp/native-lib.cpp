#include <jni.h>
#include <string>
#include "helper/jni_log.h"
#include "helper/jni_onload.h"
#include "jni_use_cpp.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_bylijian_fastndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    LOGD("hello from c++");
    return env->NewStringUTF(hello.c_str());
}
