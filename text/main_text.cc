
#include "../inc/Pendule.h"
#include "../inc/Ressort.h"
#include "../inc/System.h"
#include "../inc/TextViewer.h"

#include <iostream>

using namespace std;


int main() {


    TextViewer view(cout);

    Pendule pendule(&view, Vecteur({0.5}), Vecteur({1}));

    Ressort ressort(&view, Vecteur({0.18}), Vecteur({0}), 0.33, 0.25, 0.15, Vecteur(0.8, 0.0, 0.6), Vecteur(0, 0, 0));


    System system(&view);

    system.add(pendule);
    system.add(ressort);


    for (double t = 0; t < 1; t += 0.1) {
        system.dessine();
        system.evolue(t, 0.1);
    }

}
