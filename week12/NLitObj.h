// Replicated Base Classes
// NLitObj.h

#include "Name.h"
typedef unsigned long int ulong;

class NLitObj : virtual public Name
{
  ulong color;
public:
  NLitObj(const char* n, ulong c);
  ulong emission() const;
};