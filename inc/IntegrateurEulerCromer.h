//
// Created by huber on 13-Apr-18.
//

#include "Integrateur.h"


class IntegrateurEulerCromer : public Integrateur {

private:


public:

    virtual void integre(Oscillateur &, double, double) const override;

};

