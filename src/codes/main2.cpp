/**
 * @brief     Chaine.h
 * @date      June 29, 2015
 * @author    Diedhiou Ahmed Bachir
 * @version   1.1
 */


#include <iostream>
#include "Chaine.h"
#include <stdlib.h>
using namespace std;

/**
   *Main class
   *@param argc An integer argument count of the command line arguments
   *@param argv An argument vector of a command line arguments
   *@return an integer 0 upon exit success
   */ 


int main(int argc, char **argv){ 

/**
*Creates an object of type "Chaine"
*/

Chaine A;

/**
*Standard output
*/

for(int i=1;i<argc ;i++){
A.setMot(argv[i]);

cout <<"Mot :"<<argv[i]<<endl;

if (A.Estpalindrom() ==0){
  
cout << "Palindrome :false"<<endl;

}
else { cout << "Palindrome :true"<<endl;}

cout << "le mot ordonne est :" <<A.Tri()<<endl ; 
cout<<"la longueur du mot est :"<<A.getMot().size()<<endl; 
cout <<"*************************"<<endl;
}

return 0;

}

