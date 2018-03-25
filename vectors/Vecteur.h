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
void augmente(double d);

void setCoord(std::size_t i, double d);

unsigned int getDimension() const;

double get(unsigned int i) const;

bool operator==(Vecteur const&) const;

std::string toString() const;

};

std::ostream& operator<<(std::ostream&, Vecteur const&);

#endif
