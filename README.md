# ndk-xtensor
Android Studio example how to use xtensor C++ library for multi-dimensional arrays computing from native code.

Example based on https://github.com/xtensor-stack/xtensor#basic-usage "Initialize a 2-D array and compute the sum of one of its rows and a 1-D array"

## Environment
- Android Studio

## Dependencies
Git submodule projects:
- xtensor 0.23.1 (https://github.com/xtensor-stack/xtensor);
- xtl 0.7.2 (https://github.com/xtensor-stack/xtl.git);

## Project setup
1. Clone main git project:
```
git clone https://github.com/nkh-lab/ndk-xtensor.git
```
2. Clone submodule projects:
```
git submodule update --init
```

## Open project in Android Studio
1. Run Android Studio
2. Then open ndk-xtensor/android project
3. Build and run
4. Expected app welcome text:
```
Hello from C++!
xtensor_xarray_test(): {7, 11, 14}
```

