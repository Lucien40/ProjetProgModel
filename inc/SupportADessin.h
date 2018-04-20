//
// Created by huber on 19-Apr-18.
//

#ifndef PENDULUM_SUPPORTADESSIN_H
#define PENDULUM_SUPPORTADESSIN_H

#endif //PENDULUM_SUPPORTADESSIN_H

#include "Pendule.h"
#include "Ressort.h"
#include "System.h"

class SupportADessin {
public:
    virtual ~SupportADessin() {}

    virtual void dessine(Pendule const &) = 0;

    virtual void dessine(Ressort const &) = 0;

    virtual void dessine(Systeme const &) = 0;
    // ... autres choses que vous voudriez dessiner...
};