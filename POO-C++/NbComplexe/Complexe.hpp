#include <math.h>
#include<iostream>
class Complexe
{
private:
	float a;
	float b;

public:
	Complexe(float A = 0, float B = 0);
	~Complexe();
	void Afficher(void)const;

	void Afficher(ostream& flux)const;

	float Re()const {

		return a;
	}

	float Im()const {

		return b;
	}

	float Module()const {

		return sqrt(pow(a, 2) + pow(b, 2));
	}

	Complexe Somme(const Complexe& c2)const;

	Complexe Multi(const Complexe& c2)const;

	float Arg()const {
		return atan(b / a);
	}

	Complexe Conjuge()const {
		Complexe c(a, -b);
		return c;
	}

	Complexe Oppose()const {
		Complexe z(-a, -b);
		return z;
	}

	Complexe Div(const Complexe& z)const;

	Complexe Sous(const Complexe& z)const;

	bool Equal(const Complexe& z)const;
};

Complexe operator+(const Complexe& c, const Complexe& c2);

Complexe operator*(const Complexe& c, const Complexe& c2);

Complexe operator-(const Complexe& c, const Complexe& c2);

Complexe operator/(const Complexe& c, const Complexe& c2);

Complexe operator==(const Complexe& c, const Complexe& c2);

ostream& operator<<(ostream& flux, const Complexe& z);