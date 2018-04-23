//
// Created by huber on 22-Apr-18.
//

#include "../inc/Pendule.h"
#include "../inc/Ressort.h"
#include "../inc/System.h"
#include "../inc/TextViewer.h"

#include <iostream>

using namespace std;


int main() {

    cout << "hello";

    TextViewer view(cout);

    Pendule pendule(&view, Vecteur({0}), Vecteur({0}), 1, 1, 1, Vecteur(0, 0, 0));

    pendule.dessine();


    Ressort ressort(&view, Vecteur({0.18}), Vecteur({0}), 0.33, 0.25, 0.15, Vecteur(0.8, 0.0, 0.6), Vecteur(0, 0, 0));

    ressort.dessine();

    System system(&view);

    system.add(pendule);
    system.add(ressort);

    system.dessine();
    std::cout << "hevl";
    //for (double t = 0; t < 1 ; t += 0.1) {
    system.evolue(0, 0.1);
    ///}*/

}