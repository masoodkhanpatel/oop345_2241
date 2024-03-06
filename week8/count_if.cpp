// // Algorithms - Count If
// // count_if.cpp

// #include <algorithm>
// #include <iostream>

// int main()
// {
//     std::vector<int> a{-1,1,2,-4,0,2,-10};

//     int n = std::count_if(a.begin(), a.end(), [](int i)
//                                      {
//                                          return i>0; 
//                                      });

//     std::cout << "Greater than zero numbers count = "<< n << std::endl;

//     std::vector<int> b{1,2,3,4,5,6,7,8,9,10,11};

//     int evenCount = std::count_if(b.begin(), b.end(), [](int i)
//                                      {
//                                          return !(i&1); // 1 if odd, 0 if even
//                                                     // 1 is true, 0 is false 
//                                      });

//     std::cout << "Even numbers count = "<< evenCount << std::endl;



// }