#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
#include "operation.h"
 
int main(int argc, char **argv) 
{ 
  double x =0, y=0;
  if(argc == 3){
    x = atof(argv[1]);
    y = atof(argv[2]);
  }
  operation B(x,y);
    
  cout << B.getX() << "+" << B.getY() << "=" << B.addition() << endl;
  cout << B.getX() << "-" << B.getY() << "=" << B.substruction() << endl;
  cout << B.getX() << "*" << B.getY() << "=" << B.multiplication() << endl;
  cout << B.getX() << "/" << B.getY() << "=" << B.division() << endl;
    return 0;
}
