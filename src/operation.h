/*!
 * \breif     operation.h
 * \Date      june 19, 2015
 * \author:   kyoshe winstone
 * \version   1.1
 */
#ifndef OPERATION_H
#define OPERATION_H
 
#include <iostream>
using namespace std;
//!operation class 
class operation
{
 public:
  //! Default Constructor
   /*!
    *constructs an empty object
   */
  operation();
  
  /**
   *Constructs an objects with two arguments x and y
   */
  operation(double x, double y);
  
  /**
   *set the value of x
   */
  void setX(double x);
  /**
   *set the value of y
   */
  void setY(double y);
  /**
   *return the value of x
   */
  double getX() const;
  /**
   *return the value of y
   */
  double getY() const;
  
   
  /**
   *returns a double, The sum of two numbers
   */
  double addition();
  /**
   *returns a double, The difference of two numbers
   */
  double substruction();
  /**
   *returns a double, The product of two numbers
   */
  double multiplication();
  /**
   *returns a double, The quotient of two numbers
   */
  double division();
  
   /**
    *@param x is an attribute
    *@param y is an attribute too
    *
    */
 private: 
         double x,y; /*!<private double values */
         
     
         
};
 
#endif
