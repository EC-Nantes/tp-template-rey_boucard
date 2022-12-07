/*
 * Carre.hpp
 *
 *  Created on: 07 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */

#ifndef CARRE_H_
#define CARRE_H_

#include <iostream>
#include <fstream>
#include <string.h>
#include "Rectangle.hpp"

template<typename T, typename S>
class Carre;

template<typename T, typename S>
std::ostream& operator<<(std::ostream &, Carre<T, S> const&);

template<typename T, typename S>
class Carre : public Rectangle<T, S>{
protected:
    T largeur;
public:
	Carre(Point<T> pt, T largeur);
    S perimetre();
    S surface();

	friend ostream& operator<< <T, S>(ostream& os, Carre<T, S> const &R);
};

template<typename T, typename S>
Carre<T, S>::Carre(Point<T> pt, T largeur) : Rectangle<T, S>(pt, largeur, largeur){
    this->largeur = largeur;
}

template<typename T, typename S>
S Carre<T, S>::perimetre(){
    return (largeur *4);
}

template<typename T, typename S>
S Carre<T, S>::surface(){
    return largeur * largeur;
}

template<typename T, typename S>
ostream& operator<< (ostream& os, Carre<T, S> const &forme){
	os << "Cercle de centre " << forme.pt<< " de largeur : " << forme.largeur << endl;
    os << "Type de forme : Carre" << endl;
	return os;
}

#endif /* RECTAGNLE_H_ */