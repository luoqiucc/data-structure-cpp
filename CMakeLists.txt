cmake_minimum_required(VERSION 3.19)
project(data-structure-cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        data-structure-cpp
        main.cpp
        linear-list/seqlist/SeqList.h
        linear-list/seqlist/SeqList.cpp
        linear-list/singly-link-list/SinglyLinkList.h
        linear-list/singly-link-list/SinglyLinkList.cpp)