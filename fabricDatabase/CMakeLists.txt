cmake_minimum_required(VERSION 3.5)

project(fabricDatabase LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(fabricDatabase main.cpp fabric.cpp database.cpp database.h fabric.h group.cpp group.h worker.cpp worker.h)

install(TARGETS fabricDatabase
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
