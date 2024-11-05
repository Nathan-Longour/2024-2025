#include <iostream>
using namespace std;

#include"ChaineCar.h"

void ChaineCar::Affiche(void)const {
	for (unsigned int i = 0; i < len; i++)
	{
		cout << p_str[i];
	}
	cout << endl;
}

void ChaineCar::MintoMaj(void) {
	for (unsigned int i = 0; i < len; i++)
	{
		if ( (p_str[i] <= 'z') && (p_str[i] >= 'a'))
		{
			p_str[i] = p_str[i] - 'a' + 'A';
		}
	}
}

ChaineCar::ChaineCar(const char* c) {
	len = 0;
	unsigned int i = 0;
	while (c[i] != '\0')
	{
		len++;
		i++;
	}
	p_str = new char[len];
	for (unsigned int n = 0; n < len; n++)
	{
		p_str[n] = c[n];
	}
}

ChaineCar::ChaineCar(const ChaineCar& c) {
	len = c.len;
	p_str = new char[len];
	for (unsigned int i = 0; i < c.len; i++)
	{
		p_str[i] = c.p_str[i];
	}
}

ChaineCar::~ChaineCar(void) {
	cout << "destruction " << endl;
	delete[] p_str;
}

ChaineCar ChaineCar::Ajoute(const ChaineCar& c)const {
	ChaineCar a;
	delete[] a.p_str;
	a.len = len + c.len;
	a.p_str = new char[len + c.len];
	for (unsigned int i = 0; i < len; i++)
	{
		a.p_str[i] = p_str[i];
	}
	for (unsigned int n = 0; n < c.len; n++)
	{
		a.p_str[len + n] = c.p_str[n];
	}
	return a;
}

ChaineCar ChaineCar::Ajoute(char* c)const {
	ChaineCar a;
	delete[] a.p_str;
	unsigned int i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	a.len = len + i;
	a.p_str = new char[len + i];
	for (unsigned int p = 0; p < len; p++)
	{
		a.p_str[p] = p_str[p];
	}
	for (unsigned int n = 0; n < i; n++)
	{
		a.p_str[len + n] = c[n];
	}
	return a;
}

ChaineCar& ChaineCar::operator=(ChaineCar a) {
	len = a.len;
	p_str = new char[len];
	for (unsigned int i = 0; i < a.len; i++)
	{
		p_str[i] = a.p_str[i];
	}
	return *this;
}

ChaineCar operator+(ChaineCar a, ChaineCar b) {
	ChaineCar c;
	c = a.Ajoute(b);
	return c;
}

ostream& operator<<(ostream& flux, const ChaineCar& str) {
	str.Affiche(flux);
	return flux;
}

void ChaineCar::Affiche(ostream& flux)const {
	for (unsigned int i = 0; i < len; i++)
	{
		flux << p_str[i];
	}
	flux << endl;
}


