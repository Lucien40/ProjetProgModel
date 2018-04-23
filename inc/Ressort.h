//
// Created by huber on 18-Apr-18.
//

#ifndef PENDULUM_RESSORT_H
#define PENDULUM_RESSORT_H


#include "Oscillateur.h"
#include "Constantes.h"
#include <memory>

class Ressort : public Oscillateur {

private:

    double k;
    double m;
    double la;
    Vecteur a;
    Vecteur O;

public:


/*-------------------------Constructeur---------------------------*/

    Ressort(SupportADessin *support, Vecteur parametre, Vecteur vitesse, double raideur = 1, double masse = 1,
            double lamda = 1, Vecteur dir = Vecteur(1.0, 0.0, 0.0), Vecteur origine = Vecteur(0, 0, 0)) :
            Oscillateur(support, parametre, vitesse)
            , k(raideur)
            , m(masse)
            , la(lamda)
            , a(dir)
            , O(origine) {
    }

/*-------------------------Destructeur---------------------------*/
    //Car classe polymorphique

    virtual ~Ressort() {}

/*------------------------Copie-----------------------------------*/
    // Copie polymorphique pour collection heterogene

    std::unique_ptr <Ressort> clone() const;

    virtual std::unique_ptr <Oscillateur> copie() const override;

/*----------------------Methodes----------------------------------*/

    virtual void dessine() override;

    virtual Vecteur evolution(double t) const override;

/*----------------------Get---------------------------------------*/

    double getRaideur() const;

    double getMasse() const;

    double getViscosite() const;

    Vecteur getDirection() const;

/*-------------------------Set------------------------------------*/

    void setRaideur(double k);

    void setMasse(double m);

    void setViscosite(double la);

    void setDirection(Vecteur a);
};

#endif //PENDULUM_RESSORT_H
