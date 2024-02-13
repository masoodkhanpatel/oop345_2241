// // Normal Exits
// // exit.cpp

// #include <iostream>

// void exit_1()
// {
//     std::cerr << "In exit_1\n";
// }

// void exit_2()
// {
//     std::cerr << "In exit_2\n";
// }

// void exit_3()
// {
//     std::cerr << "In exit_3\n";
// }

// int main()
// {
//     int i; // option selection

//     std::cout << "Return(!=1), Exit(1) ? ";
//     std::cin >> i;
//     if (i == 1)
//     {
//         std::atexit(exit_1);
//         std::atexit(exit_2);
//         std::atexit(exit_3);
//         std::exit(1);
//     }
//     return i;
// }