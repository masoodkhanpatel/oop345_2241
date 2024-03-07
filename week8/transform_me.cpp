// // Algorithms - Transform - Unary Operation
// // transform_u.cpp

// #include <vector>
// #include <algorithm>
// #include <iostream>

// int main()
// {
//     std::vector<int> v = {1, 2, 4, 5, 7, 8, 10, 13, 17, 21, 43};
//     std::vector<int> result(v.size());

//     std::transform(v.begin(), v.end(), result.begin(), [](int n){return n*3;});

//     for(auto x:result)
//         std::cout << x << " ";

// }