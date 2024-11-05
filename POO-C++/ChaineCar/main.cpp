#include<iostream>
using namespace std;

#include"ChaineCar.h"

int main(void)
{
	ChaineCar nom("MAYER"), prenom("Kevin"),t;
	t= nom.Ajoute(prenom);
	t.Affiche();
	ChaineCar specialite("Decathlon");
	ChaineCar sportif;
	sportif = nom + " " + prenom + ": " + specialite;//concatenation
	cout << sportif << endl;//affichage
	return 0;
}
