// // Pointer Subtraction
// // pointerSubtraction.cpp

// #include <iostream>
// #include <cstddef>

// unsigned length(const char *s)
// {
//     unsigned size = 0u;
//     while (*s++) size++; // \0
//     return size;
// }

// int main()
// {
//     int a[] = {1,2,3,4,5}, i = 2, *p, *r;
//     // ptrdiff_t k;

//     p = &a[4]; // 5
//     r = &a[0]; // 1
//     auto k = p - r; // difference between addresses
//     std::cout << *(p - i) << std::endl; // value at address i types before *p // 3
//     std::cout << k << std::endl;

//     std::cout << &p << std::endl;
//     std::cout << &r << std::endl;
//     std::cout << sizeof(a[0]) << std::endl;

//     std::cout << length("abcdefasfdasfasfa") << std::endl;
// }
