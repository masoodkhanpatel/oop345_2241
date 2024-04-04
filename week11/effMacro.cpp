// Macro Efficiency
// effMacro.cpp

#include <iostream>
#include <ctime>
#define PRODUCT(X, Y) (X)*(Y)
#define NITER 1000000000

double product(double x, double y)
{
  return x * y;
}

int main ()
{
  double x;
  int i;
  std::clock_t c0, c1;

    // Macro
  x = 1;
  c0 = std::clock(); // start
  for (i = 0; i < NITER; i++)
    x = PRODUCT(x, 1.0000000001);
  c1 = std::clock(); // end
  auto timem = (double)(c1-c0)/CLOCKS_PER_SEC; // duration
  std::cout << "Process time of Macro is "
            << timem << " secs\n";
  std::cout << "Value of x is " << x << std::endl;


  // Function
  x = 1;
  c0 = std::clock();
  for (i = 0; i < NITER; i++)
    x = product(x, 1.0000000001);
  c1 = clock();

  auto timef = (double)(c1-c0)/CLOCKS_PER_SEC ;
  std::cout << "Process time of function is "
            << timef << " secs\n";
  std::cout << "Value of x is " << x << std::endl;

    if (timem<timef)
        std::cout << "Macro is faster\n";
    else
        std::cout << "Function is faster\n";

}