// Function-Like Macros
// fnMacros.cpp

// #include <iostream>
#define PI 3.14
#define AREA(R) PI * R * R // function-like macro
// #include <chrono>

double AREA_func(double r){
    return PI*r*r;
}

int main()
{
    auto start = std::chrono::system_clock::now();;
    double area = AREA(2.35); // macro function call
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Time taken is " << elapsed_seconds.count() << std::endl;

    start = std::chrono::system_clock::now();;
    area = AREA_func(2.35); // function version call
    end = std::chrono::system_clock::now();
    elapsed_seconds = end - start;
    std::cout << "Time taken is " << elapsed_seconds.count() << std::endl;
}