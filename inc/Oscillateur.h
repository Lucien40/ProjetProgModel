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

    Vecteur P;
    Vecteur V;


public:

/*-------------------------Constructeur---------------------------*/

    Oscillateur(SupportADessin *support, Vecteur P, Vecteur V) :
            Dessinable(support)
            , P(P)
            , V(V) {}

/*-------------------------Destructeur---------------------------*/
    //Car class abstraite polymorphique

    virtual ~Oscillateur() {}

/*------------------------Copie-----------------------------------*/
// Copie polymorphique pour collection heterogene
    virtual std::unique_ptr <Oscillateur> copie() const = 0;

/*----------------------Methodes----------------------------------*/

    std::ostream &affiche(std::ostream &out) const;

    void afficheEvolution(double t) const;

    virtual Vecteur evolution(double t) const = 0;

    virtual void dessine() override; // herite de dessinable

/*----------------------Get---------------------------------------*/

    Vecteur getPara() const;

    Vecteur getVit() const;

/*-------------------------Set------------------------------------*/

    void setPara(Vecteur p);

    void setVit(Vecteur pp);


};

std::ostream &operator<<(std::ostream &, Oscillateur const &);


#endif //PROJETPROGMODEL_OSCILLATEUR_H
