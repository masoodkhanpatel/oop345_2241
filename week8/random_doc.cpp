// #include <cstdlib>
// #include <ctime>
// #include <iostream>
 
// int main() 
// {
//     auto time = std::time(nullptr);
//     std::cout << time << "\n";
//     std::srand(time); // use current time as seed for random generator
//     int random_value = std::rand();

//     std::cout << "Random value on [0, " << RAND_MAX << "]: " << random_value << "\n"
//                  "Roll 6-sided dice 20 times: ";
                 
//     for (int n = 0; n != 20; ++n)
//     {
//         int x = 7;
//         while (x > 6) 
//             x = 1 + std::rand() / ((RAND_MAX + 1u) / 6); // Note: 1 + rand() % 6 is biased
//         std::cout << x << ' ';
//     }
//     std::cout << '\n';
// }