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
    void add(Oscillateur const& o);
    virtual ~System() {}
private:
    IntegrateurEulerCromer Int();
    std::vector<std::unique_ptr<Oscillateur>> contenu;
};

#endif //PENDULUM_SYSTEM_H
