#ifndef PENDULEDOUBLE_H
#define PENDULEDOUBLE_H

#include "Oscillateur.h"
#include "Constantes.h"
#include <memory>
#include <cmath>

class PenduleDouble : public Oscillateur {
private:
    double L1; // longueur du pendule 1
    double L2; // longueur du pendule 2
    double m1; // masse du chariot
    double m2; // masse au bout du pendule

    double M;

    Vecteur O; // vecteur origine
    Vecteur a;

public:


/*-------------------------Constructeur---------------------------*/

    PenduleDouble(SupportADessin *support,
                          Vecteur       parametre,
                          Vecteur         vitesse,
                          double          longeur1 = 10,
                          double          longeur2 = 10,
                          double            masse1 = 10,
                          double            masse2 = 10,
                          Vecteur         origine = Vecteur(0, 0, 0),
                          Vecteur            plan = Vecteur(1, 0, 0)) :

            Oscillateur(support, parametre, vitesse)
            , L1(longeur1)
            , L2(longeur2)
            , m1(masse1)
            , m2(masse2)
            , M(m1 + m2)
            , O(origine)
            , a(plan){
    }

/*-------------------------Destructeur---------------------------*/
    //Car classe polymorphique

    virtual ~PenduleDouble() {}

/*------------------------Copie-----------------------------------*/
// Copie polymorphique pour collection heterogene

    std::unique_ptr <PenduleDouble> clone() const;

    virtual std::unique_ptr <Oscillateur> copie() const override;

/*----------------------Methodes----------------------------------*/

    virtual Vecteur evolution(double) const override;

    virtual void dessine() override;

/*----------------------Get---------------------------------------*/

    double getLongeur1() const { return L1;};

    double getLongeur2() const { return L2;};

    double getMasse1() const { return m1;};

    double getMasse2() const { return m2;};


    Vecteur getPositionM1() const;

    Vecteur getPositionM2() const;

    Vecteur getOrigine() const ;

/*-------------------------Set------------------------------------*/

    void setLongeur1(double L);

    void setMasse(double m);

    void setViscosite(double la);
};


#endif // PENDULEDOUBLE_H
