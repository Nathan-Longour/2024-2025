#include<iostream>
using namespace std;
#include"Syracuse.hpp"

Syracuse::Syracuse(unsigned int N, unsigned int E) {
	n = N;
	tab = new unsigned int[n];
	tab[0] = E;
	for (unsigned int  i = 0; i < n-1; i++)
	{
		if ( tab[i] % 2 == 0)
		{
			tab[i+1] = tab[i] / 2;
		}
		else {
			tab[i+1] = 3*tab[i] +1;
		}
	}
}

void Syracuse::Affiche() const {
	
	for (unsigned int i = 0; i < n; i++)
	{
		cout << tab[i] << endl;
	}
}
unsigned int Syracuse::Terme()const {
	return n;
}

Syracuse::~Syracuse() {
	delete[] tab;
}

unsigned int Syracuse::TpsVol()const {
	unsigned int tp;
	for (unsigned int i = 0; i < n; i++)
	{
		if (tab[i]==1) {
			return tp=i;
		}
	}
}