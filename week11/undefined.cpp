#define abc "abcdefg"
#include <iostream>


int main(){
    std::cout << abc;
    // #undef abc
    #define abc "\nhello"
    auto print = [](){return abc;};
    std::cout << print();
    return 0; 
}
// #undef abc


#ifndef something
#define something

#endif
