cmake_minimum_required(VERSION 2.8.4)
project(jhelper-sample)

add_executable(output output/main.cpp)
add_executable(testrunner testrunner/main.cpp)
include_directories("${CMAKE_SOURCE_DIR}/../../base")
add_definitions(-std=c++11)

file(GLOB TASKS "tasks/*.cpp")
add_executable(tasks ${TASKS} ${HEADERS})

