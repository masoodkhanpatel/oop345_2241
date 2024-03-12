
// #include <iostream>
// #include <fstream>

// int main (int argc, char *argv[])
// {

//     std::cout << "Application: " << argv[0] << std::endl;
//     for (int i = 1; i < argc; i++)
//         std::cout << "- " << argv[i] << std::endl;

//     std::ifstream source(argv[1]);
//     std::ofstream destination(argv[2]);

//     destination << source.rdbuf();
//     // rdbuf() - read buffer

//     source.close();
//     destination.close();
// }