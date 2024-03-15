// // Smart Pointer for title
// // SmartPtr.cpp

// #include <iostream>
// #include "Title.h"
// // #include "SmartPointer.h"
// #include <memory>

// void display(const char* s)
// {
//     std::unique_ptr<Title> t(new Title(s));
//     t->display();


//     // std::shared_ptr<Title> t1(new Title(s));
//     // t1->display();

//     // std::shared_ptr<Title> t2(t1);
//     // t2->display();
// //calls the destructor
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