
// #include <iostream>
// #include <algorithm>

// int main(){

//     std::vector<int> v{1,2,7,3,2,3};

//     std::sort(v.begin(), v.end(),  std::greater<int>());

//     // for(auto each:v)
//     //     std::cout << each << " ";


//     struct
//     {
//         bool operator()(int a, int b) const { return a < b; }
//     }
//     customLess; // function object
 
//     std::sort(v.begin(), v.end(), customLess);

//     auto print = [&v](std::string_view const rem)
//     {
//         for (auto a : v)
//             std::cout << a << ' ';
//         std::cout << ": " << rem << '\n';
//     }; // print("abc")

//     print("sorted with a custom function object");
 
//     std::sort(v.begin(), v.end(), [](int a, int b)
//                                   {
//                                       return a > b;
//                                   });
//     print("sorted with a lambda expression");
// }

