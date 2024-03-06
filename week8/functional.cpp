// // Functional - function wrapper
// // function_wrapper.cpp

// #include <iostream>
// #include <functional>

// // a simple function
// long multiply(long x, long y) { return x * y; }



// // a functor, function object
// struct Multiply
// {
//     long operator()(long x, long y) { return x * y; }
// };
// // Multiply(), function object

// int main()
// {
//     // auto add2 = [](int x, int y){return x+y;};

//     std::function<int(int,int)> a = [](int x, int y){return x+y;};

//     std::cout << a(3,4) << "\n";  // original functioln
//     std::cout << a(3,4) << "\n";  // wrapper


//     std::function<long(long, long)> f1 = multiply;
//     std::function<long(long, long)> f2 = Multiply(); // (), calling the constructor and creating the object

//     // lambda expression
//     std::function<long(long, long)> f3 = [](long x, long y) 
//                                          {
//                                             return x * y;
//                                          };

//     std::cout << "f1(10, 2) = " << f1(10, 2) << std::endl;
//     std::cout << "f2(10, 2) = " << f2(10, 2) << std::endl;
//     std::cout << "f3(10, 2) = " << f3(10, 2) << std::endl;
// }