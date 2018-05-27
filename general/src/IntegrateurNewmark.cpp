#include "../inc/IntegrateurNewmark.h"

void IntegrateurNewmark::integre(Oscillateur &o, double t, double dt) const{
    Vecteur newPara(o.getPara());
    Vecteur newVit(o.getVit());
    Vecteur s(o.evolution(t,o.getPara(),o.getVit()));
    Vecteur q(newPara);
    Vecteur r(s);
    do{
        q = newPara;
        r = o.evolution((t+dt),newPara,newVit);
        newVit = o.getVit() + (dt/2) * (r + s);
        newPara = o.getPara() + dt * (o.getVit()) + (pow(dt,2)/3)*(0.5*r + s);
    }while((newPara-q).norme2() >= e);
    o.setPara(newPara);
    o.setVit(newVit);
}
