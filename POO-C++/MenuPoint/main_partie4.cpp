#include<iostream>
using namespace std;

#include"Menu.h"

int main()
{
    
  //Déclaration du point à gérer (à faire)
  char c;
  char* n = new char[10];
  Point* p = nullptr;
  cout<<"Programme de gestion de point:"<<endl;
  cout<<"souhaitez-vous nommer votre point (o/n)?: ";
  cin>>c;
  if(c=='o')
    {
      p = new PointNomme(1,2);
      cout << "quelle nom ?" << endl;
      cin >> n;
      p->Modifier();
    }
  else
    {
      p = new Point(14, 18);
    }
  
  //Déclaration du Menu m (à faire)
  MenuPoint m(p);
  m.Executer();
  //Une instruction attendue ici (à faire)
  delete p;
  return 0;
}