

#include <iostream>
#include <thread>

int main(){
    int x;
    std::thread t1([&](){std::cout<<"Set\n";x=99;});
    std::thread t2([&](){std::cout<<"Increment\n";x++;});

    t1.join();
    t2.join();

    std::cout << x << "\n";
}

