#include <stdio.h>
#include <iostream>
#include "Point.hpp"
#include "Forme.hpp"

using namespace std;

int main() {
   // printf() displays the string inside quotation
   std::cout << "Hello world !\n" << std::endl;

   int a = 3;
   int b = 5;

   Point<int> truc(a,b);
   cout << "X : " << truc.getX() << "  Y : " << truc.getY() << endl;
   truc.translater(2, 6);
   cout << "X : " << truc.getX() << "  Y : " << truc.getY() << endl;
   Point<int> toc(truc);
   cout << "X : " << toc.getX() << "  Y : " << toc.getY() << endl;
   cout << truc;

   Forme<int> carre(truc);
   cout << carre << endl;
   return 0;
}
