
// #include <iostream>
// #include <variant>

// int main()
// {
//     std::variant<long, double> a, b;
//     a = 12l; // a contains a long
//     b = std::get<long>(a); // to retrieve the value
//     // std::cout << std::get<double>(b) << std::endl;

//     try
//     {
//         double c = std::get<double>(b); // this will throw exception
//         std::cout << c << std::endl;
//     }
//     catch(std::bad_variant_access& bva)
//     {
//         std::cout << "bad type access" << std::endl;
//     }
// }