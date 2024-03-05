// // Functional - reference wrapper
// // reference_wrapper_vector.cpp

// #include <iostream>
// #include <vector>
// #include <functional> // reference_wrapper

// int main()
// {
//     std::vector<double> original(5, 10.3);
//     // size is 5, 10.3 10.3 10.3 10.3 10.3

//     std::vector<std::reference_wrapper<double>>  ref_to_vector(original.begin(), original.end());

//     for (auto& e : original)
//         e *= 3; // because we said auto&, it will enable us to modify
//         // e = e*3, 10.3*3, 30.9


//     std::cout << "Original vector:\n";
//     for (auto& e : original)
//         std::cout << e << " ";
//     std::cout << "\n";

//     std::cout << "Referenced vector:\n";
//     for (auto e : ref_to_vector)// normal auto, not necessarily auto&
//     // & when we want to modify
//         std::cout << e << " ";
//     std::cout << std::endl;
// }