// // Functional - create a reference wrapper
// // ref.cpp

// #include <iostream>
// #include <functional>

// void increment(int& x, int& y) { ++x, ++y; }

// int main()
// {
//     int a = 10, b = 20;
//     auto inc = std::bind(increment, std::ref(a), std::ref(b));
//     // std::function<void(int&,int&)> inc = increment;

//     inc();

//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;
// }