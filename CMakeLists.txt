cmake_minimum_required(VERSION 3.30)
project(ATOMS C)

set(CMAKE_C_STANDARD 11)

add_executable(ATOMS main.c
        Model.c
        Model.h
        View.c
        View.h
        Controller.c
        Controller.h)
