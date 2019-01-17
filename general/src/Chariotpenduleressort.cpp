#include "../inc/Chariotpenduleressort.h"

using namespace std;

/*================================= Copie ==============================*/

unique_ptr <ChariotPenduleRessort> ChariotPenduleRessort::clone() const {
    return unique_ptr<ChariotPenduleRessort>(new ChariotPenduleRessort(*this));
}

unique_ptr <Oscillateur> ChariotPenduleRessort::copie() const {
    return clone();
}


/*=============================== Methodes =============================*/

Vecteur ChariotPenduleRessort::evolution(double t, Vecteur P, Vecteur V) const {
    double A(m1 + m2 * pow( sin( P.get(1)), 2));
    double B(k * P.get(0) + la * V.get(0) - m2 * L * pow( V.get(1), 2) * sin(P.get(1)));
    double C(g.get(2) * sin(P.get(1)) + mu * V.get(1));

    return Vecteur({((-B + m2 * C * cos(P.get(1)))/A),((B * cos(P.get(1)) - (m1 + m2) * C )/(L*A))});
}

void ChariotPenduleRessort::dessine() {
    support->dessine(*this);
}

ostream &ChariotPenduleRessort::affiche(ostream &flot) const{
    flot << "==========================" << '\n';
    flot << "Chariot pendule/ressort  :" << '\n';
    flot << "Parametre (longeur/angle): " << P  << '\n';
    flot << "Vitesse                  : " << V  << '\n';
    flot << "Masse 1                  : " << m1 << '\n';
    flot << "Masse 2                  : " << m2 << '\n';
    flot << "Longeur ressort          : " << L  << '\n';
    flot << "Frottement               : " << mu << '\n';
    flot << "Raideur du ressort       : " << k  << '\n';
    flot << "Acceleration             : " << evolution(0,P,V) << '\n';

    return flot;
}

/*=============================== Get =============================*/

double ChariotPenduleRessort::getLongeur() const{
    return L;
}

double ChariotPenduleRessort::getMasse1()  const{
    return m1;
}

double ChariotPenduleRessort::getMasse2()  const{
    return m2;
}

double ChariotPenduleRessort::getLa()      const{
    return la;
}

Vecteur ChariotPenduleRessort::getPositionChariot() const{
    return O + P.get(0) * a;
}

Vecteur ChariotPenduleRessort::getPositionPendule() const{
    return getPositionChariot() +( L * sin(P.get(1))) * a + (L * cos(P.get(1)) / g.norme2()) * g;
}


Vecteur ChariotPenduleRessort::getOrigine()         const{
    return O;
}

Vecteur ChariotPenduleRessort::getAxis()            const{
    return (g^a)/((g^a).norme2());
}
