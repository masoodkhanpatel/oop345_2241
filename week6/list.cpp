// // Iterators - Insertion and Removal
// // iterator_list.cpp

// #include <list>
// #include <iostream>
// #include <iterator>

// int main()
// {
//     std::list<double> prices;  // initially empty

//     prices.push_back(10.43);   // add 10.43
//     prices.push_back(20.54);   // add 20.54, // 12.52
//     prices.push_back(32.43);   // add 32.43
    
//     auto i = prices.end(); // this is iterator
//     std::advance(i, -1);
//     prices.insert(i, 12.52); 

//     auto b =  prices.begin();
//     std::advance(i, 1);
//     prices.erase(b); // erase one place after beginning

//     for(auto it = prices.begin(); it != prices.end(); it++)
//         std::cout << *it << "  ";
//     std::cout << std::endl;
// }