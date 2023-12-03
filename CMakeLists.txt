cmake_minimum_required(VERSION 3.10)

project(wishlist)

add_executable(wishlist
    src/main.cpp
)

add_executable(test
    src/math.h
    src/math.cpp
    tests/math_test.cpp
)
