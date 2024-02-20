// // Iterators - Vectors
// // iterator.cpp

// #include <vector>
// #include <iostream>
// #include <list>

// int main()
// {
//     std::list<double> prices;  // initially empty
//     // std::vector<double>::iterator it;

//     prices.push_back(20.54); 
//     prices.push_back(10.43); 
//     prices.push_back(32.43); 

//     for(auto& e:prices)
//         std::cout << e << "  ";
//     std::cout << "\n";

//     prices.sort();
//     // std::sort()

//     std::cout << "After sorting:\n";
//     // for(auto it = prices.begin(); it != prices.end(); it++)
//     //     std::cout << *it << "  ";

//     for(auto& e:prices)
//         std::cout << e << "  ";
//     std::cout << "\n";
    
//     std::cout << std::endl;
// }