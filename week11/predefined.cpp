// Predefined Macros
// predefined.cpp

#include <iostream>
#include <algorithm>

int main()
{
    std::cout << "The name of the source file    is " << __FILE__ << std::endl;
    std::cout << "The date of its pre-processing is " << __DATE__ << std::endl;
    std::cout << "The time of its pre-processing is " << __TIME__ << std::endl;
    printf("%s\n", __func__); 
    std::cout << __COUNTER__ << "\n";
    std::cout << __COUNTER__ << "\n";
    std::cout << __COUNTER__ << "\n";
    std::cout << __COUNTER__ << "\n";
    std::cout << __COUNTER__ << "\n";
    std::cout << __FUNCTION__ << "\n";
}