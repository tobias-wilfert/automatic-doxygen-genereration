cmake_minimum_required(VERSION 3.17)
project(automatic-doxygen-generation)

set(CMAKE_CXX_STANDARD 14)

add_executable(automatic-doxygen-generation main.cpp Bot.cpp Bot.h)