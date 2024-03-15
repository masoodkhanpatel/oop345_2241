// // Element Addresses
// // addresses.cpp

// #include <iostream>

// int main()
// {
//     const char s[] = "A C string";
//     // char* s; -> 

//     std::cout << std::hex;

//     for (int i = 0; s[i]; i++)
//         std::cout << reinterpret_cast<int*>(const_cast<char*>(&s[i])) << " : " << s[i] << std::endl;
// }