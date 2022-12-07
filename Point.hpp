/*
 * Point.hpp
 *
 *  Created on: 07 dec. 2022
 *      Author: REY Maxime, BOUCARD Romain
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include <map>

using namespace std;

template<typename T>
class Point {
protected:
    T x;
    T y;
public:
	Point(T _x, T _y);
    Point(Point<T> const &);
    T getX() const;
    void setX(T x);
    T getY() const;
    void setY(T x);
    void translater(T a, T b);

	friend ostream& operator<< <T>(ostream& os, Point<T> const &R);
};

template<typename T>
Point<T>::Point(T x, T y){
    this->x = x;
    this->y = y;
}

template<typename T>
Point<T>::Point(Point<T> const & point){
    this->x = point.getX();
    this->y = point.getY();
}

template<typename T>
T Point<T>::getX() const{
    return this->x;
}

template<typename T>
void Point<T>::setX(T x){
    this->x = x;
}

template<typename T>
T Point<T>::getY() const{
    return this->y;
}

template<typename T>
void Point<T>::setY(T y){
    this->y = y;
}

template<typename T>
void Point<T>::translater(T a, T b){
    this->x += a;
    this->y += b;
}

template<typename T>
ostream& operator<<(ostream& os, Point<T> const &point){
	os << "Coordonnees :\n" << "x : " << point.getX() << "  y : " << point.getY() << endl;
	return os;
}

#endif /* POINT_H_ */
