//
// Created by huber on 18-Apr-18.
//

#include "../inc/Pendule.h"


Vecteur Pendule::evolution(double) const {

}

Pendule::Pendule(Vecteur P, Vecteur Pp, double g = 9.8, double m = 1, double L = 1) :
        Oscillateur(P, Pp),
        g(g),
        L(L),
        m(m) {

}