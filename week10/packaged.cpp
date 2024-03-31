// Packaged Task
// packaged_task.cpp

#include <iostream>
#include <thread>
#include <future>
#include <windows.h>

double task(double x) { 
    std::cout << "Packaged task thread id: " << std::this_thread::get_id() << "\n";
    Sleep(10000);
    return x * 2; 
    }

int main()
{
    std::packaged_task<double(double)> pt(task);

    auto f = pt.get_future(); // this is future
    std::thread t1([&](){pt(10);pt.reset();pt(99);});
    std::thread t2([&](){
        std::cout << "t2 task thread id: " << std::this_thread::get_id() << "\n";
        std::cout << "Result = " << f.get() << std::endl;
    });
    std::thread t3([&](){
        Sleep(15000);
        f = pt.get_future();
        std::cout << "t3 task thread id: " << std::this_thread::get_id() << "\n";
        std::cout << "Result = " << f.get() << std::endl;
    });
    
    t1.join();
    t2.join();
    t3.join();
    return 0;
}