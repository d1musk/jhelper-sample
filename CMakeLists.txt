cmake_minimum_required(VERSION 2.8.4)
project(jhelper-sample)

add_executable(output output/main.cpp)
add_executable(testrunner testrunner/main.cpp)
file(GLOB TASKS "tasks/*.cpp")
add_definitions(-std=c++11)

add_executable(tasks ${TASKS})
