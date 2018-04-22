//
// Created by lucien on 4/4/18.
//

#ifndef PROJETPROGMODEL_OSCILLATEUR_H
#define PROJETPROGMODEL_OSCILLATEUR_H

#include "Vecteur.h"
#include "Dessinable.h"
#include <iostream>
#include <memory>


class Oscillateur : public Dessinable {

protected:
    unsigned int N;
    Vecteur P;
    Vecteur Pp;
    SupportADessin* vue;


public:
    Oscillateur(SupportADessin* vue, Vecteur & P, Vecteur & Pp);

    virtual ~Oscillateur() {}

    virtual std::unique_ptr<Oscillateur> copie() const = 0;

    void affiche(std::ostream &out) const;

    void afficheEvolution(double t) const;

    Vecteur getPara() const;

    Vecteur getVit() const;

    void setPara(Vecteur);

    void setVit(Vecteur);

    virtual Vecteur evolution(double) const = 0;

};

std::ostream &operator<<(std::ostream &, Oscillateur const &);



#endif //PROJETPROGMODEL_OSCILLATEUR_H
