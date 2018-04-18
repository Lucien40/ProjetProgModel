//
// Created by lucien on 4/4/18.
//

#include "../inc/Vecteur.h"
#include "../inc/Oscillateur.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    Vecteur P({1, 2});
    Vecteur Pp({3, -5});

    Oscillateur o(P, Pp);

    cout << o;

    o.afficheEvolution(2);


}