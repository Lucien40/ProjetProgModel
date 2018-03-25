#ifndef Vecteur_h
#define Vecteur_h

#include <vector>
#include <string>
#include <iostream>


class Vecteur {
private:
/* data */
    unsigned int dimension = 0;
    std::vector<double> data;

public:

    //Constructors

    Vecteur(initializer_list<double> const& );

    Vecteur(unsigned int);

    Vecteur(double x,double y,double z);

    void augmente(double d);

    void setCoord(std::size_t i, double d);

    unsigned int getDimension() const;

    double get(unsigned int i) const;



    bool operator==(Vecteur const &) const;

    Vecteur& operator+=(Vecteur const &);  // returns a vecteur reference because operation has to have value (thus reference)

    const Vecteur operator-() const;

    Vecteur& operator-=(Vecteur const &);

    Vecteur& operator*=(double);

    std::string toString() const;

};

std::ostream& operator<<(std::ostream &, Vecteur const &);

double operator^(Vecteur const& , Vecteur const&);


#endif
