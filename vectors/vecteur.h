#include <vector>
#ifndef vecteur_h
#define vecteur_h


class Vecteur {
private:
/* data */
unsigned int dimension = 0;


std::vector<double> data;


public:
void augmente(double d);

void setCoord(std::size_t i, double d);

void affiche();

unsigned int getDimension();

double get(unsigned int i);

bool compare(Vecteur v);

};

#endif
