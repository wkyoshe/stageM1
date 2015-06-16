#include<iostream>
#include <operation.hpp>
using namespace std;

class operation{


//a function that adds two numbers                                                                  
int addition (int a, int b)
{

  return (a+b);
}

//a function that subsructs two numbers                                                             
int substruction (int a, int b)
{
  return (a-b);
}

//a function that multiplies  two numbers                                                           
int multiplication (int a, int b)
{
  return (a*b);
}


//a function that divides two numbers                                                               
double division (double a, double b)
{
  if(b != 0)
    {
      return a / b;

    }
  cout << "Error: division by zero.\n";
  return 0;
}
}