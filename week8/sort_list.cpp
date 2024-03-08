// #include <functional>
// #include <iostream>
// #include <list>
 
// std::ostream& operator<<(std::ostream& ostr, const std::list<int>& list)
// {
//     for (const int i : list)
//         ostr << ' ' << i;
//     return ostr;
// }
 
// int main()
// {
//     std::list<int> list{8, 7, 5, 9, 0, 1, 3, 2, 6, 4};
//     std::cout << "initially: " << list << '\n';
 
//     // std::sort(list.begin(), list.end()); 
//     // throws error

//     list.sort();
//     std::cout << "ascending: " << list << '\n';
 
//     list.sort(std::greater<int>());
//     std::cout << "descending:" << list << '\n';
// }