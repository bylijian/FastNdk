//
// Created by 李 健 on 2019/4/15.
//

#ifndef FASTNDK_JNI_HELPER_H
#define FASTNDK_JNI_HELPER_H

#include <jni.h>

#define JNI_REGISTERNATIVE_DECLAR static CRegisterNativeM s_registernm;

#define JNI_NATIVEMETHOD_BEGIN static JNINativeMethod ls_nm[] =
#define JNI_NATIVEMETHOD_END ;

#define JNI_REGISTERNATIVE_IMPLEMENT(clsname, javaclsname) CRegisterNativeM clsname::s_registernm(javaclsname, ls_nm, ARRAYSIZE(ls_nm));

#endif //FASTNDK_JNI_HELPER_H
