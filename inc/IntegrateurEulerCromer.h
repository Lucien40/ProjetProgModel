//
// Created by huber on 13-Apr-18.
//

#ifndef PENDULUM_INTEGRATEUREULERCROMER_H
#define PENDULUM_INTEGRATEUREULERCROMER_H

#endif //PENDULUM_INTEGRATEUREULERCROMER_H

#include "Integrateur.h"


class IntegrateurEulerCromer : public Integrateur {

private:


public:

    virtual void integre(Oscillateur &, double, double) const override;

};