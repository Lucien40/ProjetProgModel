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

    virtual ~Ressort() {}

    Ressort(SupportADessin *support, Vecteur parametre, Vecteur vitesse, double raideur = 1, double masse = 1,
            double lamda = 1, Vecteur dir = Vecteur(1.0, 0.0, 0.0), Vecteur origine = Vecteur(0, 0, 0)) :
            Oscillateur(support, parametre, vitesse)
            , k(raideur)
            , m(masse)
            , la(lamda)
            , a(dir)
            , O(origine) {
    }

    virtual Vecteur evolution(double) const override;

    std::unique_ptr <Ressort> clone() const;

// voire une méthode template.... (plus tard dans le cours)
    virtual std::unique_ptr <Oscillateur> copie() const override;

    virtual void dessine() override;
};

#endif //PENDULUM_RESSORT_H
