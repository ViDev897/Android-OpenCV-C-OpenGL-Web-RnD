cmake_minimum_required(VERSION 3.10.2)
project("edgevision")

find_package(OpenCV REQUIRED)

add_library(native-lib SHARED native-lib.cpp)
target_link_libraries(native-lib ${OpenCV_LIBS} log)
