cmake_minimum_required(VERSION 3.23)
project(projNorme C)

set(CMAKE_C_STANDARD 90)

add_executable(projNorme main.c)

target_link_libraries(projNorme m)
