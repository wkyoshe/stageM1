#include <algorithm>
#include <iostream>
#include <string>
#include "Chaine.h"
using namespace std;

	
string Chaine ::Tri( ){
 std::sort(mot.begin(), mot.end());
return (mot);
 }

string Chaine :: getMot(){
return mot ;
}

string Chaine::Estpalindrom(){
if(equal(mot.begin(), mot.end(), mot.rbegin()))
        	return "true" ; 
	else 
		return "false" ; 
}



