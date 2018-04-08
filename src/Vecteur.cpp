#include <vector>
#include <iostream>
#include <string>
using namespace std;

#include "../inc/Vecteur.h"


void Vecteur::augmente(double d){
  data.push_back(d);
  dimension++;
}

Vecteur::Vecteur(unsigned int dim) :
data(dim){
    dimension = dim;
}

Vecteur::Vecteur(initializer_list<double> const& list) {
    for (auto a : list){
        this->augmente(a);
    }
}

Vecteur::Vecteur(double x, double y, double z) : data({x,y,z}){
    dimension =3;

}

void Vecteur::setCoord(size_t i, double d){
  try{
    if(i < dimension) {
      data[i] = d;
    }else throw i;
  }catch(int i) {
    cerr << "index " << i << " out of bounds!" << endl;
  }
}

std::string Vecteur::toString() const{
  std::string s;
  for (auto& d : data) {
    s += to_string(d) + ' '; // TODO too many zeros after decimal
  }
  return s;
}

unsigned int Vecteur::getDimension() const{
  return dimension;
}

double Vecteur::get(unsigned int i) const{
  try{
    if(i < dimension) {
      return data[i];
    }else throw 1;
  }catch(int i) {
    cerr << "index out of bounds!" << endl;
    return 0;
  }
}

bool Vecteur::operator==(Vecteur const& v) const{
  for (size_t i = 0; i < v.getDimension(); i++) {
    /* code */
    if(v.get(i) != data[i]) return false;
  }
  return true;
}


Vecteur& Vecteur::operator+=(Vecteur const & vAdded){
    try {
        if(dimension != vAdded.getDimension()) throw out_of_range ("mismatched dimensions");
        for (unsigned int i = 0; i < dimension; ++i) {
            data[i] += vAdded.get(i);
        }
    }catch (const std::out_of_range& oor){
        cerr << "Out of range error: " << oor.what() << endl;
    }
    return *this;
}

const Vecteur Vecteur::operator-() const{
    Vecteur retour(dimension);
    for(unsigned int i(0); i < dimension; ++i){
        retour.setCoord(i,data[i]);
    }
    return retour;
}

Vecteur& Vecteur::operator-=(Vecteur const & vAdded){
    try {
        if(dimension != vAdded.getDimension()) throw out_of_range ("mismatched dimensions");
        for (unsigned int i = 0; i < dimension; ++i) {
            data[i] -= vAdded.get(i);
        }
    }catch (const std::out_of_range& oor){
        cerr << "Out of range error: " << oor.what() << endl;
    }
    return *this;
}

Vecteur& Vecteur::operator*=(double d){
    for (unsigned int i = 0; i < dimension; ++i) {
        data[i] *= d;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& output, Vecteur const& v){
  output << v.toString();
  return output;
}

double operator^(Vecteur const& v1, Vecteur const& v2){
    double result(0.0);
    try {
        unsigned int d = v1.getDimension();
        if(v1.getDimension()!=v2.getDimension()) throw out_of_range ("mismatched dimensions");
            for (unsigned int i = 0; i < d; ++i) {
                result += (v1.get(i)*v2.get(i));
            }
    }catch (const std::out_of_range& oor){
        cerr << "Out of range error: " << oor.what() << endl;
    }
    return result;
}

const Vecteur operator+(Vecteur result ,Vecteur const& vAdded){
    result += vAdded;
    return result;
}

const Vecteur operator-(Vecteur result ,Vecteur const& vAdded){
    result -= vAdded;
    return result;
}

const Vecteur operator*(double d, Vecteur vAdded){
    vAdded *= d;
    return vAdded;
}
