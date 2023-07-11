cmake_minimum_required(VERSION 3.0)
project(MyProject)
set(SOURCES
    test.cpp
    PID.cpp
    Swing.cpp
    Ball.cpp
)
add_executable(MyProject ${SOURCES})