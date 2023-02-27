cmake_minimum_required(VERSION 3.24)
project(DataStructure)

set(CMAKE_CXX_STANDARD 17)

add_executable(DataStructure main.cpp List/LinearList.h List/LinearList.cpp List/LinkedList.cpp List/LinkedList.h List/DoubleLinkedList.cpp List/DoubleLinkedList.h Stack/SequenceStack.cpp Stack/SequenceStack.h Quene/SequenceQuene.cpp Quene/SequenceQuene.h Stack/LinkedStack.cpp Stack/LinkedStack.h Quene/LinkedQuene.cpp Quene/LinkedQuene.h Quene/SequenceLoopQuene.cpp Quene/SequenceLoopQuene.h String/SequenceString.cpp String/SequenceString.h String/HeapString.cpp String/HeapString.h Array/SequenceArray.cpp Array/SequenceArray.h Matrix/SparseMatrix.cpp Matrix/SparseMatrix.h)
#add_executable()