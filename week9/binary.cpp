// // Binary Access - Binary or Text
// // binary.cpp

// #include <iostream>
// #include <iomanip>
// #include <fstream>

// int main(int argc, char* argv[])
// {
//     std::cout << std::fixed << std::setprecision(15);

//     {
//         // binary access
//         double x = 1.0/3.0;

//         std::fstream f(argv[1], std::ios::in | std::ios::out | std::ios::trunc | std::ios::binary);

//         f.write(reinterpret_cast<char*>(&x), sizeof(x));
//         f.seekg(0, std::ios::beg);
//         f.read(reinterpret_cast<char*>(&x), sizeof(x));

//         std::cout << x << std::endl;
//     }

//     {
//         // text access
//         double x = 1.0/3.0;

//         std::fstream t(argv[2], std::ios::in | std::ios::out | std::ios::trunc);

//         t << x;
//         t.seekg(0, std::ios::beg);
//         t >> x;

//         std::cout << x << std::endl;
//     }
// }