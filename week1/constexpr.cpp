// // Compiler-Evaluated Expressions
// // constexpr.cpp
// #include <iostream>
// #include <chrono>
// #include <ctime>

// constexpr int N = 99; // constant variable

// constexpr int factorial(int i) // constant function
// {
//     return i > 1 ? i * factorial(i - 1) : 1;
// }

// int factorial2(int i) // constant function
// {
//     return i > 1 ? i * factorial2(i - 1) : 1;
// }

// int main()
// {
//     auto start = std::chrono::system_clock::now();
//     std::cout << N << "! = " << factorial(N) << std::endl;
//     auto end = std::chrono::system_clock::now();
    
//     std::chrono::duration<double> elapsed_seconds = end - start;
//     std::time_t end_time = std::chrono::system_clock::to_time_t(end);
 
//     std::cout << "finished computation at " << std::ctime(&end_time)
//               << "elapsed time: " << elapsed_seconds.count() << "s\n";


//     start = std::chrono::system_clock::now();
//     std::cout << N << "! = " << factorial2(99) << std::endl;
//     end = std::chrono::system_clock::now();
    
//     elapsed_seconds = end - start;
//     end_time = std::chrono::system_clock::to_time_t(end);
 
//     std::cout << "finished computation at " << std::ctime(&end_time)
//               << "elapsed time: " << elapsed_seconds.count() << "s\n";

// }