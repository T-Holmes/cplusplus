project(HelloWorld)
cmake_minimum_required(VERSION 3.0)

add_executable(hello_world main.cpp)
add_executable(hello_world_test test.cpp)

enable_testing()
add_test(NAME hello_world_test COMMAND hello_world_test) 