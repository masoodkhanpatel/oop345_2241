#ifndef SHAPE_H
#define SHAPE_H
// Multiple Inheritance - Shape
// Shape.h

class Shape
{
public:
  virtual double volume() const = 0; // pure virtual function
  // derived classes must override
};
#endif