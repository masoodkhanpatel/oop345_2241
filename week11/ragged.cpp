// Ragged Arrays
// raggedArray.cpp

#include <iostream>
#include <iomanip>

int main ()
{
  char *name[] = { "Marg", "Jeremy", "Christopher", "Homer" };
  // each element in array is char[] (or) denoted as char *
  // char * (name[])

  int **arr;
  arr = new int*[5];

  for (int i = 0; i < 4; i++)
    std::cout << std::setw(7) << &name[i] << std::setw(7) << "\t"<< std::dec << ' ' << name[i] << "\t" << sizeof(&name[i])/sizeof(char) << '\n';
  std::cout << std::endl;
}