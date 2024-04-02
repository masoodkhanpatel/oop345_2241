// Multiple Inheritance - LitCube
// LitCube.h

#include "Cube.h"
#include "LitObj.h"

class LitCube : public Cube, public LitObj // multiple inheritance
{
public:
  LitCube(double len, ulong c);
};