cmake_minimum_required(VERSION 3.0)

project(structures LANGUAGES C)

add_executable(structures main.c)

install(TARGETS structures RUNTIME DESTINATION bin)
