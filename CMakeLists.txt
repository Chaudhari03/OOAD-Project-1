cmake_minimum_required (VERSION 3.12)

project(CSC582ProjectOne)

add_subdirectory(source)
add_subdirectory(tests)
set(FLEX_EXECUTABLE /usr/bin/flex)
set(BISON_EXECUTABLE /usr/bin/bison)

