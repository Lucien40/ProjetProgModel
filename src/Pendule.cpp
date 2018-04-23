//
// Created by huber on 18-Apr-18.
//

#include "../inc/Pendule.h"
#include <cmath>

using namespace std;

Vecteur Pendule::evolution(double) const {
    Vecteur v(1);
    v.setCoord(0, (-(g.get(0) / L)) * sin(P.get(0)) - (la / (m * pow(L, 2))) * Pp.get(0));
    return v;
}


void Pendule::dessine() {
    support->dessine(*this);
}

unique_ptr <Pendule> Pendule::clone() const { return unique_ptr<Pendule>(new Pendule(*this)); }

unique_ptr <Oscillateur> Pendule::copie() const { return clone(); }