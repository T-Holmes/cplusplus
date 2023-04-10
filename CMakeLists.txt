#############################################
#                   Main                    #
#############################################

# Set minimum CMake version required
cmake_minimum_required(VERSION 3.0)

# Set the project name
project(HelloWorld)

# Create a library for the HelloWorld class
add_library(hello_world_lib
    HelloWorld.cpp
)

# Include directory for HelloWorld class
target_include_directories(hello_world_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

# Executable for hello world program
add_executable(hello_world main.cpp)

# Link HelloWorld library
target_link_libraries(hello_world
    hello_world_lib
)


#############################################
#                 Unit tests                #
#############################################

# Enable CTest testing
enable_testing()

# Executable for unit test program
add_executable(cpp_test unit_tests.cpp)

# Link HelloWorld library to unit test program
target_link_libraries(cpp_test
    hello_world_lib
)

# Add to CTest
add_test(
  name cpp_test
  command cpp_test
)