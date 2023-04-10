/********************************************
* CMake Hello World    
* @file main.cpp
* @brief Prints the classic "Hello World!"
* @author Tyler Holmes
* Contact: tmh6859@gmail.com
* @date April 10, 2023
********************************************/

#include <iostream>
#include "HelloWorld.h"

/*******************************************************************************
* Prints "Hello World!" 
* 
* @return 0 on successful run
*******************************************************************************/
int main ()
{
    std::cout << helloWorld() << std::endl;
    
    return 0;
}