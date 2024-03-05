// #include <algorithm>
// #include <array>
// #include <iostream>
 
// int main()
// {
//     const auto v = {1, 2, 3, 4};
 
//     for (const int n : {3, 5})
//         // if..else, written as ternary
//         (std::find(v.begin(), v.end(), n) == std::end(v))
//             ? std::cout << "v does not contain " << n << '\n'
//             : std::cout << "v contains " << n << '\n';
 
//     auto is_even = [](int i) { return i % 2 == 0; };

//         if (auto it = std::find_if(v.begin(), v.end(), is_even); it != std::end(v))
//             std::cout << "w contains an even number " << *it << '\n';
//             // *it, to get the value
//         else
//             std::cout << "w does not contain even numbers\n";
// }