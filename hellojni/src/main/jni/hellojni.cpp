#include "jni.h"

extern "C" {

  JNIEXPORT jstring JNICALL Java_rharriso_hellojni_hellojni_getMyName(JNIEnv *env, jobject obj)
  {
    char name[60] = "Ross Fucking Harrison";
    return env->NewStringUTF(name);
  }

}
