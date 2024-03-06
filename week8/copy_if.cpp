// // Algorithms - Copy If
// // copy_if.cpp

// #include <vector>
// #include <algorithm>
// #include <iostream>

// int main()
// {
//     std::vector<int> v = {1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43};
//     std::vector<int> c(15);

//     std::copy_if(v.begin(), v.end(), c.begin(), [](int i)
//         {
//             return i % 2; // 1 if odd, return true if odd
//         });
//     // copy_if will copy when function return is true for the element

//     for (auto e : c)
//         std::cout << e << " ";

//     std::vector<int> a = {1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43, 16, 20, 24};
//     std::vector<int> b(20);
//     std::copy_if(a.begin(), a.end(), b.begin(), [](int i)
//         {
//             return i%4==0;
//         });
//     std::cout << "\n";
//     std::cout << "Multiples of 4:\n";
//     for (auto e : b)
//         std::cout << e << " ";

// }