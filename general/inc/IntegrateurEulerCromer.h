#include "Integrateur.h"

class IntegrateurEulerCromer : public Integrateur {

public:

    virtual void integre(Oscillateur &o, double t, double dt) const override;

};

