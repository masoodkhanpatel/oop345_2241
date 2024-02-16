// #include <iostream>
// #include <variant>
// #include <string>

// using option = std::variant<int, double, std::string>;

// void printOption(const option& o){
//     if (std::holds_alternative<int>(o))
//         std::cout << "User entered integer: " << std::get<int>(o) << "\n";
//     else if (std::holds_alternative<double>(o))
//         std::cout << "User entered double: " << std::get<double>(o) << "\n";
//     else if (std::holds_alternative<std::string>(o))
//         std::cout << "User entered string: " << std::get<std::string>(o) << "\n";
// }

// int main(){
//     option userOption = "exit";
//     printOption(userOption);
//     userOption = 9.9; // change to double
//     std::cout << "After changing to double\n";
//     printOption(userOption);
//     userOption = 99; // change to integer
//     std::cout << "After changing to integer\n";
//     printOption(userOption);
//     return 0;

// }

// // Variant - a type-safe union
// // variant.cpp

// // #include <iostream>
// // #include <variant>

// // int main()
// // {
// //     std::variant<long, double> a, b;
// //     a = 12l; // a contains a long
// //     b = std::get<long>(a);
// //     std::cout << std::get<long>(b) << std::endl; // 12
// //     b = 4.5;
// //     try
// //     {
// //         double c = std::get<double>(b);
// //         std::cout << c << std::endl; // throw an exception/error
// //     }
// //     catch(std::bad_variant_access& bva)
// //     {
// //         std::cout << "bad type access" << std::endl;
// //     }
// // }