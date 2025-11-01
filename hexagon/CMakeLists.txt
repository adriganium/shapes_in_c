cmake_minimum_required(VERSION 4.0)
project(hexagon C)
set(CMAKE_C_STANDARD 11)

add_executable(hexagon
        main.c
        shapeslib.h
        shapeslib.c)

target_link_libraries(hexagon m)
