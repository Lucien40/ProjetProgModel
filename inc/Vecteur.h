#ifndef Vecteur_h
#define Vecteur_h

#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>

class Vecteur {
private:
/* data */
    unsigned int dimension;
    std::vector<double> data;

public:

    //Constructors

    Vecteur(std::initializer_list<double> const &list);

    Vecteur(unsigned int dim);

    Vecteur(double x,double y,double z);

    void augmente(double d);

    void setCoord(std::size_t i, double d);

    unsigned int getDimension() const;

    double get(unsigned int i) const;


    //OPERATORS

    bool operator==(Vecteur const &) const;

    Vecteur& operator+=(Vecteur const &);  // returns a vecteur reference because operation has to have value (thus reference)

    const Vecteur operator-() const; // cannot be on other side of equal (-bla = foo)

    Vecteur& operator-=(Vecteur const &);

    Vecteur& operator*=(double);

    std::string affiche() const;

};

std::ostream& operator<<(std::ostream &, Vecteur const &);

double operator^(Vecteur const& , Vecteur const&);

const Vecteur operator+(Vecteur,Vecteur const&);

const Vecteur operator-(Vecteur,Vecteur const&);

const Vecteur operator*(double ,Vecteur);






#endif
