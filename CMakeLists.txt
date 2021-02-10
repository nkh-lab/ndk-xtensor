cmake_minimum_required(VERSION 3.4.1)

project(ndk-xtensor)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

add_subdirectory(external/xtl)
add_subdirectory(external/xtensor)
add_subdirectory(android/app/src/main/cpp)
