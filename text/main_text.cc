#include <iostream>
#include "TextViewer.h"
#include "Pendule.h"
using namespace std;

int main()
{
  TextViewer ecran(cout);
  Pendule c(&ecran,Vecteur({0.5}),Vecteur({0}));

  cout << "Au départ :" << endl;
  c.dessine();

  c.evolution(0.1);
  cout << "Après un pas de calcul :" << endl;
  c.dessine();

  c.evolution(0.1);
  cout << "Après deux pas de calcul :" << endl;
  c.dessine();

  return 0;
}
