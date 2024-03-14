// // Reference to a Pointer
// // ref_to_ptr.cpp

// #include <iostream>

// void swap(int*& a, int*& b) // *&a = a
// {
//     int* t = a;
//     a = b;
//     b = t;
// }

// int main()
// {
//     int x, y; // addresses allocated to variables
//     int* p = &x;
//     int* q = &y;
//     x = 123;
//     y = 256;

//     std::cout << x << " " << y << "\n";

//     std::cout << "p = " << p << std::endl;
//     std::cout << "q = " << q << std::endl;

//     swap(p, q); // swap the addresses

//     std::cout << "p = " << p << std::endl;
//     std::cout << "q = " << q << std::endl;

//     std::cout << x << " " << y << "\n";

//     std::swap(x,y); //  use from standard libary to swap elements
//     std::cout << "p = " << p << std::endl;
//     std::cout << "q = " << q << std::endl;
//     std::cout << x << " " << y << "\n";
// }