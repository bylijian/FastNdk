//
// Created by 李 健 on 2019/4/15.
//

#include "jni_binder.h"
#include "jni_log.h"
void JniBinder::addMethods( char * className,JNINativeMethod* method,int nativemnum) {
   JniBinderData temp;
   temp.m_classname.assign(className);
   temp.m_nativem=method;
   temp.m_nnum=nativemnum;
   dataList[dataIndex]=temp;
   dataIndex++;
}

void JniBinder::registerAll(JNIEnv *env) {
    if (env != nullptr) {
        LOGD("registerAll");
        for (int i = 0; i < dataIndex; ++i) {
            JniBinderData data = dataList[dataIndex];
            jclass jclass = env->FindClass(data.m_classname.c_str());
        }
    }
}