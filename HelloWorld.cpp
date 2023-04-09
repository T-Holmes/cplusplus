#include <HelloWorld.h>
#include <iostream>

std::string helloWorld() 
{
     return "Hello world!"; 
}

int main ()
{
    std::cout << helloWorld() << std::endl;
    
    return 0;
}
