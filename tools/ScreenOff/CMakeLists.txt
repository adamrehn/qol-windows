cmake_minimum_required(VERSION 3.8)
project(screenoff)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Build our executable
add_executable(screenoff WIN32 screenoff.cpp)
