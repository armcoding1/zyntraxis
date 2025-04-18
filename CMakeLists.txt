cmake_minimum_required(VERSION 3.10)

project(zyntraxis)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

set(CMAKE_C_FLAGS "-Wall -Wextra -O2")

add_executable(zyntraxis ${SOURCES})
