#################################################################
# @file CMakeLists.txt                                          #
# @brief Generates build system for main and unit tests         #
# @author Tyler Holmes                                          #
# Contact: tmh6859@gmail.com                                    #
# date April 10, 2023                                           #
#################################################################

#############################################
#                   Main                    #
#############################################

# Set minimum CMake version required
cmake_minimum_required(VERSION 3.0)

# Set the project name
project(HelloWorld)

# Create a library for the HelloWorld class
add_library(hello_world_lib
    ${CMAKE_CURRENT_SOURCE_DIR}/src/HelloWorld.cpp
)

# Include directory for HelloWorld class
target_include_directories(hello_world_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Executable for hello world program
add_executable(hello_world 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

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
add_executable(cpp_test 
    ${CMAKE_CURRENT_SOURCE_DIR}/test/unit_tests.cpp
)

# Link HelloWorld library to unit test program
target_link_libraries(cpp_test
    hello_world_lib
)

# Add to CTest
add_test(
  name cpp_test
  command cpp_test
)