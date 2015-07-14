#include <jni.h>
#include <com_example_alfredo_myapplication_MainActivity.h>


jstring JNICALL Java_com_example_alfredo_myapplication_MainActivity_getStringFromJNI(JNIEnv *env, jobject obj){
return(*env)->NewStringUTF(env,"Hello from NDK!");
}