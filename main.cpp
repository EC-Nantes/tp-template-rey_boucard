#include <stdio.h>
#include <iostream>
#include "Point.hpp"
#include "Forme.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"

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

   Rectangle<int, double> rectangle(truc, 2, 5);
   cout << rectangle.perimetre() << endl;
   cout << rectangle.surface() << endl;
   cout << rectangle << endl;

   Carre<int, double> carre(truc, 3);
   cout << carre.perimetre() << endl;
   cout << carre.surface() << endl;
   cout << carre << endl;


   return 0;
}
