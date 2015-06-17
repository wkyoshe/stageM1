#include "operation.h"
#include <iostream>
using namespace std;
 
operation::operation() : x(0), y(0)
{}
 
operation::operation(double x, double y) : x(x), y(y)
{}
 
void operation::setX(double x)
{
    this->x = x;
}
 
void operation::setY(double y)
{
    this->y = y;
}
 
double operation::getX() const
{
    return this->x;
} 
 
double operation::getY() const
{
    return this->y;
} 
 
 
 
double operation::addition( )
{
return (x + y);
}

double operation::substruction( )
{
  return (x - y);
}
double operation::multiplication( )
{
  return (x * y);
}

double operation::division( )
{if(y != 0)
    {
      return x / y;

    }
  cout << "Error: division by zero.\n";
  return 0;
}
