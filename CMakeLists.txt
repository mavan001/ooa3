cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)
include_directories("C:/SFML-VS-2.5/SFML-2.5.1-64bit/include/")

set(SOURCE_FILES main.cpp DiGraph.h DiGraph.cpp Node.h Node.cpp Liste.h SFMLGraphVisualizer.h)
add_executable(untitled ${SOURCE_FILES})
