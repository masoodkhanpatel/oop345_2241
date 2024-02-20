// // External Linkage
// // Module_b.cpp

// #include <iostream>
// void display(); // the linker will look for the function and connect it
// int share_me = 0; // variable definition

// int main()
// {
//     display();
//     display();
//     std::cout << "Module B: share_me at " << &share_me   << '\n';
//     std::cout << "Module B: share_me is " <<  share_me++ << '\n';
// }