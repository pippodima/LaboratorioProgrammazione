cmake_minimum_required(VERSION 3.14)
project(LaboratorioProgrammazione)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(googleTest)

set(SOURCE_FILES  main.cpp ToDo.cpp ToDo.h Agenda.cpp Agenda.h Date.cpp Date.h)
add_executable(LaboratorioProgrammazione main.cpp ToDo.cpp ToDo.h Agenda.cpp Agenda.h Date.cpp Date.h )
add_library(core ${SOURCE_FILES})

target_link_libraries (core)