#include<iostream>
using namespace std;
#include"Syracuse.hpp"

int main() {
	Syracuse s(100, 127);
	cout << "temps de vol"<< s.TpsVol()<<endl;
	s.Affiche();
	cout << "nombre d element "<< s.Terme()<<endl;
	return 0;
}