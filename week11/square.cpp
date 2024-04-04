// Macros A Potential Error
// macrosPotError.cpp

#include <iostream>
#define PI 3.14
#define SQUARE(X)  ((X)*(X))

int main()
{
  std::cout << "PI(2.35)^2 is " << PI * SQUARE(2.35+2) << std::endl;
  // PI * SQUARE(2.35) = 3.14 * 2.35 * 2.35
  // In normal function call, PI * SQUARE(2.35+2) = PI * SQUARE(4.35)
  // But in macro...
  // PI * SQUARE(2.35+2) = 3.14 * 2.35+2 * 2.35+2
  // BODMAS (or) precedence eval --> (3.14 * 2.35)+(2 * 2.35)+2
  // Expected // PI * SQUARE(2.35+2) = 3.14 * (2.35+2) * (2.35+2)
}