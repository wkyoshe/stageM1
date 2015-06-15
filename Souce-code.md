```
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
  int z,r,q,p;
  z = addition (5,3);
  q =substruction (5,6);
  p =multiplication (5,3);
  r = division (5,0);
  cout << "a+b = " << z<<endl;
  cout << "a-b = " << q<<endl;
  cout << "a*b = " << p<<endl;
  cout << "a/b = " << r<<endl;
}
```

