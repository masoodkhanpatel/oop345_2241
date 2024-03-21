// Promise - Future
// promise_future.cpp

#include <iostream>
#include <thread>
#include <future>

void task(std::promise<double>& p, int x)
{
    p.set_value(x); // setting the value
}

int main()
{
    std::promise<double> p;
    std::future<double> f = p.get_future();
    task(std::ref(p), 123);
    std::cout << "Value = " << f.get()<< std::endl; // p not set here
    // std::thread t(task, std::ref(p), 99); // p set here
    // std::cout << "Value = " << f.get()<< std::endl;
    // t.join();
}