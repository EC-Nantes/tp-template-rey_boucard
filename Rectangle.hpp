/*
 * Rectangle.hpp
 *
 *  Created on: 07 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include <fstream>
#include <string.h>
#include "Forme.hpp"

template<typename T, typename S>
class Rectangle;

template<typename T, typename S>
std::ostream& operator<<(std::ostream &, Rectangle<T, S> const&);

template<typename T, typename S>
class Rectangle : public Forme<T, S>{
protected:
    T largeur;
    T hauteur;
public:
	Rectangle(Point<T> pt, T largeur, T hauteur);
    S perimetre();
    S surface();

	friend ostream& operator<< <T, S>(ostream& os, Rectangle<T, S> const &R);
};

template<typename T, typename S>
Rectangle<T, S>::Rectangle(Point<T> pt, T largeur, T hauteur) : Forme<T, S>(pt){
    this->largeur = largeur;
    this->hauteur = hauteur;
}

template<typename T, typename S>
S Rectangle<T, S>::perimetre(){
    return (hauteur *2) + (largeur *2);
}

template<typename T, typename S>
S Rectangle<T, S>::surface(){
    return hauteur * largeur;
}

template<typename T, typename S>
ostream& operator<< (ostream& os, Rectangle<T, S> const &forme){
	os << "Cercle de centre " << forme.pt<< " de largeur : " << forme.largeur << " et d'hauteur : " << forme.hauteur << endl;
    os << "Type de forme : Rectangle" << endl;
	return os;
}

#endif /* RECTAGNLE_H_ */