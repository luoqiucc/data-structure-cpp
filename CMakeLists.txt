cmake_minimum_required(VERSION 3.19)
project(data-structure-cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        data-structure-cpp
        main.cpp
        linear-list/seqlist/SeqList.h
        linear-list/seqlist/SeqList.cpp
        linear-list/linked-list/singly-linked-list/SinglyLinkedList.h
        linear-list/linked-list/singly-linked-list/SinglyLinkedList.cpp
        linear-list/linked-list/doubly-linked-list/DoublyLinkedList.h
        linear-list/linked-list/doubly-linked-list/DoublyLinkedList.cpp
        linear-list/linked-list/circular-linked-list/CircularLinkedList.cpp
        linear-list/linked-list/circular-linked-list/CircularLinkedList.h
        linear-list/linked-list/static-linked-list/StaticLinkedList.cpp
        linear-list/linked-list/static-linked-list/StaticLinkedList.h
        stack/seqstack/SeqStack.cpp
        stack/seqstack/SeqStack.h
        stack/linked-stack/LinkedStack.cpp
        stack/linked-stack/LinkedStack.h
        queue/circular-queue/CircularQueue.cpp
        queue/circular-queue/CircularQueue.h
        queue/linked-queue/LinkedQueue.cpp
        queue/linked-queue/LinkedQueue.h
        instance/brackets-check/BracketsCheck.cpp
        instance/brackets-check/BracketsCheck.h
        utils/Utils.cpp
        utils/Utils.h
        string/seqstring/SeqString.cpp
        string/seqstring/SeqString.h
        string/linked-string/LinkedString.cpp string/linked-string/LinkedString.h)