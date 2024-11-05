#include<iostream>
using namespace std;

#include"Menu.h"

void Menu::AfficherMenu(void) const
{
  cout<<"Menu: "<<endl;
  cout<<"- 0:\t Quitter"<<endl;
  cout<<"- 1:\t Aide"<<endl;
}


int Menu::DemanderChoix(void) const
{
  int choix;
  cout<<"Votre choix? ";
  cin>>choix;
  return choix;
}


int Menu::TraiterChoix(int choix) const
{
  int fin=0;
  switch(choix)
    {
    case 0:
      fin=TraiterQuitter();
      break;
    case 1:
      fin=TraiterAide();
      break;
    }
  return fin;
}

  
int Menu::TraiterQuitter(void) const
{
  int fin=0;
  char reponse;
  cout<<"Voulez-vous vraiment sortir de l'application (o/n)? ";
  cin>>reponse;
  if((reponse=='o')||(reponse=='O'))
    {
      fin=1;
    }
  return fin;
}

  
int Menu::TraiterAide(void) const
{
  cout<<"Choisir un numero dans la liste proposee"<<endl;
  return 0;
}

void Menu::Executer(void)const {
    unsigned int t = 0;
    unsigned int c = 0;
    while (t == 0)
    {
        AfficherMenu();
        c = DemanderChoix();
        t = TraiterChoix(c);
    }
}

void MenuEssai::AfficherMenu(void)const {
    Menu::AfficherMenu();
    cout << "- 2:\t Essai" << endl;
}

int MenuEssai::TraiterChoix(int choix) const {
    int fin;
    fin = Menu::TraiterChoix(choix);
    if (choix == 2)
    {
        cout << "Vous avez s electionne l option Essai." << endl;
    }
    return fin;
}


void MenuPoint::AfficherMenu(void)const {
    Menu::AfficherMenu();
    cout << "- 2:\t Modifier un point" << endl;
    cout << "- 3:\t Afficher les caracteristique" << endl;
}

int MenuPoint::TraiterChoix(int choix) const {
    int fin;
    fin = Menu::TraiterChoix(choix);
    if (choix == 2)
    {
        p->Modifier();
    }
    if (choix == 3)
    {
        p->Affiche();
    }
    return fin;
}

