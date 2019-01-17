#include "../inc/IntegrateurEulerCromer.h"

void IntegrateurEulerCromer::integre(Oscillateur &o, double t, double dt) const {
    o.setVit(o.getVit() + dt * o.evolution(t,o.getPara(),o.getVit()));
    o.setPara(o.getPara() + dt * o.getVit());

}
