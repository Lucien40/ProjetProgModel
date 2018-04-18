//
// Created by huber on 17-Apr-18.
//

#include "../inc/IntegrateurTest.h"

int main(int argc, char const *argv[]) {
    Vecteur P({1, 2});
    Vecteur Pp({3, -5});

    Oscillateur o(P, Pp);

    cout << o;

    o.afficheEvolution(2);


}