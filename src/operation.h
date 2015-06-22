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
 
   /**
    *@param x is a variable
    *@param y is a variable too
    */
 private: 
  double x,y;
};
/**
    operation.cpp
    Purpose: Perform basic operations of numbers

    @author Kyoshe Winstone
    @version 1.0
*/

 
#endif
