//
// Created by 李 健 on 2019/4/15.
//

#ifndef FASTNDK_JNI_BINDER_H
#define FASTNDK_JNI_BINDER_H

#include <jni.h>
#include <string>

#define ARRAYSIZE(instance)                                     \
    static_cast<int>(sizeof(instance) / sizeof(instance[0]))

struct JniBinderData {
    std::string m_classname;
    JNINativeMethod *m_nativem;
    int m_nnum;

    ~JniBinderData() {

    }
};

class JniBinder {

private:
    JniBinderData dataList[100] = {0};
    int dataIndex = 0;

public:

    void addMethods(char *className, JNINativeMethod *method, int nativemnum);


    void registerAll(JNIEnv *env);

};


#endif //FASTNDK_JNI_BINDER_H
