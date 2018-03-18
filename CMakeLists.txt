cmake_minimum_required(VERSION 3.8)
project(CppProgram)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Sort.h ReversalList.h MergeList.h include.h HasSubtreeClass.h)
add_executable(CppProgram ${SOURCE_FILES})