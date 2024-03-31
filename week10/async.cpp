// Asynchronous Launch
// async.cpp

#include <iostream>
#include <thread>
#include <future>

double task(double x) { 
    std::cout << "Thread id of task: " << std::this_thread::get_id() << "\n";
    return x * 2; 
}

int main()
{
    std::cout <<  "Thread id of main: " << std::this_thread::get_id() << "\n";
    auto f = std::async(task, 10); // will run in a new thread
    double r = f.get();
    std::cout << "Result = " << r << std::endl;
}