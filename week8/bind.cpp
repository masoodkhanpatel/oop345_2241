// // Functional - bind a function to its arguments
// // bind.cpp

// #include <iostream>
// #include <functional>

// double multiply(double x, double y) { return x * y; }

// double add(double x, double y){
//     return x + y;
// }



// int main()
// {
//     auto myfunction = [](int a, int b){ return std::pow(a,b);};

//     auto power_of_2 =  std::bind(myfunction, std::placeholders::_1, 2);

//     std::cout << "pow: " << myfunction(2,3) << "\n";
//     std::cout << "power_of_2: " << power_of_2(4) << "\n";


//     auto multiply_by_10 = std::bind(multiply, std::placeholders::_1, 10);
//     // multiply_by_10(3); ->    std::bind(multiply, 3, 10);

//     auto add_100 = std::bind(add, std::placeholders::_1, 100);
//     //std::bind(add, 55, 100);

//     auto add_10_100 = std::bind(add, 10, 100);

//     std::cout << "Product = " << multiply_by_10(4) << std::endl; // 40

//     std::cout << "Add = " << add_100(55) << std::endl; // 155

//     std::cout << "Add = " << add_10_100() << std::endl;

// }