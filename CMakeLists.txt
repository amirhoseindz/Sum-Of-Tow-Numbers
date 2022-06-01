cmake_minimum_required(VERSION 3.17)
project(Sum_Of_Tow_Numbers)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Sum_Of_Tow_Numbers
        test/main.cpp include/MyVectors.h lib/MyVectors.cpp)
