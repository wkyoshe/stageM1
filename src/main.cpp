/*!
 * \breif     operation.h
 * \Date      june 19, 2015
 * \author:   kyoshe winstone
 * \version   1.1
 */
#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
#include "operation.h"

  /**
   *Main class
   *@param argc An integer argument count of the command line arguments
   *@param argv An argument vector of a command line arguments
   *Return an integer 0 upon exit success
   */
int  main(int argc, char **argv) 
{ 
  
  /**
    *@param x is variable
    *@param y is  variable too
    *
    */
  double x =0, y=0;
  
  if(argc == 3){
    x = atof(argv[1]);
    y = atof(argv[2]);
  }
  /**
   *Creates an object of type "operation"
   */
  operation B(x,y);
  
    //! Standard output
    /*!
     *Displays the outputs
    */ 
  cout << B.getX() << "+" << B.getY() << "=" << B.addition() << endl;
  cout << B.getX() << "-" << B.getY() << "=" << B.substruction() << endl;
  cout << B.getX() << "*" << B.getY() << "=" << B.multiplication() << endl;
  cout << B.getX() << "/" << B.getY() << "=" << B.division() << endl;
  return 0;
}
