cmake_minimum_required(VERSION 3.6)
project(untitled)

set(CMAKE_CXX_STANDARD 11 )
find_package (Threads)
set(SOURCE_FILES main.cpp Neuron.cpp Neuron.h Weight.cpp Weight.h Network.cpp Network.h)
add_executable(untitled ${SOURCE_FILES})
target_link_libraries (untitled ${CMAKE_THREAD_LIBS_INIT})
#add_definitions(-pthread -m64)