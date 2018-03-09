cmake_minimum_required(VERSION 3.5)

project(editor CXX)

file(GLOB SOURCES . src/*.cpp)

add_executable(editor ${SOURCES})

target_include_directories(editor PUBLIC "./include")
