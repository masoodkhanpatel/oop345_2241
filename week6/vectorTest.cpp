// Sequential Containers - Vectors
// vector.cpp

#include <vector>
#include <iostream>
#include <string>

int main()
{
    // std::vector<double> prices; // initially empty

    // if(prices.empty())       // is prices empty?
    //     std::cout << "prices is empty" << std::endl;

    // prices.push_back(10.43); // add 10.43
    // prices.push_back(20.54); // add 20.54
    // prices.push_back(32.43); // add 32.43
    // std::cout << "Size of vector: " << prices.size() << "\n";
    // for(int i = 0; i < prices.size(); i++)
    //     std::cout << prices[i] << "  ";
    // std::cout << std::endl;

    // prices.front() = 54.11; // change 1st element
    // prices.pop_back();      // remove last element

    // for(int i = 0; i < prices.size(); i++)
    //     std::cout << prices[i] << "  ";
    // std::cout << std::endl;

    std::vector<std::string> students;
    students.push_back("Masood");
    students.push_back("Ananta");
    students.push_back("Ayushee");
    students.push_back("Chaitanya");
    students.push_back("Aesha");
    students.push_back("Devang");
    students.push_back("Mahlegha");
    students.push_back("Teresa");

    for(int i=0; i<students.size(); i++)
        std::cout << students[i] << " ";
    std::cout << "\n";
    std::cout << students.front() << "\n";
    std::cout << students.back() << "\n";

    std::sort(students.begin(), students.end());

    for(int i=0; i<students.size(); i++)
        std::cout << students[i] << " ";
    std::cout << "\n";

    std::vector<int> numbers(5,1);
    std::cout << "Size: " << numbers.size() << "\n";
    std::cout << "Max size: " << numbers.max_size() << "\n";

    for(int i=0; i<numbers.size(); i++)
        std::cout << numbers[i] << " ";
    std::cout << "\n";

    numbers.push_back(33);
    std::cout << "Size: " << numbers.size() << "\n";
    for(int i=0; i<numbers.size(); i++)
        std::cout << numbers[i] << " ";
    std::cout << "\n";
    return 0;
}