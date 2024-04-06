cmake_minimum_required(VERSION 3.12)


set(CMAKE_CXX_COMPILER "C:/Users/george/gcc/bin/g++.exe")

set(TESTS test1)

set(CXX_STANDARD 17)


project(quadratic_equation)

include_directories(include)
enable_testing()


add_subdirectory(src)
add_subdirectory(tests)
