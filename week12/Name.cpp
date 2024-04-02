// Replicated Base Classes
// Name.cpp

#include <iostream>
#include <iomanip>
#include "Name.h"

const int MN = 5;

Name::Name(const char* n) : name(n) {}

void Name::display() const
{
  std::cout << std::left << std::setw(MN) << name << std::right << '\n';
}