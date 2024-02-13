// // String Class
// // string.cpp

// #include <iostream>
// #include <string>

// int main()
// {

//     std::string str1("Hello");
//     std::string str2("World");
//     std::string str3("His");

//     std::string str4;
//     std::cout << str4.empty() << "\n"; // returns true i.e. 1
//     str4 = str1 + str2 + str3;
//     std::cout << str4.empty() << "\n"; // returns false i.e. 0
//     std::cout << str4 << "\n";
//     std::cout << str4.size() << "\n";
//     std::cout << str4.find('i') << "\n";
//     str4.clear(); //  empty the string
//     std::cout << str4.size();

//     // int i=0;
//     // for(const auto& x:str4){
//     //     if(str4[i++]=='\0')
//     //         std::cout << "null byte found";
//     // }



//     // for (const auto& abc: str)
//     //     if (str[i++] == '\0')
//     //         std::cout << "Null byte at str[" << i-1 << "]\n";
// }