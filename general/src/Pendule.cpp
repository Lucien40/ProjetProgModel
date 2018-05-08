//
// Created by huber on 18-Apr-18.
//

#include "../inc/Pendule.h"
#include <cmath>

using namespace std;

Vecteur Pendule::evolution(double) const {
    Vecteur v(1);
//(-(g.get(2) / L)) * sin(P.get(0))- (la / (m * pow(L, 2))) *( V.get(0))
    v.setCoord(0,  (-(g.get(2) / L)) * sin(P.get(0))- (la / (m * pow(L, 2))) *( V.get(0)));
    return v;
}

double Pendule::getLongeur() const {
    return L;
}

double Pendule::getMasse() const {
    return m;
}

double Pendule::getViscosite() const {
    return la;
}

Vecteur Pendule::getPosition() const {
    return O + L* cos(P.get(0))*g*(1.0/g.norme2()) + L* sin(P.get(0))*a;
}

Vecteur Pendule::getOrigine() const{
    return O;
}

void Pendule::setLongeur(double L) {
    this->L = L;
}

void Pendule::setMasse(double m) {
    this->m = m;
}

void Pendule::setViscosite(double la) {
    this->la = la;
}

void Pendule::dessine() {

    support->dessine(*this);
}

unique_ptr <Pendule> Pendule::clone() const { return unique_ptr<Pendule>(new Pendule(*this)); }

unique_ptr <Oscillateur> Pendule::copie() const { return clone(); }
