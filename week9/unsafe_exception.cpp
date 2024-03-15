// // Smart Pointers - Safe Exception
// // safe_exception.cpp

// #include <iostream>
// #include "Title.h"
// // #include "SmartPointer.h"
// #include <memory>

// void display(const char* s)
// {
//     // Title* t = new Title(s);
//     // SmartPtr<Title> t(new Title(s));
//     std::unique_ptr<Title> t(new Title(s));
//     t->display();
// }

// int main()
// {
//     const char* s[] = {"Mr.", "Ms.", "", "Dr."};

//     for (auto x : s)
//     {
//         try
//         {
//             display(x);
//         }
//         catch(const char* msg)
//         {
//             std::cerr << msg << std::endl;
//         }
//     }
// }