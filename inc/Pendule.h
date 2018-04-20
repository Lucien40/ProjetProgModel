//
// Created by huber on 18-Apr-18.
//

#ifndef PENDULUM_PENDULE_H
#define PENDULUM_PENDULE_H

#endif //PENDULUM_PENDULE_H

#include "Oscillateur.h"

class Pendule : public Oscillateur {
private:
    double g;
    double L;
    double m;
    double la;


public:
    Pendule(Vecteur &, Vecteur &, double = 9.8, double = 1, double = 1, double = 1);

    virtual Vecteur evolution(double) const override;
};