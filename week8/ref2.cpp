// // Functional - create a reference wrapper
// // ref.cpp

// #include <iostream>
// #include <functional>

// void increment(int& x, int& y) { ++x, ++y; }

// int main()
// {
//     int a = 10, b = 20;
//     auto inc = std::bind(increment, a, b);

//     inc();

//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;
// }