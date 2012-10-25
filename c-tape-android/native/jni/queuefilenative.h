/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_squareup_tape_QueueFileNative */

#ifndef _Included_com_squareup_tape_QueueFileNative
#define _Included_com_squareup_tape_QueueFileNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    nativeNew
 * Signature: (Ljava/lang/String;)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_squareup_tape_QueueFileNative_nativeNew
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    getFileLength
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_squareup_tape_QueueFileNative_getFileLength
  (JNIEnv *, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    addUnchecked
 * Signature: ([BII)V
 */
JNIEXPORT void JNICALL Java_com_squareup_tape_QueueFileNative_addUnchecked
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    isEmpty
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_squareup_tape_QueueFileNative_isEmpty
  (JNIEnv *, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    peek
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_squareup_tape_QueueFileNative_peek
  (JNIEnv *, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    nativePeekWithReader
 * Signature: (Lcom/squareup/tape/QueueFileNative/NativeCallback;)V
 */
JNIEXPORT void JNICALL Java_com_squareup_tape_QueueFileNative_nativePeekWithReader
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    forEach
 * Signature: (Lcom/squareup/tape/QueueFile/ElementReader;)V
 */
JNIEXPORT void JNICALL Java_com_squareup_tape_QueueFileNative_forEach
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    size
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_squareup_tape_QueueFileNative_size
  (JNIEnv *, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    remove
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_squareup_tape_QueueFileNative_remove
  (JNIEnv *, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_squareup_tape_QueueFileNative_clear
  (JNIEnv *, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_squareup_tape_QueueFileNative_close
  (JNIEnv *, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    toString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_squareup_tape_QueueFileNative_toString
  (JNIEnv *, jobject);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_squareup_tape_QueueFileNative_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     com_squareup_tape_QueueFileNative
 * Method:    nativeReadElementStream
 * Signature: (Ljava/nio/ByteBuffer;[BII)I
 */
JNIEXPORT jint JNICALL Java_com_squareup_tape_QueueFileNative_nativeReadElementStream
  (JNIEnv *, jclass, jobject, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_squareup_tape_QueueFileNative_NativeCallback */

#ifndef _Included_com_squareup_tape_QueueFileNative_NativeCallback
#define _Included_com_squareup_tape_QueueFileNative_NativeCallback
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     com_squareup_tape_QueueFileNative_NativeCallback
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_squareup_tape_QueueFileNative_00024NativeCallback_initIDs
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
