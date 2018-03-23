#ifndef Vecteur_h
#define Vecteur_h
#include <vector>
#include <iostream>


class Vecteur {
private:
/* data */
unsigned int dimension = 0;
std::vector<double> data;

public:
void augmente(double d);

void setCoord(std::size_t i, double d);

unsigned int getDimension();

double get(unsigned int i);

bool compare(Vecteur v);

};

std::ostream& operator<<(std::ostream&, Vecteur const&);

#endif
