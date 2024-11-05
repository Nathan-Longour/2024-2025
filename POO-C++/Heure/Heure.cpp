#include"Heure.hpp"
#include <iostream>
using namespace std;
Heure::Heure(unsigned int H, unsigned int M, unsigned int S)
{
	SetH(H);
	SetM(M);
	SetS(S);
}
Heure::Heure() {
	SetH(9);
	SetM(30);
	SetS(0);
}

int Heure::HourDif(const Heure& h2) {
	int ts1, ts2, td;
	ts1 = Heure::ConvHs();
	ts2 = h2.ConvHs();
	td = ts2 - ts1;
	return td;
}

void Heure::SetH(int HH) {
	h = HH;
}
void Heure::SetM(int MM) {
	m = MM;
}
void Heure::SetS(int SS) {
	h = SS;
}
int Heure::getH()const {
	return h;
}
int Heure::getM()const {
	return m;
}
int Heure::getS()const {
	return s;
}
int Heure::ConvHs()const {
	int sec;
	sec = 3600 * getH() + 60 * getM() + getS();
	return sec;
}
void Heure::ConvsH(int sec) {
	h = (sec / 3600) % 24;
	m = (sec / 60) % 60;
	s = ((sec / 3600) % 24) - ((sec / 60) % 60);
}
void Heure::Affiche()const {
	cout << "h = " << h << " m= " << m << " s= " << s << endl;
}
void Heure::AddSec(int sec) {
	Heure::ConvsH(sec + Heure::ConvHs());
}
