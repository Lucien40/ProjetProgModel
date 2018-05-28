#ifndef PENDULUM_SYSTEM_H
#define PENDULUM_SYSTEM_H

#include "Oscillateur.h"
#include "IntegrateurNewmark.h"
#include "IntegrateurEulerCromer.h"

#include <memory>

class System : public Dessinable{
public:
    System(SupportADessin *support) :
            Dessinable(support),
            Int(0.01)
    {}

    virtual ~System() {}

    void add(Oscillateur const& o);

    virtual void dessine() override;

    std::ostream &affiche(std::ostream &flot) const;

    void evolue(double t, double dt);

    std::vector<std::unique_ptr<Oscillateur>> contenu; //Casse l'encapsulation mais plus simple

private:

    IntegrateurNewmark Int;

    void integre(Oscillateur &o, double t, double dt) const;
};

#endif //PENDULUM_SYSTEM_H
