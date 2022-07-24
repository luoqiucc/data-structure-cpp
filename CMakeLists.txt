cmake_minimum_required(VERSION 3.19)
project(data-structure-cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        data-structure-cpp
        main.cpp
        linear-list/seqlist/SeqList.h
        linear-list/seqlist/SeqList.cpp
        linear-list/linked-list/singly-linked-list/SinglyLinkedList.h
        linear-list/linked-list/singly-linked-list/SinglyLinkedList.cpp linear-list/linked-list/doubly-linked-list/DoublyLinkedList.h linear-list/linked-list/doubly-linked-list/DoublyLinkedList.h linear-list/linked-list/doubly-linked-list/DoublyLinkedList.cpp linear-list/linked-list/circular-linked-list/CircularLinkedList.cpp linear-list/linked-list/circular-linked-list/CircularLinkedList.h)