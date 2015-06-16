#include <iostream>
using namespace std;
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
}


