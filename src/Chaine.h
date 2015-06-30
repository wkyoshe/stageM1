/**
 * @brief     Chaine.h
 * @date      June 29, 2015
 * @author    Diedhiou Ahmed Bachir
 * @version   1.1
 */

#ifndef CHAINE_H
#define CHAINE_H
#include <string>
using namespace std;


class Chaine
{
/**
 *@param mot is a variable
 */
private:
string mot;

/**
 *Accessors and mutators
 */
public:
string getMot();
void setMot(string mot);

/**
 *functions
 */
public:
string Tri( );
bool Estpalindrom();


};
