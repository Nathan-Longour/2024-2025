#include<iostream>
using namespace std;
#include"Complexe.hpp"

int main() {
	Complexe z1(1,1), z2(2, -1), z3(3,-6),z4(3,-4),z;
	float ar, mod;
	z = (z1 / z2 * z1 / z2) + (z3.Conjuge() / (z4));
	z.Afficher();
	mod = z.Module();
	ar = z.Arg();
	cout << "module = " << mod << " argument " << ar << endl;
	return 0;
}