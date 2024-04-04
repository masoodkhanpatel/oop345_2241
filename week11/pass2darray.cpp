// Two-Dimensional Arrays
// pass2DArray.cpp

#include <iostream>


void foo(int a[][3], int r, int c);

int main ()
{
  int a[2][3] = {{11, 12, 13}, {21, 22, 23}};
  foo(a, 2, 3);
  // std::cout << &a[5][1] << "\n";
}

void foo(int a[][3], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
      std::cout << &a[i][j] << ':' << a[i][j] << "\n";
  }
  
}