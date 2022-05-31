cmake_minimum_required(VERSION 3.17)
project(Sum_Of_Tow_Numbers)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sum_Of_Tow_Numbers
        lib/MyFunctions.cpp
        test/main.cpp)
