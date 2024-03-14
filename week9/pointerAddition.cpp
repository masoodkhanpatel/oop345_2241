// // Pointer Addition
// // pointerAddition.cpp

// #include <iostream>

// int main()
// {
//     double a[] = {1.1, 2.2, 3.3, 4.4 , 5.5};
//     double* p;

//     p = &a[1]; // points to 2.2, p starts at index 1 of a
//     // std::cout << std::hex; // display numbers in hexadecimal
//     std::cout << a[0]<< " : " << a     << std::endl; // 1.1
//     std::cout << *(p + 2) << " : " << p + 2 << std::endl; // 4.4
//     // p[2] = a[3], p is starting from index 1 of a
//     std::cout << p[2]<< " : " << &p[2] << std::endl; //  4.4


//     int b[] {4,3,5,53,4,32,123456};

//     int* c;
//     c = &b[3];
//     std::cout << &c[0] << ":" << c[0] << "\n"; 
//     std::cout << &c[3] << ":" << c[3] << "\n"; 

//     std::cout << std::hex;
//     std::cout << &c[3] << ":" << c[3] << "\n"; 
// }