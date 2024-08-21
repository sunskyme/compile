cmake_minimum_required(VERSION 3.28)
project(pi)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        pi main.cpp
        token/token.cpp
        token/token.h

)
