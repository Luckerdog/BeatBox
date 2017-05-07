#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_cit65_luckerdog_android_beatbox_BeatBoxActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
