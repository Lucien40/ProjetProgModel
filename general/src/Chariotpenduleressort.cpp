#include "../inc/Chariotpenduleressort.h"

using namespace std;

Vecteur ChariotPenduleRessort::evolution(double t) const{
    double A(m1 + m2 * pow( sin( P.get(1)), 2));
    double B(k * P.get(0) + la * V.get(0) - m2 * L * pow( V.get(1), 2) * sin(P.get(1)));
    double C(g.get(2) * sin(P.get(1)) + mu * V.get(1));

    return Vecteur({((-B + m2 * C * cos(P.get(1)))/A),((B * cos(P.get(1)) - (m1 + m2) * C )/(L*A))});

}


Vecteur ChariotPenduleRessort::getPositionChariot() const{
    return O + P.get(0) * a;
}

Vecteur ChariotPenduleRessort::getPositionPendule() const{
    return getPositionChariot() +( L * sin(P.get(1))) * a + (L * cos(P.get(1)) / g.norme2()) * g;
}

void ChariotPenduleRessort::dessine() {
    support->dessine(*this);
}

Vecteur ChariotPenduleRessort::getOrigine() const{
    return O;
}


unique_ptr <ChariotPenduleRessort> ChariotPenduleRessort::clone() const { return unique_ptr<ChariotPenduleRessort>(new ChariotPenduleRessort(*this)); }

unique_ptr <Oscillateur> ChariotPenduleRessort::copie() const { return clone(); }
