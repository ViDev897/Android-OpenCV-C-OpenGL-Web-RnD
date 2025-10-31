#include <jni.h>
#include <opencv2/opencv.hpp>

extern "C"
JNIEXPORT jbyteArray JNICALL
Java_com_example_edgevision_CameraActivity_processFrame(
        JNIEnv* env,
        jobject /* this */,
        jbyteArray frameData,
        jint width,
        jint height) {

    jbyte* framePtr = env->GetByteArrayElements(frameData, NULL);
    cv::Mat yuv(height + height / 2, width, CV_8UC1, framePtr);
    cv::Mat bgr, edges;

    cv::cvtColor(yuv, bgr, cv::COLOR_YUV2BGR_NV21);
    cv::Canny(bgr, edges, 100, 200);

    jbyteArray result = env->NewByteArray(edges.total());
    env->SetByteArrayRegion(result, 0, edges.total(), reinterpret_cast<jbyte*>(edges.data));
    env->ReleaseByteArrayElements(frameData, framePtr, 0);
    return result;
}
