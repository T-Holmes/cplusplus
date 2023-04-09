project(HelloWorld)
cmake_minimum_required(VERSION 3.0)

add_executable(hello_world HelloWorld.cpp)

add_executable(cpp_test test.cpp)

enable_testing()

add_test(
  NAME cpp_test
  COMMAND $<TARGET_FILE:cpp_test>
)