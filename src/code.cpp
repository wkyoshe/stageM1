/**
 *MyProgram code
 *Created on: june 19, 2015
 *@author kyoshe winstone
 *
 */
#include <iostream>
using namespace std;
 
 //!operation class
 class operation
 {
 public:
/**
 *A funtion that adds two numbers
 *
 *Returns an double
 */                                                                         
int addition (double a, double b)
{

  return (a+b);
}
/**
 *A fucntion that substructs two numbers
 *
 *Returns an double
 */                                                             
int substruction (double a, double b)
{
  return (a-b);
}
/**
 * A function that multiplies two numbers
 *
 *Returns a double
 */                                                           
int multiplication (double a, double b)
{
  return (a*b);
}
/**
 * A function that divides two numbers
 *
 *Returns a double
 */                                                               
double division (double a, double b)
{
  if(b != 0)  /** The devisor must be non-zero number */
    {
      return a / b;

    }
  cout << "Error: division by zero.\n"; /** Else an error will be detected*/
  return 0;
}

/*!
  *My class
 */
 /*!
  *Here we test our functions
 */
int main ()
{
 /**
  *@param num1 a double argument(entry)
  *
  *@param num2 a double argument(entry)
  */ 
  int num1, num2;
 
	cout << "Enter a number :\n";
	cin >> num1; 
	cout << "Enter another number :\n";
	cin>> num2;
  int z,r,q,p;
  z = addition (num1,num2);
  q =substruction (num1,num2);
  p =multiplication (num1,num2);
  r = division (num1,num2);
  cout << "a+b = " << z<<endl;
  cout << "a-b = " << q<<endl;
  cout << "a*b = " << p<<endl;
  cout << "a/b = " << r<<endl;
}
}
