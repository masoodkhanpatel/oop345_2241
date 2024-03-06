// // Algorithms - Accumulate
// // accumulate.cpp

// #include <iostream>
// #include <numeric>

// int main()
// {
//     std::vector<int> v{1,2,3,4,5,6};
//     int sum;

//     sum = std::accumulate(v.begin(), v.end(), 0);

//     std::cout << "sum = " << sum <<  std::endl;

//     for(auto x:v)
//         std::cout << x << " ";
//     std::cout << "\n";

//     sum = std::accumulate(v.begin(), v.end(), 0, [](int x, int y)
//         {
//             std::cout << x << " + 2 * " << y << "\n";
//             return x + 2 * y;
//         });

//     std::cout << "2 * sum = " << sum <<  std::endl;
// }