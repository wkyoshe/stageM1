#ifndef OPERATION_H
#define OPERATION_H
 
#include <iostream>
using namespace std;
 
class operation
{
public:
  // Constructors
  operation();
  operation(double x, double y);
 
  //Accessors and mutators
  void setX(double x);
  void setY(double y);
  double getX() const;
  double getY() const;
 
  // methods
 
  double addition();
  double substruction();
  double multiplication();
  double division();
 
 
private: 
  double x,y;
};
 
#endif
