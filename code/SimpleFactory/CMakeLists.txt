cmake_minimum_required(VERSION 2.8)
project(simple_factory)

## Compile as C++11
add_definitions(-std=c++11)

## Declare a C++ library
add_executable(simple_factory main.cpp Factory.cpp ConcreteProductA.cpp ConcreteProductB.cpp Product.cpp)
