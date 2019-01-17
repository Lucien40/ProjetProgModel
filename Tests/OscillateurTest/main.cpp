//
// Created by lucien on 4/4/18.
//

#include "TextViewer.h"
#include <iostream>

using namespace std;

int main() {
    TextViewer view(cout);

    Vecteur P({1, 2});
    Vecteur Pp({3, -5});

    Pendule o(&view, P, Pp);

    cout << o;

    o.afficheEvolution(2);


}
