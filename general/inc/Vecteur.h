#ifndef Vecteur_h
#define Vecteur_h

#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <initializer_list>

class Vecteur {
private:
/*---------------------------Data-----------------------------*/

    unsigned int dimension;
    std::vector<double> data;

public:

/*--------------------------Constructeurs---------------------*/

    Vecteur(const std::initializer_list<double> &list);

    Vecteur(unsigned int dim);

    Vecteur(double x, double y, double z);

/*-------------------------Methodes---------------------------*/

    void augmente(double d);

    std::ostream &affiche(std::ostream &sortie) const;

    double norme2() const ;

/*-----------------------------Set----------------------------*/

    void setCoord(std::size_t i, double d);

/*----------------------------Get-----------------------------*/

    unsigned int getDimension() const;

    double get(unsigned int i) const;


/*-------------------------Operateurs-------------------------*/

    bool operator==(Vecteur const &) const;

    Vecteur & operator+=(Vecteur const &);  // returns a vecteur reference because operation has to have value (thus reference)

    const Vecteur operator-() const; // cannot be on other side of equal (-bla = foo)

    Vecteur &operator-=(Vecteur const &);

    Vecteur &operator*=(double d);

    Vecteur &operator/=(double d);

};

/*-------------------------Fonctions--------------------------*/

std::ostream &operator<<(std::ostream &, Vecteur const &);

Vecteur operator^(Vecteur const &, Vecteur const &);

double operator*(Vecteur const &, Vecteur const &);

const Vecteur operator+(Vecteur, Vecteur const &);

const Vecteur operator-(Vecteur, Vecteur const &);

const Vecteur operator*(double, Vecteur);


const Vecteur operator*(Vecteur,double );

const Vecteur operator/(Vecteur,double);

#endif
