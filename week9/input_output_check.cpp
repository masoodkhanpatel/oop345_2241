// #include <iostream>
// #include <fstream>
// #include <unistd.h>

// int main(){

//     if (std::cin.fail()) // if return true
//     {
//         std::cerr << "Read error" << std::endl;
//     } 
//     else // return false
//     {
//         std::cout << "Input stream working\n";
//     }

//     // set the state of std::cout to fail
//     std::cout.setstate(std::cout.failbit);

//     // reset the flags of std::cout
//     std::cout.clear(); // changing the state to default

//     if(std::cout.fail()){
//         return 123; // check via echo $? in the terminal
//     }
//     else{
//         std::cout << "Output stream working\n";
//         return 0;
//     }
// }