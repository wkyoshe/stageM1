#include <iostream>
#include “operation.hpp”
int main ()
{
  int num1, num2;
 
  std::cout << "Enter a number :\n";
  std::cin >> num1; 
  std::cout << "Enter another number :\n";
  std::cin>> num2;
  int z,r,q,p;
  z = addition (num1,num2);
  q =substruction (num1,num2);
  p =multiplication (num1,num2);
  r = division (num1,num2);
  std::cout << "a+b = " << z<<std::endl;
  std::cout << "a-b = " << q<<std::endl;
  std::cout << "a*b = " << p<<std::endl;
  std::cout << "a/b = " << r<<std::endl;
  return 0;
}
