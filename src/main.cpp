#include <iostream>
#include <operation.hpp>
int main ()
{
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
  return 0;
}
