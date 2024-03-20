// // String Literal
// // stringLiteral.cpp

// #include <iostream>
// #include <cstring>

// int main()
// {
//     const char* p = "May be overwritten";
//     char s[19]; // for the copy
//     std::strcpy(s, p);

//     s[0] = 'm';  // OK
//     char *t = const_cast<char*>(p);
//     std::cout << "&t: " << &t << "\n";
//     std::cout << "&p: " << &p << "\n";
//     std::cout << "t[0]: " << (int*)&t[0] << "\n";
//     std::cout << "p[0]: " << (int*)&p[0] << "\n";

//     t[0] = 's';
//     // const char & char
//     // const qualifier
//     // auto qualifier


//     // char * to int *
//     // int * to char *

//     std::cout << std::hex;
//     std::cout << s << std::endl;

//     std::cout << "s = " << (int*)s << std::endl; // different addresses
//     std::cout << "p = " << (int*)p << std::endl;
// }