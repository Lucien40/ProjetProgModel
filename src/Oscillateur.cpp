//
// Created by lucien on 4/4/18.
//

#include "../inc/Oscillateur.h"


#include <iostream>
#include <vector>

using namespace std;


Vecteur Oscillateur::getPara() const {
    return P;
}

Vecteur Oscillateur::getVit() const {
    return V;
}

void Oscillateur::setPara(Vecteur P) {
    this->P = P;
}

void Oscillateur::setVit(Vecteur V) {
    this->V = V;
}


ostream &Oscillateur::affiche(ostream &out) const {
    out << "Oscillateur" << endl;
    out << "Para:    " << P << endl;
    out << "Vitesse: " << V << endl;
    return out;
}

void Oscillateur::afficheEvolution(double t) const {
    cout << "sa fonction d'evolution donne a t = " << t << " : " << evolution(t);
}

void Oscillateur::dessine() {
    support->dessine(*this);
}

std::ostream &operator<<(std::ostream &out, Oscillateur const &o) {
    return o.affiche(out);
}