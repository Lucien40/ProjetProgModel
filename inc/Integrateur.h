//
// Created by huber on 13-Apr-18.
//

#ifndef PENDULUM_INTEGRATEUR_H
#define PENDULUM_INTEGRATEUR_H



#include "Oscillateur.h"

class Integrateur {
private:

public:
    virtual void integre(Oscillateur &, double, double) const =0;
};

#endif //PENDULUM_INTEGRATEUR_H