cmake_minimum_required(VERSION 3.5)

project(common CXX)

file(GLOB SOURCES . src/*.cpp)

add_library(common STATIC ${SOURCES})

target_include_directories(common PUBLIC "./include")
