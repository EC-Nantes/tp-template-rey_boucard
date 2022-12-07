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

template<typename T, typename S>
class Forme;

template<typename T, typename S>
std::ostream& operator<<(std::ostream &, Forme<T, S> const&);

template<typename T, typename S>
class Forme {
protected:
    Point<T> pt;
public:
	Forme(Point<T> pt);
    virtual S perimetre() = 0;
    virtual S surface() = 0;

	friend ostream& operator<< <T, S>(ostream& os, Forme<T, S> const &R);
};

template<typename T, typename S>
Forme<T, S>::Forme(Point<T> pt){
    this->pt = pt;
}

template<typename T, typename S>
ostream& operator<< (ostream& os, Forme<T, S> const &forme){
	os << "Centre de la forme :" ;
    os << forme.pt << endl;
	return os;
}

#endif /* FORME_H_ */