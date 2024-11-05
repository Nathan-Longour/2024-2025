#include "Point.hpp"
#include<iostream>
#include <math.h>
using namespace std;
Point::Point(float X, float Y) {
	cout << "je construit un point " << endl;
	x = X;
	y = Y;
}
Point::~Point() {
	cout << "effacement d'un point" << endl;
}

void Point::Afficher(void)const {
	cout << "le point a pour coordonee en x " << x << " et en y " << y << endl;
}

void Point::Translater(float X, float Y) {
	x += X;
	y += Y;
}

float Point::Distance(const Point &a) {
	float dist = sqrt((a.x - x) * (a.x - x) + (a.y - y) * (a.y - y));
	return dist;
}

Polygone::Polygone() {
	unsigned int x,y;
	cout << "saisir le nombre de point" << endl;
	cin >> NB;
	pp = new Point[NB];
	for (unsigned int i = 0; i < NB; i++)
	{
		cout << "entrer les cordonee en x"<<endl;
		cin >> x;
		cout << "entrer les cordonee en y"<<endl;
		cin >> y;
		pp[i].Translater(x, y);
	}
}
void Polygone::Affiche()const {
	for (unsigned int i = 0; i < NB; i++)
	{
		pp[i].Afficher();
	}
}
Polygone::~Polygone() {
	cout << "destruction de tout" << endl;
	delete []pp;
}

float Polygone::DistP() {
	float peri=0;
	for (unsigned int i = 1; i < NB; i++)
	{
		peri += pp[i - 1].Distance(pp[i]);
	}
	peri += pp[NB-1].Distance(pp[0]);
	return peri;
}

NamedPoint::NamedPoint(float X, float Y, char n) {
	cout << "construction d'un point nomee" << endl;
	nom = n;
	NamedPoint::Translater(X, Y);
}