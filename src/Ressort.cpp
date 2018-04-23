//
// Created by huber on 18-Apr-18.
//

#include "../inc/Ressort.h"

#include <cmath>

using namespace std;



Vecteur Ressort::evolution(double t) const {
    Vecteur v({-(k / m) * P.get(0) - (la / m) * Pp.get(0) + (g ^ a)});
    return v;
}

unique_ptr<Ressort> Ressort::clone() const {return unique_ptr<Ressort>(new Ressort(*this)); }

unique_ptr<Oscillateur> Ressort::copie() const { return clone();}

void Ressort::dessine() {
    support->dessine(*this);
}