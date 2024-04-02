// Replicated Base Classes
// replicate.cpp

#include "NLitCube.h"

int main()
{
  NCube    sc("a named cube", 2);
  NLitObj  sl("a named lit object", 0x55bb77aaUL);
  NLitCube lc("a named lit cube", 2, 0xccFF33FFUL);

  sc.display();
  sl.display();

  lc.NCube::display();   // through NCube
  lc.NLitObj::display(); // through NLitObj
}