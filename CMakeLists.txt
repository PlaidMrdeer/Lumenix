cmake_minimum_required(VERSION 3.15)
project(Lumenix VERSION 0.1.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCE
        src/*.cpp
        src/*.h
        include/*.h
)
add_library(Lumenix SHARED ${SOURCE})
include_directories(include)

add_subdirectory(examples)