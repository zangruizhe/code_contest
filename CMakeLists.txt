cmake_minimum_required(VERSION 3.22)
project(code_contest)

set(CMAKE_CXX_STANDARD 20)
add_compile_definitions(LOCAL)

add_executable(code_contest code_contest.cpp)
