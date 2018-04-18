//
// Created by lucien on 4/4/18.
//

#include "../inc/Oscillateur.h"

#include "../inc/Vecteur.h"
#include <iostream>

using namespace std;


Vecteur Oscillateur::getPara() const {
    return P;
}

Vecteur Oscillateur::getVit() const {
    return Pp;
}

void Oscillateur::setPara(Vecteur P) {
    this->P = P;
}

void Oscillateur::setVit(Vecteur Pp) {
    this->Pp = Pp;
}


Oscillateur::Oscillateur(Vecteur P, Vecteur Pp) : P(P), Pp(Pp) {}

void Oscillateur::affiche(ostream &out) const {
    out << "Oscillateur" << endl;
    out << "Para: " << P << endl;
    out << "Vitesse: " << Pp << endl;
}

void Oscillateur::afficheEvolution(double t) const {
    cout << "sa fonction d'evolution donne a t = " << t << " : " << evolution(t);
}


std::ostream &operator<<(std::ostream &out, Oscillateur const &o) {
    o.affiche(out);
    return out;
}