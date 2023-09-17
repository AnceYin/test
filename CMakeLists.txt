cmake_minimum_required(VERSION 3.20.0)

set(CMAKE_CXX_STANDARD 20)

project ("test")

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(./src)

add_subdirectory(./test)