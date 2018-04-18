//
// Created by huber on 18-Apr-18.
//

#ifndef PENDULUM_PENDULE_H
#define PENDULUM_PENDULE_H

#endif //PENDULUM_PENDULE_H

#include "Oscillateur.h"

class Pendule : Oscillateur {
private:
    double g;
    double L;
    double m;


public:
    Pendule(Vecteur, Vecteur, double, double, double);

    virtual Vecteur evolution(double) const override;
};