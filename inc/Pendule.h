//
// Created by huber on 18-Apr-18.
//

#ifndef PENDULUM_PENDULE_H
#define PENDULUM_PENDULE_H



#include "Oscillateur.h"
#include "SupportADessin.h"
#include <memory>

class Pendule : public Oscillateur {
private:
    double g;
    double L;
    double m;
    double la;


public:

    virtual ~Pendule() {}
    Pendule(SupportADessin* vue, Vecteur &, Vecteur &, double = 9.8, double = 1, double = 1, double = 1);

    std::unique_ptr<Pendule> clone() const;

// voire une méthode template.... (plus tard dans le cours)
    virtual std::unique_ptr<Oscillateur> copie() const override ;

    virtual Vecteur evolution(double) const override;

    virtual void dessine() override ;
};

#endif //PENDULUM_PENDULE_H