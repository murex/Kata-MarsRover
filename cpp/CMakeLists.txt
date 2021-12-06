# Copyright (c) 2021 Murex
# 
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

cmake_minimum_required(VERSION 3.19.3)

project(Kata-MarsRover CXX)

set(CMAKE_CXX_STANDARD 17)
enable_testing()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE PATH "Where to place compiled static libraries.")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib CACHE PATH "Where to place compiled shared libraries.")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin CACHE PATH "Where to place compiled executables.")

# We use CPM for 3rd-party dependencies management
include(cmake/CPM.cmake)
include(cmake/FindGoogleTest.cmake)

add_library(Kata-MarsRover-shared SHARED)

target_compile_definitions(Kata-MarsRover-shared PRIVATE MARS_ROVER_EXPORTS)

target_sources(Kata-MarsRover-shared
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src/kata/mars_rover/MarsRover.cpp
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/kata/mars_rover/MarsRover.hpp
        ${CMAKE_CURRENT_SOURCE_DIR}/include/kata/mars_rover/config.hpp
)

target_include_directories(Kata-MarsRover-shared
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(Kata-MarsRover-test)

target_sources(Kata-MarsRover-test
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/test/MarsRoverTest.cpp
)

target_link_libraries(Kata-MarsRover-test
    PRIVATE
        Kata-MarsRover-shared
        gtest_main)

add_test(NAME ctest-Kata-MarsRover COMMAND Kata-MarsRover-test)

add_custom_target(Docs
    SOURCES
        ../README.md
        ./GETTING_STARTED.md
        ../QuickRetrospective.md)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Kata-MarsRover-test)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY XCODE_STARTUP_PROJECT Kata-MarsRover-test)

set_property(TARGET Kata-MarsRover-shared PROPERTY FOLDER "Kata")
set_property(TARGET Kata-MarsRover-test PROPERTY FOLDER "Kata")
set_property(TARGET Docs PROPERTY FOLDER "Kata")

set_property(TARGET gtest gtest_main PROPERTY FOLDER "Third-Party/GoogleTest")

set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMake Generated")
