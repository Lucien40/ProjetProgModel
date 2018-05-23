//
// Created by huber on 18-Apr-18.
//

#ifndef PENDULUM_PENDULE_H
#define PENDULUM_PENDULE_H


#include "Oscillateur.h"
#include "Constantes.h"
#include <memory>

class Pendule : public Oscillateur {
private:
    double L;
    double m;
    double la;
    Vecteur O;
    Vecteur a;

public:


/*-------------------------Constructeur---------------------------*/

    Pendule(SupportADessin *support, Vecteur parametre, Vecteur vitesse, double longeur = 10, double masse = 1,
            double lamda = 10, Vecteur origine = Vecteur(0, 0, 0), Vecteur plan = Vecteur(1, 0, 0)) :
            Oscillateur(support, parametre, vitesse)
            , L(longeur)
            , m(masse)
            , la(lamda)
            , O(origine)
            , a(plan) {
    }
/*-------------------------Destructeur---------------------------*/
    //Car classe polymorphique

    virtual ~Pendule() {}

/*------------------------Copie-----------------------------------*/
// Copie polymorphique pour collection heterogene

    std::unique_ptr <Pendule> clone() const;

    virtual std::unique_ptr <Oscillateur> copie() const override;

/*----------------------Methodes----------------------------------*/

    virtual Vecteur evolution(double) const override;

    virtual void dessine() override;

/*----------------------Get---------------------------------------*/

    double getLongeur() const;

    double getMasse() const;

    double getViscosite() const;

    Vecteur getPosition() const;

    Vecteur getOrigine() const;

/*-------------------------Set------------------------------------*/

    void setLongeur(double L);

    void setMasse(double m);

    void setViscosite(double la);
};

#endif //PENDULUM_PENDULE_H
