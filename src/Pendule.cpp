//
// Created by huber on 18-Apr-18.
//

#include "../inc/Pendule.h"
#include <cmath>

using namespace std;

Vecteur Pendule::evolution(double) const {
    Vecteur v({(-(g / L)) * sin(P.get(0)) - (la / (m * pow(L, 2))) * Pp.get(0)});
    return v;
}

Pendule::Pendule(Vecteur &P, Vecteur &Pp, double g, double m, double L, double la) :
        Oscillateur(P, Pp),
        g(g),
        L(L),
        m(m),
        la(la) {

}