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


public:

    virtual ~Pendule() {}

    Pendule(SupportADessin *support, Vecteur parametre, Vecteur vitesse, double longeur = 1, double masse = 1,
            double lamda = 1, Vecteur origine = Vecteur(0, 0, 0)) :
            Oscillateur(support, parametre, vitesse)
            , L(longeur)
            , m(masse)
            , la(lamda)
            , O(origine) {
    }


    std::unique_ptr <Pendule> clone() const;

// voire une méthode template.... (plus tard dans le cours)
    virtual std::unique_ptr <Oscillateur> copie() const override;

    virtual Vecteur evolution(double) const override;

    virtual void dessine() override;
};

#endif //PENDULUM_PENDULE_H