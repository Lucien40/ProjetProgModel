#ifndef CHARIOTPENDULERESSORT_H
#define CHARIOTPENDULERESSORT_H

#include "Oscillateur.h"
#include "Constantes.h"

#include <memory>
#include <cmath>

class ChariotPenduleRessort : public Oscillateur {

private:
    double  L; // longueur du ressort
    double m1; // masse du chariot
    double m2; // masse au bout du pendule
    double la; // coeff frottement
    double mu; // coeff frottement
    double  k; // coeff ressort
    
    Vecteur O; // vecteur origine
    Vecteur a;

public:


/*-------------------------Constructeur---------------------------*/

    ChariotPenduleRessort(SupportADessin *support, 
                          Vecteur       parametre, 
                          Vecteur         vitesse, 
                          double          longeur = 10,
                          double           masse1 = 10,
                          double           masse2 = 1,
                          double            lamda = 10,
                          double               mu = 1,
                          double                k = 10,
                          Vecteur         origine = Vecteur(0, 0, 0),
                          Vecteur            plan = Vecteur(1.0, 0, 0)) :

            Oscillateur(support, parametre, vitesse)
            , L(longeur)
            , m1(masse1)
            , m2(masse2)
            , la(lamda)
            , mu(mu)
            , k(k)
            , O(origine)
            , a(plan) {
    }

/*-------------------------Destructeur---------------------------*/
    //Car classe polymorphique

    virtual ~ChariotPenduleRessort() {}

/*------------------------Copie-----------------------------------*/
// Copie polymorphique pour collection heterogene

    std::unique_ptr <ChariotPenduleRessort> clone() const;

    virtual std::unique_ptr <Oscillateur> copie() const override;

/*----------------------Methodes----------------------------------*/

    virtual Vecteur evolution(double t, Vecteur P, Vecteur V)const  override;

    virtual void dessine() override;

    virtual std::ostream& affiche(std::ostream &flot) const override;

/*----------------------Get---------------------------------------*/

    double getLongeur() const;

    double getMasse1()  const;

    double getMasse2()  const;

    double getLa()      const;

    Vecteur getPositionChariot() const;

    Vecteur getPositionPendule() const;

    Vecteur getOrigine() const ;

    Vecteur getAxis() const;

/*-------------------------Set------------------------------------*/

    void setLongeur(double L);

    void setMasse(double m);

    void setViscosite(double la);
};

#endif // CHARIOTPENDULERESSORT_H
