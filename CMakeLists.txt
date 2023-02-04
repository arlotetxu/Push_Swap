cmake_minimum_required(VERSION 3.23)
project(Push_Swap C)

set(CMAKE_C_STANDARD 99)

add_executable(Push_Swap main.c push_swap_checks.c push_swap.h push_swap_utils.c)
