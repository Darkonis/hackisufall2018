/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_zoy_caca_Display */

#ifndef _Included_org_zoy_caca_Display
#define _Included_org_zoy_caca_Display
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_zoy_caca_Display
 * Method:    createDisplayAndCanvas
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_zoy_caca_Display_createDisplayAndCanvas
  (JNIEnv *, jclass);

/*
 * Class:     org_zoy_caca_Display
 * Method:    createDisplay
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zoy_caca_Display_createDisplay
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    createDisplayAndCanvasWithDriver
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_zoy_caca_Display_createDisplayAndCanvasWithDriver
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_zoy_caca_Display
 * Method:    createDisplayWithDriver
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_zoy_caca_Display_createDisplayWithDriver
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayDriverList
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_zoy_caca_Display_getDisplayDriverList
  (JNIEnv *, jclass);

/*
 * Class:     org_zoy_caca_Display
 * Method:    setDisplayDriver
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zoy_caca_Display_setDisplayDriver
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayDriver
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_zoy_caca_Display_getDisplayDriver
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayCanvas
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_zoy_caca_Display_getDisplayCanvas
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    displayRefresh
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zoy_caca_Display_displayRefresh
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    setDisplayTime
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_zoy_caca_Display_setDisplayTime
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayTime
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zoy_caca_Display_getDisplayTime
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zoy_caca_Display_getDisplayWidth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zoy_caca_Display_getDisplayHeight
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    setDisplayTitle
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zoy_caca_Display_setDisplayTitle
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_zoy_caca_Display
 * Method:    setDisplayMouse
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_zoy_caca_Display_setDisplayMouse
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_zoy_caca_Display
 * Method:    setDisplayCursor
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_zoy_caca_Display_setDisplayCursor
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayEvent
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_zoy_caca_Display_getDisplayEvent
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayMouseX
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zoy_caca_Display_getDisplayMouseX
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    getDisplayMouseY
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_zoy_caca_Display_getDisplayMouseY
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_zoy_caca_Display
 * Method:    freeDisplay
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_zoy_caca_Display_freeDisplay
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
