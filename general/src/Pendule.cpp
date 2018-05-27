#include "../inc/Pendule.h"

/*================================================================================*/

using namespace std;

/*==================================== Copie =====================================*/

unique_ptr <Pendule> Pendule::clone() const {
    return unique_ptr<Pendule>(new Pendule(*this));
}

unique_ptr <Oscillateur> Pendule::copie() const {
    return clone();
}

/*================================= Methodes ====================================*/

Vecteur Pendule::evolution(double t, Vecteur P, Vecteur V) const  {
    Vecteur v(1);
    v.setCoord(0,  ((g.get(2) / L)) * sin(P.get(0))- (la / (m * pow(L, 2))) *( V.get(0)));
    return v;
}

void Pendule::dessine() {
    support->dessine(*this);
}

ostream& Pendule::affiche(ostream &flot) const{
    flot << "==========================" << '\n';
    flot << "Pendule:" << '\n';
    flot << "Parametre (angle): " << P  << '\n';
    flot << "Vitesse          : " << V  << '\n';
    flot << "Viscosite        : " << la << '\n';
    flot << "Masse            : " << m  << '\n';
    flot << "Longeur          : " << L  << '\n';
    flot << "Acceleration     : " << evolution(0,P,V) << '\n';

    return flot;
}

/*==================================== Get =======================================*/

double Pendule::getLongeur()    const {
    return L;
}

double Pendule::getMasse()      const {
    return m;
}

double Pendule::getViscosite()  const {
    return la;
}

Vecteur Pendule::getPosition() const {
    return O
            + L* cos(P.get(0))*g*(1.0/g.norme2())
            + L* sin(P.get(0))*a;
}

Vecteur Pendule::getOrigine() const{
    return O;
}

Vecteur Pendule::getAxis() const{
    return (g^a)/((g^a).norme2());
}

/*================================== Set =========================================*/

void Pendule::setLongeur(double L) {
    this->L = L;
}

void Pendule::setMasse(double m) {
    this->m = m;
}

void Pendule::setViscosite(double la) {
    this->la = la;
}


