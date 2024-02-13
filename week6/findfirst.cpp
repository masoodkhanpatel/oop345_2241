// // string::find_first_of
// #include <iostream>       // std::cout
// #include <string>         // std::string
// #include <cstddef>        // std::size_t

// int main ()
// {
//   std::string str ("Hello");
//   std::size_t found = str.find_first_of("o");
//   while (found!=std::string::npos)
//   {
//     str[found]='*';
//     found=str.find_first_of("o",found+1);
//   }

//   std::cout << str << '\n';

//   return 0;
// }