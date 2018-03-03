#include <vector>
#include <iostream>
using namespace std;

#include "vecteur.h"


void vecteur::augmente(double d){
	data.push_back(d);
	dimension++;
}

void vecteur::setCoord(size_t i, double d){
	try{
		if(i < dimension) {
			data[i] = d;
		}else throw i;
	}catch(int i) {
		cerr << "index " << i << " out of bounds!" << endl;
	}
}

void vecteur::affiche(){
	for (auto& d : data) {
		cout << d << ' ';
	}
}

unsigned int vecteur::getDimension(){
	return dimension;
}

double vecteur::get(unsigned int i){
	try{
		if(i < dimension) {
			return data[i];
		}else throw 1;
	}catch(int i) {
		cerr << "index out of bounds!" << endl;
		return 0;
	}
}

bool vecteur::compare(vecteur v){
	for (size_t i = 0; i < v.getDimension(); i++) {
		/* code */
		if(v.get(i) != data[i]) return false;
	}
	return true;
}
