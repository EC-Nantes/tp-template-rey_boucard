/*
 * Forme.hpp
 *
 *  Created on: 07 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */

#ifndef FORME_H_
#define FORME_H_

#include <iostream>
#include <fstream>
#include <string.h>
#include "Point.hpp"

using namespace std;

template<typename T>
class Forme;

template<typename T>
std::ostream& operator<<(std::ostream &, Forme<T> const&);

template<typename T>
class Forme {
protected:
    Point<T> pt;
public:
	Forme(Point<T> pt);

	friend ostream& operator<< <T>(ostream& os, Forme<T> const &R);
};

template<typename T>
Forme<T>::Forme(Point<T> pt){
    this->pt = pt;
}

template<typename T>
ostream& operator<< (ostream& os, Forme<T> const &forme){
	os << "Centre de la forme :\n" << endl;
    os << forme.pt << endl;
	return os;
}

#endif /* FORME_H_ */