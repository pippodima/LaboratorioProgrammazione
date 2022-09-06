cmake_minimum_required(VERSION 3.19)
project(LaboratorioProgrammazione)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(Google_tests)
add_executable(LaboratorioProgrammazione main.cpp ToDo.cpp ToDo.h Agenda.cpp Agenda.h Date.cpp Date.h Google_tests/AgendaTest.cpp Google_tests/test2.cpp)