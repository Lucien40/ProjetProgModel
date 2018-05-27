#ifndef INTEGRATEURNEWMARK_H
#define INTEGRATEURNEWMARK_H

#include "Integrateur.h"

class IntegrateurNewmark : public Integrateur {

private:
    double e;
public:

    IntegrateurNewmark(double e): e(e){}

    virtual void integre(Oscillateur &o, double t, double dt) const override;

};

#endif // INTEGRATEURNEWMARK_H
