#include "../inc/Ressort.h"

/*================================================================================*/

using namespace std;

/*================================ Copie =========================================*/

unique_ptr<Ressort> Ressort::clone() const {
    return unique_ptr<Ressort>(new Ressort(*this));
}

unique_ptr<Oscillateur> Ressort::copie() const {
    return clone();
}

/*================================ Methodes =====================================*/

Vecteur Ressort::evolution(double t, Vecteur P, Vecteur V) const  {
    Vecteur v({-(k / m) * P.get(0) - (la / m) * V.get(0) + (g * a)});
    return v;
}

void Ressort::dessine() {
    support->dessine(*this);
}

ostream& Ressort::affiche(ostream &flot) const{
    flot << "==========================" << '\n';
    flot << "Ressort:" << '\n';
    flot << "Parametre (longeur): " << P  << '\n';
    flot << "Vitesse            : " << V  << '\n';
    flot << "Viscosite          : " << la << '\n';
    flot << "Masse              : " << m  << '\n';
    flot << "Raideur            : " << k  << '\n';
    flot << "Acceleration       : " << evolution(0,P,V) << '\n';

    return flot;
}

/*================================ Get ===========================================*/

double Ressort::getRaideur()    const {
    return k;
}

double Ressort::getMasse()      const {
    return m;
}

double Ressort::getViscosite()  const {
    return la;
}

Vecteur Ressort::getDirection() const {
    return a;
}

Vecteur Ressort::getPosition()  const {
    return a * P.get(0);
}

Vecteur Ressort::getOrigine()   const {
    return O;
}

/*================================= Set ==========================================*/

void Ressort::setRaideur    (double k) {
    this->k = k;
}

void Ressort::setMasse      (double m) {
    this->m = m;
}

void Ressort::setViscosite  (double la) {
    this->la = la;
}

void Ressort::setDirection  (Vecteur a) {
    this->a = a;
}
