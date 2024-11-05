#include "Point.h"

class Menu
{
 public:
  virtual void AfficherMenu(void) const; 
  int DemanderChoix(void) const ;
  virtual int TraiterChoix(int choix) const;
  int TraiterQuitter(void) const;
  int TraiterAide(void) const;
  virtual void Executer(void)const;
};

class MenuEssai :public Menu {
public:
	virtual void AfficherMenu(void) const;
	virtual int TraiterChoix(int choix) const;
};

class MenuPoint : public Menu {
private:
	Point* p;
public:
	MenuPoint(Point* p_n) 
	{
		p = p_n;
	}
	virtual void AfficherMenu(void) const;
	virtual int TraiterChoix(int choix) const;
};