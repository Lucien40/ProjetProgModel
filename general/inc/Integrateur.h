#ifndef PENDULUM_INTEGRATEUR_H
#define PENDULUM_INTEGRATEUR_H

#include "Oscillateur.h"

class Integrateur {
public:
    virtual void integre(Oscillateur &o, double t, double dt) const = 0;
};

#endif //PENDULUM_INTEGRATEUR_H
