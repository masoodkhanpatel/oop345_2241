// Thread Class - Thread Identifiers
// thread_id.cpp

#include <iostream>
#include <thread>
#include <vector>
#include <windows.h>
// #include <unistd.h>

constexpr int NT = 10;

void task(int i)
{
    Sleep(i);
    std::cout << i << ". Thread id = "
              << std::this_thread::get_id() << std::endl;
}

int main()
{
    // create a vector of threads
    std::vector<std::thread> threads;

    // launch execution of each thread
    for (int i = 0; i < NT; i++)
        threads.push_back(std::thread(task,i));

    // synchronize their execution here
    for (auto& thread : threads)
        thread.join();
}