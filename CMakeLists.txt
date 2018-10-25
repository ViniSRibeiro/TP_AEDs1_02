cmake_minimum_required(VERSION 3.12)
project(traveling_salesman C)

set(CMAKE_C_STANDARD 99)

add_executable(traveling_salesman main.c logic.c controller.h frontend.c)