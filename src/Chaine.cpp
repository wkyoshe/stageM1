/**
 * @brief     Chaine.h
 * @date      June 29, 2015
 * @author    Diedhiou Ahmed Bachir
 * @version   1.1
 */
 
#include <algorithm>
#include <iostream>
#include <string>
#include "Chaine.h"
using namespace std;



/**
 *@returns sorted string in alphabetic order
 */
string Chaine::Tri( ){
 	std::sort(mot.begin(), mot.end());
	return (mot);
 }

/**
 *@return the string 
 */
 
string Chaine::getMot(){
	return mot ;
}


/**
 *sets the string 
 */
 
void Chaine::setMot(string mot){
	this->mot=mot;
}


/**
 *return true if string is a palindrome  
 */
bool Chaine::Estpalindrom(){
if(equal(mot.begin(), mot.end(), mot.rbegin()))
        	return true  ; 
	else 
		return false ; 
}






