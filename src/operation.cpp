/*!
 * \breif     operation.h
 * \Date      june 19, 2015
 * \author:   kyoshe winstone
 * \version   1.1
 */  
     
#include "operation.h"
#include <iostream>
using namespace std;

class operation{
         public:
               
                 //! Default Constructor
                  /*!
                    *constructs an empty object
                   */  
  

operation::operation() : x(0), y(0)
{}
  /**
   *Constructs an objects with two arguments x and y
   */
operation::operation(double x, double y) : x(x), y(y)
{}

  /**
   *set the value of x
   */
void operation::setX(double x)
{
  this->x = x;
}
 
  /**
   *set the value of y
   */
void operation::setY(double y)
{
  this->y = y;
}

  /**
   *return the value of x
   */
double operation::getX() const
{
  return this->x;
} 

  /**
   *set the value of y
   */
double operation::getY() const
{
  return this->y;
} 
 

  /**
   *returns the sum of two numbers
   */
double operation::addition( )
{
  return (x + y);
}

  /**
   *returns the diff of two numbers
   */
double operation::substruction( )
{
  return (x - y);
}

  /**
   *returns the product of two numbers
   */
double operation::multiplication( )
{
  return (x * y);
}

  /**
   *returns the quotient of two numbers
   */
double operation::division( )
{if(y != 0)
    {
      return x / y;

    }
  //cout << "Error: division by zero.\n";
  //return 0;
}
}
