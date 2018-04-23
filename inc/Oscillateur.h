//
// Created by lucien on 4/4/18.
//

#ifndef PROJETPROGMODEL_OSCILLATEUR_H
#define PROJETPROGMODEL_OSCILLATEUR_H

#include "Vecteur.h"
#include "Dessinable.h"
#include "SupportADessin.h"
#include <iostream>
#include <memory>


class Oscillateur :
        public Dessinable {

protected:
    unsigned int N;
    Vecteur P;
    Vecteur Pp;


public:
    // Constructor

    Oscillateur(SupportADessin *support, Vecteur P, Vecteur Pp) :
            Dessinable(support)
            , P(P)
            , Pp(Pp) {}


    virtual ~Oscillateur() {}

    virtual std::unique_ptr <Oscillateur> copie() const = 0;

    void affiche(std::ostream &out) const;

    void afficheEvolution(double t) const;

    Vecteur getPara() const;

    Vecteur getVit() const;

    void setPara(Vecteur p);

    void setVit(Vecteur pp);

    virtual Vecteur evolution(double t) const = 0;

    virtual void dessine() override;

};

std::ostream &operator<<(std::ostream &, Oscillateur const &);


#endif //PROJETPROGMODEL_OSCILLATEUR_H
