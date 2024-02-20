// // Static Duration
// // static.cpp

// #include <iostream>

// void display()
// {
//     static int n = 1;
//     std::cout << "n is " << n++ << std::endl;
// }

// int main()
// {
//     display();
//     display();
//     display();
//     return 0;
// }





// /************/


// // Type Inference
// // auto-compilation-error.cpp

// #include <iostream>

// int main ()
// {
//   auto a[] {1, 2, 3, 4, 5, 6};  // ERROR
//   const auto n = 6; // this works
//   for (auto i = 0; i < n; i++)
//     std::cout << a[i] << ' ';
//   std::cout << std::endl;
// }