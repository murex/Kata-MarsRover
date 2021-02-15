cmake_minimum_required(VERSION 3.19.3)

project(Kata-MarsRover CXX)

set(CMAKE_CXX_STANDARD 14)
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
        ../QuickRetrospective.md)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Kata-MarsRover-test)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY XCODE_STARTUP_PROJECT Kata-MarsRover-test)

set_property(TARGET Kata-MarsRover-shared PROPERTY FOLDER "Kata")
set_property(TARGET Kata-MarsRover-test PROPERTY FOLDER "Kata")
set_property(TARGET Docs PROPERTY FOLDER "Kata")

set_property(TARGET gtest gtest_main PROPERTY FOLDER "Third-Party/GoogleTest")

set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "CMake Generated")
