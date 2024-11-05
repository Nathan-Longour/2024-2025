#include "Heure.hpp"
#include <iostream>
using namespace std;

int main() {
	int diff = 0;
	Heure h1, h2(10, 8, 0);
	h1.Affiche();
	h2.Affiche();
	h2.AddSec(10);
	h2.Affiche();
	diff = h2.HourDif(h1);
	cout << "diff de temps " << diff << endl;
	return 0;
}