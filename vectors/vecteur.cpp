#include <vector>
#include <iostream>
#include <string>
using namespace std;

#include "Vecteur.h"


void Vecteur::augmente(double d){
  data.push_back(d);
  dimension++;
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
    s += std::to_string(d) + ' '; // TODO too mant zeros after decimal
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

std::ostream& operator<<(std::ostream& output, Vecteur const& v){
  output << v.toString();
  return output;
}
