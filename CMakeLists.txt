cmake_minimum_required(VERSION 3.29)
project(neural_network)

set(CMAKE_CXX_STANDARD 20)

add_executable(neural_network main.cpp
        matrix.h
        activation_function.h
        layer.h
        neural_network.h)
