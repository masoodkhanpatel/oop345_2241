// // Algorithms - Copy
// // copy_.cpp

// #include <vector>
// #include <algorithm>
// #include <iostream>

// int main()
// {
//     std::vector<double> v(4, 10.34);
//     // 10.34 10.34 10.34 10.34
//     std::vector<double> c(4, 20.68);
//     // 20.68 20.68 20.68 20.68

//     8 bytes
//     20.68

//     0123466   <------ begin()
//     0123467
//     0123468
//     0123469
//     0123470
//     0123466
//     0123466

//     0123466   <------ begin() + 1
//     0123467
//     0123468
//     0123469
//     0123470
//     0123466
//     0123466

//     0123466   <------ begin() + 2
//     0123467
//     0123468
//     0123469
//     0123470
//     0123466
//     0123466


//     0123466   
//     0123467
//     0123468
//     0123469
//     0123470
//     0123466
//     0123466    <------ end()





//     std::copy(v.begin(), v.begin()+2, c.begin() + 1);
//     // 20.68 10.34 10.34 20.68

//     [0,3] = { 0,1,2} 

//     std::vector<int> a(10, 2);
//     std::vector<int> b(10);

//     // copied from a to b
//     std::copy(a.begin(), a.end(), b.begin());
//     // printout b
//     for (auto e : b)
//         std::cout << e << std::endl;

//     std::copy(v.begin(), v.begin() + 2, c.begin() + 1);
//     // 20.68 10.34 10.34 20.68

//     for (auto e : c)
//         std::cout << e << std::endl;
// }