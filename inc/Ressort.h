//
// Created by huber on 18-Apr-18.
//

#ifndef PENDULUM_RESSORT_H
#define PENDULUM_RESSORT_H


#include "Oscillateur.h"
#include "SupportADessin.h"
#include "Constantes.h"
#include <memory>

class Ressort : public Oscillateur {

private:

    double k;
    double m;
    double la;
    Vecteur direction;


public:
    Ressort(SupportADessin* vue, Vecteur & P, Vecteur & Pp, double = 1, double = 1, double =1,Vecteur = Vecteur(1.0, 0.0, 0.0));

    virtual Vecteur evolution(double) const override;
    std::unique_ptr<Ressort> clone() const;

// voire une méthode template.... (plus tard dans le cours)
    virtual std::unique_ptr<Oscillateur> copie() const override ;

    virtual void dessine() override ;
};

#endif //PENDULUM_RESSORT_H
