// #include <algorithm>
// #include <iostream>
// #include <vector>
 
// int main()
// {
//     std::vector<int> v {3, -4, 2, -8, 15, 267};
 
//     auto print = [](const int& n) { std::cout << n << ' '; };
 
//     std::cout << "before:\t";
//     std::for_each(v.cbegin(), v.cend(), print);
//     std::cout << '\n';
 
//     // increment elements in-place
//     std::for_each(v.begin(), v.end(), [](int &n) { n++; });
 
//     std::cout << "after:\t";
//     std::for_each(v.cbegin(), v.cend(), print);
//     std::cout << '\n';
 
//     struct Sum
//     {
//         void operator()(int n) { 
//             sum += n; 
//         }
//         int sum {0}; // sum = 0
//     }; // struct
//     // Sum(), object of that struct, this object behaves as a function
//     // functor = function object
 
//     // invoke Sum::operator() for each element
//     Sum s = std::for_each(v.cbegin(), v.cend(), Sum());  
//     // return also type Sum
//     std::cout << "sum:\t" << s.sum << '\n';


//     struct Mul
//     {
//         void operator()(int n) { 
//             result *= n; 
//         }
//         int result {1}; 
//     };
//     Mul m = std::for_each(v.cbegin(), v.cend(), Mul());  
//     std::cout << m.result;

// }