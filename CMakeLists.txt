cmake_minimum_required(VERSION 3.0)
project(snippets)
add_executable(snippets src/array_of_functions.c)

find_package(Rmath 1.0.0 REQUIRED)
target_link_libraries(snippets Rmath::Rmath)

