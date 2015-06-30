#include <iostream>
#include <stdlib.h>
#include "Chaine.h"
using namespace std;


int main(int argc, char **argv){  


Chaine A;
A.mot=argv[1];
//cout << "SAISIE DE LA CHAINE "<< endl ;
//cout<<"Tapez la chaine:";cin>> A.mot ;	
A.Tri(); 
cout << "le mot ordonne est :" <<A.getMot()<<endl ;  // obtenir le mot trié 
cout<<"la longueur du mot est :"<<A.getMot().size()<<endl; // obetnir taille du mot

cout<<A.Estpalindrom()<<endl; // verfifier si c'est un palindrome

  /* for ( int i = 1; i < argc; ++i ) {
      cout << argv[i] << endl;
   }*/

return 0;

}
