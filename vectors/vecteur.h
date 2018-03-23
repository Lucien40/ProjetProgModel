#ifndef Vecteur_h
#define Vecteur_h
#include <vector>
#include <iostream>
#include <initializer_list>

class Vecteur {
  private:
  /* data */
    std::size_t dimension = 0;
    std::vector<double> data;;

  public:

    // constructeurs


    Vecteur(std::size_t dimension);
    Vecteur(double x, double y, double z);
    Vecteur(std::initializer_list<double> const&);

    // methodes

    void augmente(double d);    // ajoute une coordonee au vecteur

    void setCoord(std::size_t i, double d);     // assigne une coordonee

    std::size_t getDimension();     // rend la dimension du vecteur

    double get(unsigned int i);     // rend la i-ieme valeur

    bool operator==(Vecteur v);

    Vecteur operator+=(Vecteur autre) const;

    Vecteur operator-=(Vecteur autre) const;

    Vecteur oppose() const;

    Vecteur operator*=(double) const;

};

std::ostream& operator<<(std::ostream&, Vecteur const&);     // affiche un vecteur en mode consecutif

#endif
