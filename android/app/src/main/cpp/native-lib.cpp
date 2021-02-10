#include <iostream>
#include <jni.h>
#include <string>
#include "xtensor/xarray.hpp"
#include "xtensor/xio.hpp"
#include "xtensor/xview.hpp"

xt::xarray<double> xtensor_xarray_test();

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapp_MainActivity_stringFromJNI(JNIEnv* env, jobject /* this */)
{
    std::stringstream ss;
    ss << xtensor_xarray_test();

    std::string hello = "Hello from C++!\nxtensor_xarray_test(): " + ss.str();

    return env->NewStringUTF(hello.c_str());
}

xt::xarray<double> xtensor_xarray_test()
{
    xt::xarray<double> arr1{{1.0, 2.0, 3.0}, {2.0, 5.0, 7.0}, {2.0, 5.0, 7.0}};

    xt::xarray<double> arr2{5.0, 6.0, 7.0};

    xt::xarray<double> res = xt::view(arr1, 1) + arr2;

    return res;
}
