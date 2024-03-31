// Promise - Future
// promise_future.cpp

#include <iostream>
#include <thread>
#include <future>
#include <windows.h>

void task(std::promise<double>& p, int x)
{
    Sleep(10000);
    p.set_value(x); // setting the value
}

int main()
{
    std::promise<double> p;
    std::future<double> f = p.get_future();
    std::thread t1(task, std::ref(p), 99); // p set here
    std::thread t2([&](){std::cout << "Value = " << f.get()<< std::endl;});
    t1.join();
    t2.join();

}