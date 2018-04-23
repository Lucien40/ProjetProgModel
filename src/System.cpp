//
// Created by huber on 20-Apr-18.
//

#include "../inc/System.h"
#include <iostream>

void System::add(Oscillateur const &o) {

    contenu.push_back(o.copie());

}

void System::dessine() {
    support->dessine(*this);
}

void System::evolue(double t, double dt) {
    std::cout << "hevl";

    integre(*contenu[1], t, dt);
}

void System::integre(Oscillateur &o, double t, double dt) const {

    std::cout << " " << o.getVit().getDimension() << '\n';
    o.affiche(std::cout);
    o.afficheEvolution(t);
    //Vecteur nPar( o.getPara() + dt * o.getVit());

    //o.setPara(nPar);
    //o.setVit(nVit);
}