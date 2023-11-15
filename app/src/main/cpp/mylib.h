//
// Created by youyi on 2023/11/15.
//
#include </home/youyi/Android/Sdk/ndk/25.1.8937393/toolchains/llvm/prebuilt/linux-x86_64/sysroot/usr/include/jni.h>
#ifndef TESTSO_MYLIB_H
#define TESTSO_MYLIB_H
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Luaso
 * Method:    add
 * Signature: ()V
 */
extern "C" JNIEXPORT void JNICALL Java_Mylib_add
(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
