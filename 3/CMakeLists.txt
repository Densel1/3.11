cmake_minimum_required(VERSION 3.22.0)
project(LiverDll)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(DynamicLib SHARED Leaver.cpp Leaver.h)
add_executable(mainEXE main.cpp)
target_link_libraries(mainEXE PUBLIC DynamicLib)