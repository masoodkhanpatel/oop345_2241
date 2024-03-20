// Smart Pointers - Safe Exception
// safe_exception.cpp

#include <iostream>
#include "Title.h"
// #include "SmartPointer.h"
#include <memory>

void display(const char* s)
{
    std::unique_ptr<Title> abc(new Title(s));
    abc->display();
}

int main()
{
    const char* s[] = {"Mr.", "Ms.", "", "Dr."};

    for (auto x : s)
    {
        try
        {
            display(x);
        }
        catch(const char* msg)
        {
            std::cerr << msg << std::endl;
        }
    }
}