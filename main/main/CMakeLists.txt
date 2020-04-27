cmake_minimum_required(VERSION 3.15)
project(TravelingSalesman)

set(CMAKE_CXX_STANDARD 11)

add_executable(TravelingSalesman main.cpp Graph.h Graph.cpp Driver.cpp City.h AdjacencyList.cpp AdjacencyList.h)