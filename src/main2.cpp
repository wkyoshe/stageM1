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
A.setMot(argv[1]);

if (argc == 2){

/**
*Standard output
*/
if (A.Estpalindrom() ==0){cout << "false"<<endl;}
else { cout << "true"<<endl;} 
cout << "le mot ordonne est :" <<A.Tri()<<endl ; 
cout<<"la longueur du mot est :"<<A.getMot().size()<<endl; 
}
else { cout <<"****Veuillez saisir un  seul mot ****"<<endl;}

return 0;

}

