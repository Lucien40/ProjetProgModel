
#include <vector>
#include <iostream>
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
		}else throw 1;
	}catch(int j) {
		cerr << "index " << i << " out of bounds!" << endl;
	}
}



unsigned int Vecteur::getDimension(){
	return dimension;
}

double Vecteur::get(unsigned int i){
	try{
		if(i < dimension) {
			return data[i];
		}else throw 1;
	}catch(int j) {
		cerr << "index out of bounds!" << endl;
		return 0;
	}
}

bool Vecteur::Vecteur v){
	for (size_t i = 0; i < v.getDimension(); i++) {
		/* code */
		if(v.get(i) != data[i]) return false;
	}
	return true;
}

std::ostream& operator<<(std::ostream& outf, Vecteur const& v);
	for (size_t i = 0; i < v.getDimension); i++) {
		/* code */
	} {
		cout << d << ' ';
	}
}
