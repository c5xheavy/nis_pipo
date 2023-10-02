cmake_minimum_required(VERSION 3.20)

project(hello)

add_executable(hello
    src/math.h
    src/math.cpp
    src/main.cpp
)

add_executable(test
    src/math.h
    src/math.cpp
    tests/math_test.cpp
)