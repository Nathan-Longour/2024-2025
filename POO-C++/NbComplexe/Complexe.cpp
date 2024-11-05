#include <iostream>
using namespace std;
#include "Complexe.hpp"

Complexe::Complexe(float A, float B) {
	cout << "construction d un complexe" << endl;
	a = A;
	b = B;
}

Complexe::~Complexe() {
	cout << "destruction d un point" << endl;
}

void Complexe::Afficher()const {
	cout << a << " +i " << b << endl;
}

Complexe Complexe::Somme(const Complexe& c2)const {
	Complexe c(a+c2.a,b+c2.b);
	return c;
}

Complexe Complexe::Multi(const Complexe& c2)const {
	Complexe c((a * c2.a - b * c2.b), (a * c2.b + c2.a * b));
	return c;
}

Complexe operator+(const Complexe& c, const Complexe& c2) {
	Complexe res;
	res = c.Somme(c2);
	return res;
}

Complexe operator*(const Complexe& c, const Complexe& c2) {
	Complexe m;
	m = c.Multi(c2);
	return m;
}

ostream& operator<<(ostream& flux, const Complexe& z) {
	z.Afficher(flux);
	return flux;
}

void Complexe::Afficher(ostream& flux) const {
	flux <<  a << " +i " << b << endl;
}

Complexe Complexe::Div(const Complexe& z)const {
	Complexe c = z.Conjuge();
	Complexe res;
	res.a = (a * c.a - b * c.b)/(z.a*c.a - z.b*c.b);
	res.b = (a * c.b + b * c.a)/(z.a * c.a - z.b * c.b);
	return res;
}

Complexe Complexe::Sous(const Complexe& z)const {
	Complexe res(a - z.a, b - z.b);
	return res;
}

bool Complexe::Equal(const Complexe& z)const {
	if (a == z.a && b==z.b)
	{
		return true;
	}
	else {
		return false;
	}
}

Complexe operator-(const Complexe& c, const Complexe& c2) {
	Complexe res;
	res = c.Sous(c2);
	return res;
}

Complexe operator/(const Complexe& c, const Complexe& c2) {
	Complexe res;
	res = c.Div(c2);
	return res;
}

Complexe operator==(const Complexe& c, const Complexe& c2) {
	return c.Equal(c2);
}