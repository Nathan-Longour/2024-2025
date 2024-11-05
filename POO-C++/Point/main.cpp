#include "Point.hpp"
#include <iostream>
using namespace std;

int main() {
	Point* pp1, *pp2;
	pp1 = new Point(400, -228);
	pp2 = new NamedPoint(-3, 8, 'y'); // on peut associée un point a un de ses enfant mais pas le contraire
	pp1->Afficher(); // aficher du point nomée car pointeur associée a un point
	pp2->Afficher(); //afficher de point nomée car virtual dans le afficher
	delete pp2;//delete classique de point
	delete pp1;// delete du point nomée car virtual sur destructeur 
	return 0;

}// destruction du tableau statique