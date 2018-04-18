//
// Created by lucien on 4/4/18.
//

#include "../inc/Vecteur.h"
#include <iostream>


class Oscillateur {

private:
    unsigned int N;
    Vecteur P;
    Vecteur Pp;


public:
    Oscillateur(Vecteur, Vecteur);

    void affiche(std::ostream &out) const;

    void afficheEvolution(double t) const;

    Vecteur getPara() const;

    Vecteur getVit() const;

    void setPara(Vecteur);

    void setVit(Vecteur);

    virtual Vecteur evolution(double) const = 0;

};

std::ostream &operator<<(std::ostream &, Oscillateur const &);

#ifndef PROJETPROGMODEL_OSCILLATEUR_H
#define PROJETPROGMODEL_OSCILLATEUR_H

#endif //PROJETPROGMODEL_OSCILLATEUR_H
