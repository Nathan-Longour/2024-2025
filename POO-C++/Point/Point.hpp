#include <iostream>
using namespace std;
class Point
{
public:
	Point(float X = 0, float Y = 0);
	virtual void Afficher(void)const;
	void Translater(float X, float Y);
	float Distance(const Point& a);
	virtual ~Point(); // de meme pour que pour le virtual de point nomée
private:
	float x;
	float y;
};

class Polygone{
public:
	Polygone();
	~Polygone();
	float DistP();
	void Affiche()const;
private:
	Point* pp;
	unsigned int NB;
};

class NamedPoint : public Point {
private:
	char nom;
public:
	NamedPoint(float X, float Y, char n);
	virtual void Afficher()const {
		cout << "Point " << nom<<" ";
		Point::Afficher(); // appele a afficher du point et non du namedPoint 
	}
	virtual ~NamedPoint() { // virtual car permet de detruire les point nomée si passée par pointeur de classe diff
		cout << "effacement du Point nomee" << endl;
	}
};