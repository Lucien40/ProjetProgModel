//
// Created by huber on 18-Apr-18.
//

#ifndef PENDULUM_RESSORT_H
#define PENDULUM_RESSORT_H

#endif //PENDULUM_RESSORT_H

#include "Oscillateur.h"
#include "Constantes.h"

class Ressort : public Oscillateur {

private:

    double k;
    double m;
    double la;
    Vecteur direction;


public:
    Ressort(Vecteur &, Vecteur &, double = 9.8, double = 1, double = 1, Vecteur = Vecteur(1.0, 0.0, 0.0));

    virtual Vecteur evolution(double) const override;
};