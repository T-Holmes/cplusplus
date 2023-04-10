/************************************************************************
* CMake Hello World                                                    
* @file unit_tests.cpp                                                 
* @brief Unit test that checks if program truly prints "Hello World!"  
* @author Tyler Holmes                                                 
* Contact: tmh6859@gmail.com                                           
* @date April 10, 2023                                                 
*************************************************************************/

#include <assert.h>
#include "../include/HelloWorld.h"

/*******************************************************************************
* Tests if HelloWorld library prints "Hello World!" correctly 
* 
* @return 0 on successful run
*******************************************************************************/
int main() 
{
  assert("Hello world!" == helloWorld());

  return 0;
}