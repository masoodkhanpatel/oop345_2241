// #include <algorithm>
// #include <functional>
// #include <iostream>
// #include <iterator>
// #include <numeric>
// #include <vector>
 
// int main()
// {
//     std::vector<int> v{1,1,2,1,1,1,3,1};
//     //  all_of    {t,t,t,t,t,t,f,t} -> false
//     //  none_of    {f,f,f,f,f,f,f,f,f} -> true


//     // if (std::all_of(v.begin(), v.end(), [](int i) { return i==1; }))
//     //     std::cout << "All numbers are 1\n";
//     // else
//     //     std::cout << "Some or atleast one element is not 1\n"; 
//     // for all_of to return true, the function that we are giving should return true for all
 
//     // if (std::none_of(v.cbegin(), v.cend(),[](int i) { return i==2; }) )
//     //     std::cout << "None of them are 2\n";
//     // else
//     //      std::cout << "One or more of them is 2\n";

//     // if (std::any_of(v.cbegin(), v.cend(), [](int i){ return i==3;}))
//     //     std::cout << "One of them is 3\n";
//     // else
//     //      std::cout << "none of them is 3\n";
// }