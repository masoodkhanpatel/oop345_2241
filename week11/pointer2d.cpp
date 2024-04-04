// Dynamically Allocated 2d Arrays
// dynamic2D.cpp

#include <iostream>
#include <iomanip>
#include <vector>

int main ()
{
  int r;
  const int c=5;
  int (*a)[c]; // diff from dynamic2d.cpp



  std::cout << "Number of rows : ";
  std::cin >> r;
//   std::cout << "Number of columns : ";
//   std::cin >> c;

  

  a = new int[r][c]; // diff from dynamic2d.cpp

  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      a[i][j] = (i + 1) * (j + 1);

  std::cout << "   ";

  for (int j = 0; j < c; j++)
    std::cout << std::setw(4) << j + 1;
  std::cout << std::endl;

  for (int i = 0; i < r; i++)
  {
    std::cout << std::setw(3) << i + 1;
    for (int j = 0; j < c; j++)
      std::cout << std::setw(4) << a[i][j];
    std::cout << std::endl;
  }

  for (int i = 0; i < r; i++)
    delete [] a[i]; // de-allocate row i
  delete [] a; // de-allocate pointers to rows
}