// Smart Pointers
// Title.h

#include <iostream>

class Title
{
    const char* title;
    const char* validTitle() const
    {
        if (!title[0]) // if title is NULL
            throw "invalid title";
        return title;
    }

public:
    Title(const char* s) : title(s) {}

    void display() const
    {
        std::cout << validTitle() << std::endl;
    }
};