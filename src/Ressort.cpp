//
// Created by huber on 18-Apr-18.
//

#include "../inc/Ressort.h"

#include <cmath>

using namespace std;

Ressort::Ressort(Vecteur &P, Vecteur &Pp, double k, double m, double la, Vecteur dir) :
        Oscillateur(P, Pp), k(k), m(m), la(la), direction(dir) {
}

Vecteur Ressort::evolution(double t) const {
    Vecteur v({-(k / m) * P.get(0) - (la / m) * Pp.get(0) + (g ^ direction)});
    return v;
}