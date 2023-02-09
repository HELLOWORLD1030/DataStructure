cmake_minimum_required(VERSION 3.24)
project(DataStructure)

set(CMAKE_CXX_STANDARD 17)

add_executable(DataStructure main.cpp List/LinearList.h List/LinearList.cpp List/LinkedList.cpp List/LinkedList.h List/DoubleLinkedList.cpp List/DoubleLinkedList.h)
#add_executable()