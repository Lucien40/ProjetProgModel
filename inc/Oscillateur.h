//
// Created by lucien on 4/4/18.
//

#include "Vecteur.h"


class Oscillateur {

private:
    unsigned int N;
    Vecteur P;
    Vecteur Pp;

    Vecteur evolution(Vecteur,Vecteur,int);

public:
    Oscillateur(int N) :
    N(N),
    P(N),
    Pp(N){
    }
};

#ifndef PROJETPROGMODEL_OSCILLATEUR_H
#define PROJETPROGMODEL_OSCILLATEUR_H

#endif //PROJETPROGMODEL_OSCILLATEUR_H
