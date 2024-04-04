// Macros Side-Effects
// macrosSideEffects.cpp

#include <iostream>
#define PI 3.14
#define SQUARE(X)  ((X) * (X))  

#define doublenumber(x) 2 * x 
#define d double
int main()
{
  d r = 2.35;
  std::cout << "PI(r++)^2 is " << PI * SQUARE(r++) << std::endl;
  // SQUARE(r++) ->  ((X) * (X))  -> (r++)*(r++) 
  std::cout << "r is now " << r << std::endl;
  int a=2;
  std::cout << doublenumber(a++) << "\n";
  std::cout << a << "\n"; // 3
}

#undef doublenumber // frees doublenumber
int doublenumber;
#define doublenumber(ascka)