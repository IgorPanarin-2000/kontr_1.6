cmake_minimum_required (VERSION 2.8)

project (CVector)

set (VECTOR_SRC src/main.cpp src/CVector.cpp src/test.cpp)
set (VECTOR_HDR include/CVector.hpp include/test.hpp)

add_executable(${PROJECT_NAME} ${VECTOR_SRC} ${VECTOR_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
