//
// Created by huber on 20-Apr-18.
//

#ifndef PENDULUM_SYSTEM_H
#define PENDULUM_SYSTEM_H


#include "Dessinable.h"
#include "Oscillateur.h"
#include "SupportADessin.h"
#include "IntegrateurEulerCromer.h"
#include <vector>
#include <memory>

class System : public Dessinable{
public:
    System(SupportADessin *support) :
            Dessinable(support) {}

    void add(Oscillateur const& o);
    virtual ~System() {}

    virtual void dessine() override;
    std::vector<std::unique_ptr<Oscillateur>> contenu;

    void evolue(double t, double dt);

private:
    IntegrateurEulerCromer Int;

    void integre(Oscillateur &o, double t, double dt) const;
};

#endif //PENDULUM_SYSTEM_H
