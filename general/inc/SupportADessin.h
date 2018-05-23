//
#ifndef PENDULUM_SUPPORTADESSIN_H
#define PENDULUM_SUPPORTADESSIN_H

// Forward declaration to avoid circular includes
class Pendule;
class Ressort;
class System;
class ChariotPenduleRessort;
class PenduleDouble;
class Oscillateur;

class SupportADessin {
public:
    virtual ~SupportADessin() {}

    virtual void dessine(Pendule               const& aDessiner) = 0;

    virtual void dessine(Ressort               const& aDessiner) = 0;

    virtual void dessine(System                const& aDessiner) = 0;

    virtual void dessine(Oscillateur           const& aDessiner) = 0;

    virtual void dessine(ChariotPenduleRessort const& aDessiner) = 0;

    virtual void dessine(PenduleDouble         const& aDessiner) = 0;

};

#endif
