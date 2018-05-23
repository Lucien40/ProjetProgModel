#include "../inc/PenduleDouble.h"

using namespace std;

Vecteur PenduleDouble::evolution(double t) const{
    double dTheta = P.get(0) - P.get(1);

    double accTheta1( m2 * g.get(2) * cos(dTheta) * sin (P.get(1)) );
    accTheta1 -= M * g.get(2) * sin(P.get(0));
    accTheta1 -= m2 * L1 * pow(V.get(0),2) * cos(dTheta) * sin( dTheta);
    accTheta1 -= m2 * L2 * pow(V.get(1), 2) * sin(dTheta);
    accTheta1 /= ((m1 + m2 * pow(sin(dTheta), 2)) * L1);

    double accTheta2( M * g.get(2) * cos(dTheta) * sin (P.get(0)) );
    accTheta2 -= M * g.get(2) * sin(P.get(1));
    accTheta2 += m2 * L2 * pow(V.get(1),2) * cos(dTheta) * sin( dTheta);
    accTheta2 += M * L1 * pow(V.get(0), 2) * sin(dTheta);
    accTheta2 /= ((m1 + m2 * pow(sin(dTheta), 2)) * L2);

    return Vecteur({accTheta1,accTheta2});

}


Vecteur PenduleDouble::getPositionM1() const{
    return O + (L1* cos(P.get(0)) / g.norme2() ) * g + L1 * sin(P.get(0))*a;
}

Vecteur PenduleDouble::getPositionM2() const{
    return getPositionM1() + (L2* cos(P.get(1)) / g.norme2() ) * g + L2 * sin(P.get(1))*a;
}

void PenduleDouble::dessine() {
    support->dessine(*this);
}

Vecteur PenduleDouble::getOrigine() const{
    return O;
}


unique_ptr <PenduleDouble> PenduleDouble::clone() const { return unique_ptr<PenduleDouble>(new PenduleDouble(*this)); }

unique_ptr <Oscillateur> PenduleDouble::copie() const { return clone(); }
