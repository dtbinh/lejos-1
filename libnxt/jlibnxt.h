/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class lejos_pc_comm_NXTCommLibnxt */

#ifndef _Included_lejos_pc_comm_NXTCommLibnxt
#define _Included_lejos_pc_comm_NXTCommLibnxt
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     lejos_pc_comm_NXTCommLibnxt
 * Method:    jlibnxt_find
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_lejos_pc_comm_NXTCommLibnxt_jlibnxt_1find
  (JNIEnv *, jobject);

/*
 * Class:     lejos_pc_comm_NXTCommLibnxt
 * Method:    jlibnxt_open
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_lejos_pc_comm_NXTCommLibnxt_jlibnxt_1open
  (JNIEnv *, jobject, jint);

/*
 * Class:     lejos_pc_comm_NXTCommLibnxt
 * Method:    jlibnxt_close
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_lejos_pc_comm_NXTCommLibnxt_jlibnxt_1close
  (JNIEnv *, jobject, jint);

/*
 * Class:     lejos_pc_comm_NXTCommLibnxt
 * Method:    jlibnxt_send_data
 * Signature: ([B[B)V
 */
JNIEXPORT void JNICALL Java_lejos_pc_comm_NXTCommLibnxt_jlibnxt_1send_1data
  (JNIEnv *, jobject, jint, jbyteArray);

/*
 * Class:     lejos_pc_comm_NXTCommLibnxt
 * Method:    jlibnxt_read_data
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_lejos_pc_comm_NXTCommLibnxt_jlibnxt_1read_1data
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
