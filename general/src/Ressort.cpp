//
// Created by huber on 18-Apr-18.
//

#include "../inc/Ressort.h"

#include <cmath>

using namespace std;



Vecteur Ressort::evolution(double t) const {
    Vecteur v({-(k / m) * P.get(0) - (la / m) * V.get(0) + (g * a)});
    return v;
}

unique_ptr<Ressort> Ressort::clone() const {return unique_ptr<Ressort>(new Ressort(*this)); }

unique_ptr<Oscillateur> Ressort::copie() const { return clone();}

void Ressort::dessine() {
    support->dessine(*this);
}

double Ressort::getRaideur() const {
    return k;
}

double Ressort::getMasse() const {
    return m;
}

double Ressort::getViscosite() const {
    return la;
}

Vecteur Ressort::getDirection() const {
    return a;
}

void Ressort::setRaideur(double k) {
    this->k = k;
}

void Ressort::setMasse(double m) {
    this->m = m;
}

void Ressort::setViscosite(double la) {
    this->la = la;
}

void Ressort::setDirection(Vecteur a) {
    this->a = a;
}