cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 14)

project(balinor CXX)

add_subdirectory(src)

find_package(Catch2 REQUIRED)
add_executable(tests src/tests/tests.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(tests)
